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
#include "layout.h"
#include "leds.h"
#include "readKeys.h"


void usb_init(void);

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
	
	layout__load();
	
	readKeys_start_key_polling();
	LED_turn_on(POWER_LED);
	
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