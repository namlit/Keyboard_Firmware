/*
 * logging.c
 *
 * Created: 16.07.2016 16:46:29
 *  Author: Tilman
 */ 

#include "asf.h"

#include "errorHandling.h"
#include "logging.h"
#include "serial_communication.h"
#include "setup.h"


void logging__send_log_text(logging__message message)
{
	if (!ENABLE_LOG_SENDING)
	{
		return;
	}
	char *log_text = 0;
	switch (message)
	{
		case LOG__UNKNOWN_SERIAL_REQUEST:
			log_text = "Log: Unknown Serial Request\n";
			break;
		default:
			errorHandling_reportError(ERROR_UNKNOWN_LOG_MESSAGE);
		
	}
	serial_communication__send_text(log_text, MAX_LOG_TEXT_LENGTH);
}