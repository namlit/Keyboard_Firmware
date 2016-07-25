/*
 * serial_communication.h
 *
 * Created: 16.07.2016 15:04:52
 *  Author: Tilman
 */ 


#ifndef SERIAL_COMMUNICATION_H_
#define SERIAL_COMMUNICATION_H_

typedef enum serial_communication__request {	SERIAL__GET_FIRMWARE_VERSION,
												SERIAL__GET_ERRORS,
												SERIAL__GET_ERROR_TEXTS,
												SERIAL__LOAD_LAYOUT,
												SERIAL__GET_ACTIVE_LAYOUT,
												SERIAL__GET_LIST_OF_INTALLED_LAYOUTS,
												SERIAL__SET_ACTIVE_LAYOUT
} serial_communication__request;

void serial_communication__data_available_interrupt(void);
uint8_t serial_communication__read_single_byte(void);
uint16_t serial_communication__read_two_bytes(void);
uint32_t serial_communication__read_four_bytes(void);
void serial_communication__read_and_evaluate_data(void);
void serial_communication__send_single_byte(uint8_t value);
void serial_communication__send_two_byte(uint16_t value);
void serial_communication__send_four_byte(uint32_t value);
void serial_communication__send_text(char *text, uint8_t max_text_lenght);
void serial_communication__send_data(char *data, uint16_t length);



#endif /* SERIAL_COMMUNICATION_H_ */