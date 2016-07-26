/*
 * errorHandling.h
 *
 * Created: 23.03.2016 00:06:39
 *  Author: Tilman
 */ 


#ifndef ERRORHANDLING_H_
#define ERRORHANDLING_H_

#define MAX_ERROR_TEXT_LENGTH 50

typedef enum errorHandling_errorType {ERROR_EVENT_QUEUE_OVERFLOW, ERROR_EVENT_QUEUE_EMPTY, ERROR_QUEUE_ERROR, ERROR_UNKNOWN_EVENT_TYPE, ERROR_INVALID_KEY_TYPE,
	ERROR_SERIAL_TX_NOT_READY, ERROR_UNKNOWN_LOG_MESSAGE, ERROR_NO_BYTE_AVAILABLE, ERROR_INVALID_SHIFT_BITMASK
	} errorHandling_errorType;

void errorHandling_reportError(errorHandling_errorType type);
void error_handling__send_error_text(errorHandling_errorType type);



#endif /* ERRORHANDLING_H_ */