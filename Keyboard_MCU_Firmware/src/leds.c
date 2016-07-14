/*
 * leds.c
 *
 * Created: 22.03.2016 20:14:14
 *  Author: Tilman
 */ 

#include <asf.h>

#include "leds.h"

volatile uint8_t LED_current_status;

/**
 
*/
void LED_send_values_to_shift_register(void)
{
	ioport_set_pin_low(LED_SHIFT_REGISTER_SHCP_PIN);
	ioport_set_pin_low(LED_SHIFT_REGISTER_STCP_PIN);
	
	for (uint8_t i = 0; i < NUMBER_OF_LEDS; i++)
	{
		ioport_set_pin_level(LED_SHIFT_REGISTER_DS_PIN, LED_current_status & (1 << i));
		ioport_set_pin_high(LED_SHIFT_REGISTER_SHCP_PIN);
		ioport_set_pin_low(LED_SHIFT_REGISTER_SHCP_PIN);
	}
	ioport_set_pin_high(LED_SHIFT_REGISTER_STCP_PIN);
	ioport_set_pin_low(LED_SHIFT_REGISTER_STCP_PIN);
}

void LED_turn_on(uint8_t ledNumber)
{
	LED_current_status = LED_current_status | (0x80 >> ledNumber);
	LED_send_values_to_shift_register();
}

void LED_turn_off(uint8_t ledNumber)
{
	LED_current_status = LED_current_status & ~(0x80 >> ledNumber);
	LED_send_values_to_shift_register();
}

void LED_toggle(uint8_t ledNumber)
{
	LED_current_status = LED_current_status ^ (0x80 >> ledNumber);
	LED_send_values_to_shift_register();
}

void LED_write_binary_number(uint8_t number)
{
	LED_current_status = (LED_current_status & 0xF8) | (0x07 & number);
	LED_send_values_to_shift_register();
}