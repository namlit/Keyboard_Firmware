/*
 * readKeys.c
 *
 * Created: 22.03.2016 21:22:24
 *  Author: Tilman
 */ 

#include <asf.h>

#include "eventQueue.h"
#include "leds.h"
#include "readKeys.h"

volatile uint8_t current_keyMatrix_Status[KEYBOARD_NUMBER_OF_COLUMNS];

ioport_pin_t KEYBOARD_COLUMN_PINS[KEYBOARD_NUMBER_OF_COLUMNS] = 
{	
	KEYBOARD_COLUMN_0_PIN, KEYBOARD_COLUMN_1_PIN, KEYBOARD_COLUMN_2_PIN, KEYBOARD_COLUMN_3_PIN,
	KEYBOARD_COLUMN_4_PIN, KEYBOARD_COLUMN_5_PIN, KEYBOARD_COLUMN_6_PIN, KEYBOARD_COLUMN_7_PIN,
	KEYBOARD_COLUMN_8_PIN, KEYBOARD_COLUMN_9_PIN, KEYBOARD_COLUMN_10_PIN, KEYBOARD_COLUMN_11_PIN
};

void readKeys_set_all_columns_to_low(void)
{
	for (uint8_t column = 0; column < KEYBOARD_NUMBER_OF_COLUMNS; column++)
	{
		ioport_set_pin_low(KEYBOARD_COLUMN_PINS[column]);
	}
}

void readKeys_set_all_columns_to_high(void)
{
	for (uint8_t column = 0; column < KEYBOARD_NUMBER_OF_COLUMNS; column++)
	{
		ioport_set_pin_high(KEYBOARD_COLUMN_PINS[column]);
	}
}


static void readKeys_poll_keys(void)
{
	static volatile uint8_t last_keyMatrix_value[KEYBOARD_NUMBER_OF_COLUMNS];
	static volatile uint8_t next_keyMatrix_value[KEYBOARD_NUMBER_OF_COLUMNS];
	
	for (uint8_t column = 0; column < KEYBOARD_NUMBER_OF_COLUMNS; column++)
	{
		ioport_set_pin_low(KEYBOARD_COLUMN_PINS[column]);
		next_keyMatrix_value[column] = ~ioport_get_port_level(KEYBOARD_ROW_PORT, 0xff);
		ioport_set_pin_high(KEYBOARD_COLUMN_PINS[column]);
		
		if (next_keyMatrix_value[column] == last_keyMatrix_value[column]) // Debounce, value valid
		{
			
			for(uint8_t row = 0; row < KEYBOARD_NUMBER_OF_ROWS; row++)
			{
				if ( (next_keyMatrix_value[column] & (1 << row)) != (current_keyMatrix_Status[column] & (1 << row)) )
				{	//LED_toggle(column);
					eventQueue_event keyEvent;
					if (next_keyMatrix_value[column] & (1 << row))
					{
						keyEvent.type = EVENT_KEY_PRESSED;
					}
					else
					{
						keyEvent.type = EVENT_KEY_RELEASED;
					}
					keyEvent.data.key.row = row;
					keyEvent.data.key.column = column;
					
					eventQueue_pushEvent(keyEvent);
				}
			}
			
			current_keyMatrix_Status[column] = next_keyMatrix_value[column];
		}
		last_keyMatrix_value[column] = next_keyMatrix_value[column];
	}
}

void readKeys_start_key_polling(void)
{
	readKeys_set_all_columns_to_high();
	tc_enable(&TCC0);
	tc_set_overflow_interrupt_callback(&TCC0, readKeys_poll_keys);
	//tc_set_wgm(&TCC0, TC_WG_NORMAL);
	tc_write_period(&TCC0, 24000);
	tc_write_period(&TCC0, 0xffff);
	tc_set_overflow_interrupt_level(&TCC0, TC_INT_LVL_LO);
	cpu_irq_enable();
	tc_write_clock_source(&TCC0, TC_CLKSEL_DIV1_gc);
	//tc_write_clock_source(&TCC0, TC_CLKSEL_DIV1024_gc);
}

void readKeys_stop_key_polling(void)
{
	tc_disable(&TCC0);
	
	readKeys_set_all_columns_to_low();
}
