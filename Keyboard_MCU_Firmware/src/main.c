/**
 * \file
 *
 * \brief Empty user application template
 *
 */

/**
 * \mainpage User Application template doxygen documentation
 *
 * \par Empty user application template
 *
 * Bare minimum empty user application template
 *
 * \par Content
 *
 * -# Include the ASF header files (through asf.h)
 * -# "Insert system clock initialization code here" comment
 * -# Minimal main function that starts with a call to board_init()
 * -# "Insert application code here" comment
 *
 */

/*
 * Include header files for all drivers that have been imported from
 * Atmel Software Framework (ASF).
 */
#include <asf.h>

#include "eventQueue.h"
#include "errorHandling.h"
#include "external_eeprom.h"
#include "layout.h"
#include "leds.h"
#include "readKeys.h"
#include "serial_communication.h"


void usb_init(void);
void start_debug_timer(void);
void debug_timer_event(void);

int main (void)
{
	// Insert system clock initialization code here (sysclk_init()).

	pmic_init();
	sysclk_init();
	ioport_init();
	irq_initialize_vectors();
	cpu_irq_enable();
	board_init();
	sleepmgr_init();
	
	usb_init();
	ext_eeprom__spi_init();
	
	layout__load();
	
	readKeys_start_key_polling();
	LED_turn_on(POWER_LED);
	start_debug_timer();
	
	while(1)
	{
		if (!eventQueue_isEmty())
		{
			eventQueue_event theEvent = eventQueue_popEvent();
			eventQueue_processEvent(theEvent);
		}
		
		//sleepmgr_enter_sleep();
	}

	// Insert application code here, after the board has been initialized.
}


void usb_init(void)
{
	udc_start();
}

void debug_timer_event()
{
	LED_write_binary_number(layout__current_level);
}

void start_debug_timer()
{
	tc_enable(&TCC1);
	tc_set_overflow_interrupt_callback(&TCC1, debug_timer_event);
	tc_write_period(&TCC1, 24000);
	tc_write_period(&TCC1, 0xffff);
	tc_set_overflow_interrupt_level(&TCC1, TC_INT_LVL_LO);
	cpu_irq_enable();
	tc_write_clock_source(&TCC1, TC_CLKSEL_DIV1_gc);
}
