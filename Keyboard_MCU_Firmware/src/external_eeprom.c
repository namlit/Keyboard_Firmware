/*
 * external_eeprom.c
 *
 * Created: 17.07.2016 11:48:47
 *  Author: Tilman
 */ 

#include <asf.h>

#include "external_eeprom.h"
#include "leds.h"

const uint8_t ext_eeprom__read_at_address_command = 0x03;
const uint8_t ext_eeprom__write_at_address_command = 0x02;
const uint8_t ext_eeprom__disable_write_operations_command = 0x04;
const uint8_t ext_eeprom__enable_write_operations_command = 0x06;
const uint8_t ext_eeprom__read_status_register_command = 0x05;
const uint8_t ext_eeprom__write_status_register_command = 0x01;

struct spi_device ext_eeprom__spi_device_conf = {
	.id = EEPROM_CS_PIN
};

void ext_eeprom__spi_init(void)
{
	
	spi_master_init(&SPIC);
	spi_master_setup_device(&SPIC, &ext_eeprom__spi_device_conf, SPI_MODE_0, 1000000, 0);
	spi_enable(&SPIC);
}

void ext_eeprom__write_data(uint16_t address, uint8_t *data, uint8_t length)
{
	spi_select_device(&SPIC, &ext_eeprom__spi_device_conf);
	spi_write_packet(&SPIC, &ext_eeprom__enable_write_operations_command, 1);
	spi_deselect_device(&SPIC, &ext_eeprom__spi_device_conf);
	
	spi_select_device(&SPIC, &ext_eeprom__spi_device_conf);
	spi_write_packet(&SPIC, &ext_eeprom__write_at_address_command, 1);
	spi_write_packet(&SPIC, (uint8_t*) &address, 1);
	spi_write_packet(&SPIC, ((uint8_t*) &address) + 1, 1);
	spi_write_packet(&SPIC, data, length);
	spi_deselect_device(&SPIC, &ext_eeprom__spi_device_conf);

}


void ext_eeprom__read_data(uint16_t address, uint8_t *data, uint8_t length)
{
	spi_select_device(&SPIC, &ext_eeprom__spi_device_conf);
	spi_write_packet(&SPIC, &ext_eeprom__read_at_address_command, 1);
	spi_write_packet(&SPIC, (uint8_t*) &address, 1);
	spi_write_packet(&SPIC, ((uint8_t*) &address) + 1, 1);
	spi_read_packet(&SPIC, data, length);
	spi_deselect_device(&SPIC, &ext_eeprom__spi_device_conf);
}

uint8_t ext_eeprom__read_status_register(void)
{
	uint8_t response = 0;
	spi_select_device(&SPIC, &ext_eeprom__spi_device_conf);
	spi_write_packet(&SPIC, &ext_eeprom__read_status_register_command, 1);
	spi_read_packet(&SPIC, &response, 1);
	spi_deselect_device(&SPIC, &ext_eeprom__spi_device_conf);
	return response;
}
