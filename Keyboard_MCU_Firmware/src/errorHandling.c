/*
 * errorHandling.c
 *
 * Created: 23.03.2016 00:06:49
 *  Author: Tilman
 */ 

#include <asf.h>

#include "errorHandling.h"
#include "leds.h"
#include "serial_communication.h"
#include "setup.h"

void errorHandling_reportError(errorHandling_errorType type)
{
	LED_turn_on(ERROR_LED);
	error_handling__send_error_text(type);
}

void error_handling__send_error_text(errorHandling_errorType type)
{
	if (!ENABLE_ERROR_SENDING)
	{
		return;
	}
	char *error_text = 0;
	switch (type)
	{
		
		case ERROR_EVENT_QUEUE_OVERFLOW:
			error_text = "Error: Event queue overflow\n";
			break;
		case ERROR_EVENT_QUEUE_EMPTY:
			error_text = "Error: Tried to read from empty event queue\n";
			break;
		case ERROR_QUEUE_ERROR:
			error_text = "Error: Unknown event queue error\n";
			break;
		case ERROR_UNKNOWN_EVENT_TYPE:
			error_text = "Error: Unknown Error\n";
			break;
		case ERROR_INVALID_KEY_TYPE:
			error_text = "Error: Invalid key type\n";
			break;
		case ERROR_SERIAL_TX_NOT_READY:
			error_text = "Error: Serial Tx not ready\n";
			break;
		case ERROR_UNKNOWN_LOG_MESSAGE:
			error_text = "Error: Unknown log message\n";
			break;
		case ERROR_NO_BYTE_AVAILABLE:
			error_text = "Error: Byte expected but not available\n";
			break;
	}
	serial_communication__send_text(error_text, MAX_ERROR_TEXT_LENGTH);
}