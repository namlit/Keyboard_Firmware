/*
 * external_eeprom.c
 *
 * Created: 17.07.2016 11:48:47
 *  Author: Tilman
 */ 

#include <asf.h>

#include "external_eeprom.h"
#include "layout.h"
#include "leds.h"
#include "serial_communication.h"

const uint8_t ext_eeprom__read_at_address_command = 0x03;
const uint8_t ext_eeprom__write_at_address_command = 0x02;
const uint8_t ext_eeprom__disable_write_operations_command = 0x04;
const uint8_t ext_eeprom__enable_write_operations_command = 0x06;
const uint8_t ext_eeprom__read_status_register_command = 0x05;
const uint8_t ext_eeprom__write_status_register_command = 0x01;

const uint16_t ext_eeprom__size_of_keyboard_layout = ((sizeof(layout__complete_layout) + LAYOUT__MAX_LENGTH_OF_NAME) & 0xffc0) + EXT_EEPROM__PAGE_SIZE;

const uint16_t ext_eeprom__general_information_address = 0;
const uint16_t ext_eeprom__errors_start_address = EXT_EEPROM__PAGE_SIZE;
const uint16_t ext_eeprom__first_layout_address = 2 * EXT_EEPROM__PAGE_SIZE;

struct spi_device ext_eeprom__spi_device_conf = {
	.id = EEPROM_CS_PIN
};

void ext_eeprom__spi_init(void)
{
	
	spi_master_init(&SPIC);
	spi_master_setup_device(&SPIC, &ext_eeprom__spi_device_conf, SPI_MODE_0, 1000000, 0);
	spi_enable(&SPIC);
}

void ext_eeprom__write_data(uint16_t address, uint8_t *data, uint16_t length)
{
	uint16_t bytes_written = 0;
	while (length > 0)
	{
		bytes_written = ext_eeprom__write_data_until_page_end(address, data, length);
		length -= bytes_written;
		address += bytes_written;
		data += bytes_written;
	}
}

uint16_t ext_eeprom__write_data_until_page_end(uint16_t address, uint8_t *data, uint16_t length)
{	
	uint16_t page_end = (address & 0xffc0) + EXT_EEPROM__PAGE_SIZE;
	uint16_t number_of_byte_written = length;
	if (page_end < (address + length) )
	{
		number_of_byte_written = page_end - address;
	}
	
	spi_select_device(&SPIC, &ext_eeprom__spi_device_conf);
	spi_write_single(&SPIC, ext_eeprom__enable_write_operations_command);
	spi_deselect_device(&SPIC, &ext_eeprom__spi_device_conf);
	
	spi_select_device(&SPIC, &ext_eeprom__spi_device_conf);
	
	spi_write_single(&SPIC, ext_eeprom__write_at_address_command);
	spi_write_single(&SPIC, (uint8_t) address>>8);
	spi_write_single(&SPIC, (uint8_t) address);
	spi_write_packet(&SPIC, data, number_of_byte_written);
	spi_deselect_device(&SPIC, &ext_eeprom__spi_device_conf);
	
	return number_of_byte_written;
}


void ext_eeprom__read_data(uint16_t address, uint8_t *data, uint16_t length)
{
	spi_select_device(&SPIC, &ext_eeprom__spi_device_conf);
	spi_write_single(&SPIC, ext_eeprom__read_at_address_command);
	spi_write_single(&SPIC, (uint8_t) address>>8);
	spi_write_single(&SPIC, (uint8_t) address);
	spi_read_packet(&SPIC, data, length);
	spi_deselect_device(&SPIC, &ext_eeprom__spi_device_conf);
}

uint8_t ext_eeprom__read_status_register(void)
{
	uint8_t response = 0;
	spi_select_device(&SPIC, &ext_eeprom__spi_device_conf);
	spi_write_single(&SPIC, ext_eeprom__read_status_register_command);
	spi_read_single(&SPIC, &response);
	spi_deselect_device(&SPIC, &ext_eeprom__spi_device_conf);
	return response;
}


void ext_eeprom__read_general_information(void)
{
	ext_eeprom__read_data(ext_eeprom__general_information_address, 
		(uint8_t*) &ext_eeprom__general_information, sizeof(ext_eeprom__general_information));
}

void ext_eeprom__write_general_information(void)
{
	ext_eeprom__write_data(ext_eeprom__general_information_address,
	(uint8_t*) &ext_eeprom__general_information, sizeof(ext_eeprom__general_information));
}

void ext_eeprom__read_keyboard_layout(uint8_t layout_number)
{
	uint16_t start_address = ext_eeprom__first_layout_address + layout_number * ext_eeprom__size_of_keyboard_layout;
	ext_eeprom__read_data(start_address, layout__name, LAYOUT__MAX_LENGTH_OF_NAME);
	start_address += LAYOUT__MAX_LENGTH_OF_NAME;
	ext_eeprom__read_data(start_address, (uint8_t*) &layout__complete_layout, sizeof(layout__complete_layout));
}


void ext_eeprom__write_status_register(uint8_t value)
{
	value &= 0x7f; // prevent accidentally setting WPEN to high and protecting the status register
	spi_select_device(&SPIC, &ext_eeprom__spi_device_conf);
	spi_write_single(&SPIC, ext_eeprom__write_status_register_command);
	spi_write_single(&SPIC, value);
	spi_deselect_device(&SPIC, &ext_eeprom__spi_device_conf);
}

void ext_eeprom__write_keyboard_layout(uint8_t layout_number)
{
	uint16_t start_address = ext_eeprom__first_layout_address + layout_number * ext_eeprom__size_of_keyboard_layout;
	ext_eeprom__write_data(start_address, layout__name, LAYOUT__MAX_LENGTH_OF_NAME);
	start_address += LAYOUT__MAX_LENGTH_OF_NAME;
	ext_eeprom__write_data(start_address, (uint8_t*) &layout__complete_layout, sizeof(layout__complete_layout));
}

