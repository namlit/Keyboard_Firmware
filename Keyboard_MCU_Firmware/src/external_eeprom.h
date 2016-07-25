/*
 * external_eeprom.h
 *
 * Created: 17.07.2016 11:48:33
 *  Author: Tilman
 */ 


#ifndef EXTERNAL_EEPROM_H_
#define EXTERNAL_EEPROM_H_

#define EXT_EEPROM__PAGE_SIZE 64
#define EXT_EEPROM__NUMBER_OF_PAGES 512,

extern const uint8_t ext_eeprom__read_at_address_command;
extern const uint8_t ext_eeprom__write_at_address_command;
extern const uint8_t ext_eeprom__disable_write_operations_command;
extern const uint8_t ext_eeprom__enable_write_operations_command;
extern const uint8_t ext_eeprom__read_status_register_command;
extern const uint8_t ext_eeprom__write_status_register_command;

extern const uint16_t ext_eeprom__size_of_keyboard_layout;

extern const uint16_t ext_eeprom__general_information_address;
extern const uint16_t ext_eeprom__errors_start_address;
extern const uint16_t ext_eeprom__first_layout_address;

extern struct spi_device ext_eeprom__spi_device_conf;

struct
{
	uint8_t active_keyboard_layout;
	
} ext_eeprom__general_information;

void ext_eeprom__spi_init(void);
void ext_eeprom__write_data(uint16_t address, uint8_t *data, uint16_t length);
uint16_t ext_eeprom__write_data_until_page_end(uint16_t address, uint8_t *data, uint16_t length);
void ext_eeprom__read_data(uint16_t address, uint8_t *data, uint16_t length);

uint8_t ext_eeprom__read_status_register(void);
void ext_eeprom__read_general_information(void);
void ext_eeprom__read_keyboard_layout(uint8_t layout_number);

void ext_eeprom__write_status_register(uint8_t);
void ext_eeprom__write_general_information(void);
void ext_eeprom__write_keyboard_layout(uint8_t layout_number);




#endif /* EXTERNAL_EEPROM_H_ */