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
		uint8_t response = 42;
		uint16_t address = 0;
		uint8_t array[50];
		for (uint16_t i = 0; i < 50; i++)
		{
			array[i] = i;
		}
		
		switch (request)
		{
			case SERIAL__GET_FIRMWARE_VERSION:
				serial_communication__send_single_byte( (char) MAJOR_FIRMWARE_VERSION);
				serial_communication__send_single_byte( (char) MINOR_FIRMWARE_VERSION);
				break;
			case 1:
				spi_select_device(&SPIC, &ext_eeprom__spi_device_conf);
				spi_write_single(&SPIC, ext_eeprom__enable_write_operations_command);
				spi_deselect_device(&SPIC, &ext_eeprom__spi_device_conf);
				
				spi_select_device(&SPIC, &ext_eeprom__spi_device_conf);
				spi_write_single(&SPIC, ext_eeprom__write_at_address_command);
				spi_write_single(&SPIC, 0x00);
				spi_write_single(&SPIC, 0x01);
				spi_write_packet(&SPIC, array, 50);
				spi_deselect_device(&SPIC, &ext_eeprom__spi_device_conf);
				
				for (uint8_t i = 0; i < 16; ++i)
				{
					serial_communication__send_single_byte(ext_eeprom__read_status_register());
				}
				break;
			case 2:
				for (uint16_t i = 0; i < 48; ++i, ++address)
				{
					ext_eeprom__read_data(0, &response, 1);
					serial_communication__send_single_byte( response);
				}
				break;
			case 3:
				serial_communication__send_single_byte(ext_eeprom__read_status_register());
				break;
			case 4:
				spi_select_device(&SPIC, &ext_eeprom__spi_device_conf);
				spi_write_single(&SPIC, ext_eeprom__enable_write_operations_command);
				spi_deselect_device(&SPIC, &ext_eeprom__spi_device_conf);
				
				spi_select_device(&SPIC, &ext_eeprom__spi_device_conf);
				
				spi_write_single(&SPIC, ext_eeprom__read_status_register_command);
				spi_read_single(&SPIC, &response);
				serial_communication__send_single_byte(response);
				spi_deselect_device(&SPIC, &ext_eeprom__spi_device_conf);
					
				break;
			case 5:
				//spi_select_device(&SPIC, &ext_eeprom__spi_device_conf);
				for (uint32_t i = 0; i < 1000000; ++i)
				{
					spi_read_single(&SPIC, &response);
				}
				//spi_write_single(&SPIC, ext_eeprom__enable_write_operations_command);
				//spi_deselect_device(&SPIC, &ext_eeprom__spi_device_conf);;
				break;
			default:
				logging__send_log_text(LOG__UNKNOWN_SERIAL_REQUEST);
		}
	}
	LED_turn_off(RECEIVE_LED);
}

void serial_communication__send_single_byte(uint8_t value)
{
	LED_turn_on(TRANSMIT_LED);
	if (!udi_cdc_is_tx_ready())
	{
		errorHandling_reportError(ERROR_SERIAL_TX_NOT_READY);
	}
	udi_cdc_putc( (int) value);
	LED_turn_off(TRANSMIT_LED);
}


void serial_communication__send_two_byte(uint16_t value)
{
	serial_communication__send_single_byte((uint8_t) (value >> 8));
	serial_communication__send_single_byte((uint8_t) value);
}

void serial_communication__send_four_byte(uint32_t value)
{
	serial_communication__send_two_byte((uint16_t) (value >> 16));
	serial_communication__send_two_byte((uint16_t) value);
}

void serial_communication__send_text(char *text, uint8_t max_text_lenght)
{
	for (uint8_t i = 0; i < max_text_lenght; i++)
	{
		char current_char = text[i];
		serial_communication__send_single_byte(current_char);
		if (current_char == 0)
		{
			break;
		}
	}
}

void serial_communication__send_data(char *data, uint16_t length)
{
	for (uint16_t i = 0; i < length; i++)
	{
		char current_char = data[i];
		serial_communication__send_single_byte(current_char);
	}
}
