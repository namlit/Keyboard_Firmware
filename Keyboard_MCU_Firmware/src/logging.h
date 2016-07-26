/*
 * logging.h
 *
 * Created: 16.07.2016 16:46:15
 *  Author: Tilman
 */ 


#ifndef LOGGING_H_
#define LOGGING_H_

#define MAX_LOG_TEXT_LENGTH 50

typedef enum logging__message {LOG__UNKNOWN_SERIAL_REQUEST
} logging__message;

void logging__send_log_message(logging__message message);
void logging__send_log_text(uint8_t *text, uint8_t max_length);



#endif /* LOGGING_H_ */