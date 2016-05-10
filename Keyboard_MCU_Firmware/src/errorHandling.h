/*
 * errorHandling.h
 *
 * Created: 23.03.2016 00:06:39
 *  Author: Tilman
 */ 


#ifndef ERRORHANDLING_H_
#define ERRORHANDLING_H_

typedef enum errorHandling_errorType {ERROR_EVENT_QUEUE_OVERFLOW, ERROR_EVENT_QUEUE_EMPTY, ERROR_UNKNOWN_EVENT_TYPE
	} errorHandling_errorType;

void errorHandling_reportError(errorHandling_errorType type);



#endif /* ERRORHANDLING_H_ */