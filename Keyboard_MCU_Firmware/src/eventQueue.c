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



eventQueue_event eventQueue[EVENT_QUEUE_MAX_SIZE];
uint8_t eventQueue_firstElementIndex = 0;
uint8_t eventQueue_lastElementIndex = 0;
uint8_t eventQueue_currentSize = 0;

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
			//udi_hid_kbd_down(0x04);
			//udi_hid_kbd_down(LAYOUT_ALL_KEYS[theEvent.data.key.row][theEvent.data.key.column].level[0].value.keycode);
			layout_handle_key_press(theEvent.data.key);
			break;
		case EVENT_KEY_RELEASED:
			//udi_hid_kbd_up(0x04);
			//udi_hid_kbd_up(LAYOUT_ALL_KEYS[theEvent.data.key.row][theEvent.data.key.column].level[0].value.keycode);
			layout_handle_key_release(theEvent.data.key);
			break;
		default:
			errorHandling_reportError(ERROR_UNKNOWN_EVENT_TYPE);
	}
}