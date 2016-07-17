/*
 * external_eeprom.h
 *
 * Created: 17.07.2016 11:48:33
 *  Author: Tilman
 */ 


#ifndef EXTERNAL_EEPROM_H_
#define EXTERNAL_EEPROM_H_


extern const uint8_t ext_eeprom__read_at_address_command;
extern const uint8_t ext_eeprom__write_at_address_command;
extern const uint8_t ext_eeprom__disable_write_operations_command;
extern const uint8_t ext_eeprom__enable_write_operations_command;
extern const uint8_t ext_eeprom__read_status_register_command;
extern const uint8_t ext_eeprom__write_status_register_command;

extern struct spi_device ext_eeprom__spi_device_conf;

void ext_eeprom__spi_init(void);
void ext_eeprom__write_data(uint16_t address, uint8_t *data, uint8_t length);
void ext_eeprom__read_data(uint16_t address, uint8_t *data, uint8_t length);

uint8_t ext_eeprom__read_status_register(void);


#endif /* EXTERNAL_EEPROM_H_ */