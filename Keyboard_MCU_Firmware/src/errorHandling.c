/*
 * errorHandling.c
 *
 * Created: 23.03.2016 00:06:49
 *  Author: Tilman
 */ 

#include <asf.h>

#include "errorHandling.h"
#include "leds.h"

void errorHandling_reportError(errorHandling_errorType type)
{
	LED_turn_on(ERROR_LED);
}