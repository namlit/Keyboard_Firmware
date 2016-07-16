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
void serial_communication__read_and_evaluate_data(void);
void serial_communication__send_char(char character);
void serial_communication__send_text(char *text, uint8_t max_text_lenght);



#endif /* SERIAL_COMMUNICATION_H_ */