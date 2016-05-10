/**
 * \file
 *
 * \brief User board initialization template
 *
 */

#include <asf.h>
#include <board.h>
#include <conf_board.h>

//#include "keyboard_matrix.h"

void board_init(void)
{
	/* This function is meant to contain board-specific initialization code
	 * for, e.g., the I/O pins. The initialization can rely on application-
	 * specific board configuration, found in conf_board.h.
	 */
	
	
	ioport_set_port_dir(KEYBOARD_ROW_PORT, 0xff, IOPORT_DIR_INPUT);
	ioport_set_port_mode(KEYBOARD_ROW_PORT, 0xff, IOPORT_MODE_PULLUP);
		
		
	ioport_set_pin_dir(KEYBOARD_COLUMN_0_PIN, IOPORT_DIR_OUTPUT);
	ioport_set_pin_dir(KEYBOARD_COLUMN_1_PIN, IOPORT_DIR_OUTPUT);
	ioport_set_pin_dir(KEYBOARD_COLUMN_2_PIN, IOPORT_DIR_OUTPUT);
	ioport_set_pin_dir(KEYBOARD_COLUMN_3_PIN, IOPORT_DIR_OUTPUT);
	ioport_set_pin_dir(KEYBOARD_COLUMN_4_PIN, IOPORT_DIR_OUTPUT);
	ioport_set_pin_dir(KEYBOARD_COLUMN_5_PIN, IOPORT_DIR_OUTPUT);
	ioport_set_pin_dir(KEYBOARD_COLUMN_6_PIN, IOPORT_DIR_OUTPUT);
	ioport_set_pin_dir(KEYBOARD_COLUMN_7_PIN, IOPORT_DIR_OUTPUT);
	ioport_set_pin_dir(KEYBOARD_COLUMN_8_PIN, IOPORT_DIR_OUTPUT);
	ioport_set_pin_dir(KEYBOARD_COLUMN_9_PIN, IOPORT_DIR_OUTPUT);
	ioport_set_pin_dir(KEYBOARD_COLUMN_10_PIN, IOPORT_DIR_OUTPUT);
	ioport_set_pin_dir(KEYBOARD_COLUMN_11_PIN, IOPORT_DIR_OUTPUT);
	
	ioport_set_pin_high(KEYBOARD_COLUMN_0_PIN );
	ioport_set_pin_high(KEYBOARD_COLUMN_1_PIN );
	ioport_set_pin_high(KEYBOARD_COLUMN_2_PIN );
	ioport_set_pin_high(KEYBOARD_COLUMN_3_PIN );
	ioport_set_pin_high(KEYBOARD_COLUMN_4_PIN );
	ioport_set_pin_high(KEYBOARD_COLUMN_5_PIN );
	ioport_set_pin_high(KEYBOARD_COLUMN_6_PIN );
	ioport_set_pin_high(KEYBOARD_COLUMN_7_PIN );
	ioport_set_pin_high(KEYBOARD_COLUMN_8_PIN );
	ioport_set_pin_high(KEYBOARD_COLUMN_9_PIN );
	ioport_set_pin_high(KEYBOARD_COLUMN_10_PIN );
	ioport_set_pin_high(KEYBOARD_COLUMN_11_PIN );
	

	ioport_set_pin_dir(EEPROM_CS_PIN, IOPORT_DIR_INPUT); // Change direction to output, when actually used
	ioport_set_pin_dir(EEPROM_MOSI_PIN, IOPORT_DIR_INPUT); // Change direction to output, when actually used
	ioport_set_pin_dir(EEPROM_MISO_PIN, IOPORT_DIR_INPUT); // Change direction to output, when actually used
	ioport_set_pin_dir(EEPROM_SCK_PIN, IOPORT_DIR_INPUT); // Change direction to output, when actually used


	ioport_set_pin_dir(USB_DATA_MINUS_PIN, IOPORT_DIR_INPUT);
	ioport_set_pin_dir(USB_DATA_PLUS_PIN, IOPORT_DIR_INPUT);


	ioport_set_pin_dir(SWITCH_1_PIN, IOPORT_DIR_INPUT);
	ioport_set_pin_dir(SWITCH_2_PIN, IOPORT_DIR_INPUT);
	ioport_set_pin_dir(SWITCH_3_PIN, IOPORT_DIR_INPUT);
	ioport_set_pin_dir(SWITCH_4_PIN, IOPORT_DIR_INPUT);
	ioport_set_pin_dir(SWITCH_5_PIN, IOPORT_DIR_INPUT);
		
	ioport_set_pin_mode(SWITCH_1_PIN, IOPORT_MODE_PULLUP);
	ioport_set_pin_mode(SWITCH_2_PIN, IOPORT_MODE_PULLUP);
	ioport_set_pin_mode(SWITCH_3_PIN, IOPORT_MODE_PULLUP);
	ioport_set_pin_mode(SWITCH_4_PIN, IOPORT_MODE_PULLUP);
	ioport_set_pin_mode(SWITCH_5_PIN, IOPORT_MODE_PULLUP);


	ioport_set_pin_dir(LED_SHIFT_REGISTER_DS_PIN, IOPORT_DIR_OUTPUT);
	ioport_set_pin_dir(LED_SHIFT_REGISTER_SHCP_PIN, IOPORT_DIR_OUTPUT);
	ioport_set_pin_dir(LED_SHIFT_REGISTER_STCP_PIN, IOPORT_DIR_OUTPUT);
		
	ioport_set_pin_low(LED_SHIFT_REGISTER_DS_PIN);
	ioport_set_pin_low(LED_SHIFT_REGISTER_SHCP_PIN);
	ioport_set_pin_low(LED_SHIFT_REGISTER_STCP_PIN);
	
}
