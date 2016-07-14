/*
 * leds.h
 *
 * Created: 22.03.2016 20:14:01
 *  Author: Tilman
 */ 


#ifndef LEDS_H_
#define LEDS_H_

#define NUMBER_OF_LEDS 8

#define ERROR_LED 0
#define POWER_LED 1
#define DEBUG_LED 2

void LED_send_values_to_shift_register(void);
void LED_turn_on(uint8_t ledNumber);
void LED_turn_off(uint8_t ledNumber);
void LED_toggle(uint8_t ledNumber);

void LED_write_binary_number(uint8_t number);

#endif /* LEDS_H_ */