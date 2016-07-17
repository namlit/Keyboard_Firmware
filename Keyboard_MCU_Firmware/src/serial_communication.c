/*
 * serial_communication.c
 *
 * Created: 16.07.2016 15:05:06
 *  Author: Tilman
 */ 

#include <asf.h>

#include "serial_communication.h"
#include "eventQueue.h"
#include "errorHandling.h"
#include "external_eeprom.h"
#include "layout.h"
#include "leds.h"
#include "logging.h"
#include "setup.h"

void serial_communication__data_available_interrupt(void)
{
	eventQueue_event event;
	event.type = EVENT_SERIAL_DATA_AVAILABLE;
	eventQueue_pushEvent(event);
}

uint8_t serial_communication__read_single_byte(void)
{
	LED_turn_on(RECEIVE_LED);
	if (!udi_cdc_is_rx_ready())
	{
		errorHandling_reportError(ERROR_NO_BYTE_AVAILABLE);
	}
	uint8_t byte = udi_cdc_getc();
	LED_turn_off(RECEIVE_LED);
	return byte;
}

uint16_t serial_communication__read_two_bytes(void)
{
	uint8_t low_byte = serial_communication__read_single_byte();
	uint8_t high_byte = serial_communication__read_single_byte();
	uint16_t word = ( (uint16_t) high_byte << 8) + low_byte;
	return word;
}

uint32_t serial_communication__read_four_bytes(void)
{
	uint16_t low_word = serial_communication__read_two_bytes();
	uint16_t high_word = serial_communication__read_two_bytes();
	uint32_t result = ( (uint32_t) high_word << 16) + low_word;
	return result;
}

void serial_communication__read_and_evaluate_data(void)
{
	LED_turn_on(RECEIVE_LED);
	while (udi_cdc_is_rx_ready())
	{
		uint8_t request = udi_cdc_getc();
		uint8_t response = 0;
		switch (request)
		{
			case SERIAL__GET_FIRMWARE_VERSION:
				serial_communication__send_char( (char) MAJOR_FIRMWARE_VERSION);
				serial_communication__send_char( (char) MINOR_FIRMWARE_VERSION);
				break;
			case 1:
				response = ext_eeprom__read_status_register();
				serial_communication__send_char(response);
				break;
			case 2:
				spi_select_device(&SPIC, &ext_eeprom__spi_device_conf);
				spi_write_packet(&SPIC, &ext_eeprom__read_at_address_command, 1);
				spi_write_packet(&SPIC, (uint8_t*) 0, 1);
				spi_write_packet(&SPIC, (uint8_t*) 0, 1);
				for (uint8_t i = 0; i < 80; ++i)
				{
					spi_read_packet(&SPIC, &response, 1);
					serial_communication__send_char( response);
				}
				spi_deselect_device(&SPIC, &ext_eeprom__spi_device_conf);
				break;
			case 3:
				serial_communication__send_char( (char) sizeof(layout__key_value));
				break;
			case 4:
				serial_communication__send_char( (char) sizeof(layout__key));
				break;
			case 5:
				serial_communication__send_char( (char) sizeof(layout__keyLevels));
				break;
			default:
				logging__send_log_text(LOG__UNKNOWN_SERIAL_REQUEST);
		}
	}
	LED_turn_off(RECEIVE_LED);
}

void serial_communication__send_char(char character)
{
	LED_turn_on(TRANSMIT_LED);
	if (!udi_cdc_is_tx_ready())
	{
		errorHandling_reportError(ERROR_SERIAL_TX_NOT_READY);
	}
	udi_cdc_putc( (int) character);
	LED_turn_off(TRANSMIT_LED);
}

void serial_communication__send_text(char *text, uint8_t max_text_lenght)
{
	for (uint8_t i = 0; i < max_text_lenght; i++)
	{
		char current_char = text[i];
		serial_communication__send_char(current_char);
		if (current_char == 0)
		{
			break;
		}
	}
}
