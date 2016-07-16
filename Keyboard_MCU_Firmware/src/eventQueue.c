/*
 * eventQueue.c
 *
 * Created: 22.03.2016 23:43:34
 *  Author: Tilman
 */ 

#include <asf.h>

#include "eventQueue.h"
#include "errorHandling.h"
#include "layout.h"
#include "leds.h"
#include "serial_communication.h"



eventQueue_event eventQueue[EVENT_QUEUE_MAX_SIZE];
uint8_t eventQueue_firstElementIndex = 0;
uint8_t eventQueue_lastElementIndex = 0;
uint8_t eventQueue_currentSize = 0;

uint8_t eventQueue_iterator = 0;

void eventQueue_pushEvent(eventQueue_event newEvent)
{
	if (eventQueue_currentSize >= EVENT_QUEUE_MAX_SIZE)
	{
		errorHandling_reportError(ERROR_EVENT_QUEUE_OVERFLOW);
		return;
	}
	
	eventQueue[eventQueue_lastElementIndex] = newEvent;
	
	eventQueue_lastElementIndex++;
	if (eventQueue_lastElementIndex >= EVENT_QUEUE_MAX_SIZE)
	{
		eventQueue_lastElementIndex = 0;
	}
	
	eventQueue_currentSize++;
}

eventQueue_event eventQueue_popEvent(void)
{
	if (eventQueue_currentSize == 0)
	{
		errorHandling_reportError(ERROR_EVENT_QUEUE_EMPTY);
		eventQueue_event errorEvent;
		errorEvent.type = EVENT_QUEUE_ERROR;
		return errorEvent;
	}
	
	eventQueue_event popEvent = eventQueue[eventQueue_firstElementIndex];
	
	eventQueue_firstElementIndex++;
	if (eventQueue_firstElementIndex >= EVENT_QUEUE_MAX_SIZE)
	{
		eventQueue_firstElementIndex = 0;
	}
	
	eventQueue_currentSize--;
	
	return popEvent;
}

bool eventQueue_isEmty(void)
{
	return (eventQueue_currentSize == 0);
}

void eventQueue_processEvent(eventQueue_event theEvent)
{
	switch (theEvent.type)
	{
		case EVENT_KEY_PRESSED:
			layout__handle_key_press(theEvent.data.key);
			break;
		case EVENT_KEY_RELEASED:
			layout__handle_key_release(theEvent.data.key);
			break;
		case EVENT_SERIAL_DATA_AVAILABLE:
			serial_communication__read_and_evaluate_data();
			break;
		default:
			errorHandling_reportError(ERROR_QUEUE_ERROR);
	}
}

uint8_t eventQueue_getCurrentSize(void)
{
	return eventQueue_currentSize;
}
