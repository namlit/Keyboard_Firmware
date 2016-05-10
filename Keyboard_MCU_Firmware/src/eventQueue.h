/*
 * eventQueue.h
 *
 * Created: 22.03.2016 23:43:24
 *  Author: Tilman
 */ 


#ifndef EVENTQUEUE_H_
#define EVENTQUEUE_H_

#include "layout.h"

#define EVENT_QUEUE_MAX_SIZE 10


typedef enum eventQueue_eventType {EVENT_QUEUE_ERROR, EVENT_KEY_PRESSED, EVENT_KEY_RELEASED} eventQueue_eventType;

typedef union eventQueue_eventData
{
	layout_keyIndices key;

} eventQueue_eventData;

typedef struct eventQueue_event
{
	eventQueue_eventType type;
	eventQueue_eventData data;
	
} eventQueue_event;


void eventQueue_pushEvent(eventQueue_event newEvent);
eventQueue_event eventQueue_popEvent(void);
bool eventQueue_isEmty(void);
void eventQueue_processEvent(eventQueue_event);


#endif /* EVENTQUEUE_H_ */