/*
 * layout.c
 *
 * Created: 23.03.2016 00:43:13
 *  Author: Tilman
 */ 

#include <asf.h>

#include "layout.h"
#include "leds.h"
#include "errorHandling.h"

layout__keyLevels layout__complete_layout[KEYBOARD_NUMBER_OF_ROWS][KEYBOARD_NUMBER_OF_COLUMNS];
uint8_t layout__computer_modifier_state;
uint16_t layout__internal_modifier_state;
uint8_t layout__current_level;
uint16_t layout__level_modifier_state;
uint16_t layout__level_lock_state;

void layout__load(void)
{
	
	layout__complete_layout[0][0].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][0].level[0].value.keycode = KEY_F1;
	layout__complete_layout[0][0].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][0].level[1].value.keycode = KEY_F1;
	layout__complete_layout[0][0].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][0].level[2].value.keycode = KEY_F1;
	layout__complete_layout[0][0].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][0].level[3].value.keycode = KEY_F1;
	layout__complete_layout[0][0].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][0].level[4].value.keycode = KEY_F1;
	layout__complete_layout[0][0].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][0].level[5].value.keycode = KEY_F1;

	layout__complete_layout[0][1].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][1].level[0].value.keycode = KEY_F2;
	layout__complete_layout[0][1].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][1].level[1].value.keycode = KEY_F2;
	layout__complete_layout[0][1].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][1].level[2].value.keycode = KEY_F2;
	layout__complete_layout[0][1].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][1].level[3].value.keycode = KEY_F2;
	layout__complete_layout[0][1].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][1].level[4].value.keycode = KEY_F2;
	layout__complete_layout[0][1].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][1].level[5].value.keycode = KEY_F2;

	layout__complete_layout[0][2].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][2].level[0].value.keycode = KEY_F3;
	layout__complete_layout[0][2].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][2].level[1].value.keycode = KEY_F3;
	layout__complete_layout[0][2].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][2].level[2].value.keycode = KEY_F3;
	layout__complete_layout[0][2].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][2].level[3].value.keycode = KEY_F3;
	layout__complete_layout[0][2].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][2].level[4].value.keycode = KEY_F3;
	layout__complete_layout[0][2].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][2].level[5].value.keycode = KEY_F3;

	layout__complete_layout[0][3].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][3].level[0].value.keycode = KEY_F4;
	layout__complete_layout[0][3].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][3].level[1].value.keycode = KEY_F4;
	layout__complete_layout[0][3].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][3].level[2].value.keycode = KEY_F4;
	layout__complete_layout[0][3].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][3].level[3].value.keycode = KEY_F4;
	layout__complete_layout[0][3].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][3].level[4].value.keycode = KEY_F4;
	layout__complete_layout[0][3].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][3].level[5].value.keycode = KEY_F4;

	layout__complete_layout[0][4].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][4].level[0].value.keycode = KEY_F5;
	layout__complete_layout[0][4].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][4].level[1].value.keycode = KEY_F5;
	layout__complete_layout[0][4].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][4].level[2].value.keycode = KEY_F5;
	layout__complete_layout[0][4].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][4].level[3].value.keycode = KEY_F5;
	layout__complete_layout[0][4].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][4].level[4].value.keycode = KEY_F5;
	layout__complete_layout[0][4].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][4].level[5].value.keycode = KEY_F5;

	layout__complete_layout[0][5].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][5].level[0].value.keycode = KEY_F6;
	layout__complete_layout[0][5].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][5].level[1].value.keycode = KEY_F6;
	layout__complete_layout[0][5].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][5].level[2].value.keycode = KEY_F6;
	layout__complete_layout[0][5].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][5].level[3].value.keycode = KEY_F6;
	layout__complete_layout[0][5].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][5].level[4].value.keycode = KEY_F6;
	layout__complete_layout[0][5].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][5].level[5].value.keycode = KEY_F6;

	layout__complete_layout[0][6].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][6].level[0].value.keycode = KEY_F7;
	layout__complete_layout[0][6].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][6].level[1].value.keycode = KEY_F7;
	layout__complete_layout[0][6].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][6].level[2].value.keycode = KEY_F7;
	layout__complete_layout[0][6].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][6].level[3].value.keycode = KEY_F7;
	layout__complete_layout[0][6].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][6].level[4].value.keycode = KEY_F7;
	layout__complete_layout[0][6].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][6].level[5].value.keycode = KEY_F7;

	layout__complete_layout[0][7].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][7].level[0].value.keycode = KEY_F8;
	layout__complete_layout[0][7].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][7].level[1].value.keycode = KEY_F8;
	layout__complete_layout[0][7].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][7].level[2].value.keycode = KEY_F8;
	layout__complete_layout[0][7].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][7].level[3].value.keycode = KEY_F8;
	layout__complete_layout[0][7].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][7].level[4].value.keycode = KEY_F8;
	layout__complete_layout[0][7].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][7].level[5].value.keycode = KEY_F8;

	layout__complete_layout[0][8].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][8].level[0].value.keycode = KEY_F9;
	layout__complete_layout[0][8].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][8].level[1].value.keycode = KEY_F9;
	layout__complete_layout[0][8].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][8].level[2].value.keycode = KEY_F9;
	layout__complete_layout[0][8].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][8].level[3].value.keycode = KEY_F9;
	layout__complete_layout[0][8].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][8].level[4].value.keycode = KEY_F9;
	layout__complete_layout[0][8].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][8].level[5].value.keycode = KEY_F9;

	layout__complete_layout[0][9].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][9].level[0].value.keycode = KEY_F10;
	layout__complete_layout[0][9].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][9].level[1].value.keycode = KEY_F10;
	layout__complete_layout[0][9].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][9].level[2].value.keycode = KEY_F10;
	layout__complete_layout[0][9].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][9].level[3].value.keycode = KEY_F10;
	layout__complete_layout[0][9].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][9].level[4].value.keycode = KEY_F10;
	layout__complete_layout[0][9].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][9].level[5].value.keycode = KEY_F10;

	layout__complete_layout[0][10].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][10].level[0].value.keycode = KEY_F11;
	layout__complete_layout[0][10].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][10].level[1].value.keycode = KEY_F11;
	layout__complete_layout[0][10].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][10].level[2].value.keycode = KEY_F11;
	layout__complete_layout[0][10].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][10].level[3].value.keycode = KEY_F11;
	layout__complete_layout[0][10].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][10].level[4].value.keycode = KEY_F11;
	layout__complete_layout[0][10].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][10].level[5].value.keycode = KEY_F11;

	layout__complete_layout[0][11].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][11].level[0].value.keycode = KEY_F12;
	layout__complete_layout[0][11].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][11].level[1].value.keycode = KEY_F12;
	layout__complete_layout[0][11].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][11].level[2].value.keycode = KEY_F12;
	layout__complete_layout[0][11].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][11].level[3].value.keycode = KEY_F12;
	layout__complete_layout[0][11].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][11].level[4].value.keycode = KEY_F12;
	layout__complete_layout[0][11].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[0][11].level[5].value.keycode = KEY_F12;

	layout__complete_layout[1][0].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][0].level[0].value.keycode = KEY_ESCAPE;
	layout__complete_layout[1][0].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][0].level[1].value.keycode = KEY_ESCAPE;
	layout__complete_layout[1][0].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][0].level[2].value.keycode = KEY_ESCAPE;
	layout__complete_layout[1][0].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][0].level[3].value.keycode = KEY_ESCAPE;
	layout__complete_layout[1][0].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][0].level[4].value.keycode = KEY_ESCAPE;
	layout__complete_layout[1][0].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][0].level[5].value.keycode = KEY_ESCAPE;

	// layout__complete_layout[1][1].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][1].level[0].value.keycode = KEY_;
	// layout__complete_layout[1][1].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][1].level[1].value.keycode = KEY_;
	// layout__complete_layout[1][1].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][1].level[2].value.keycode = KEY_;
	// layout__complete_layout[1][1].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][1].level[3].value.keycode = KEY_;
	// layout__complete_layout[1][1].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][1].level[4].value.keycode = KEY_;
	// layout__complete_layout[1][1].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][1].level[5].value.keycode = KEY_;

	// layout__complete_layout[1][2].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][2].level[0].value.keycode = KEY_;
	// layout__complete_layout[1][2].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][2].level[1].value.keycode = KEY_;
	// layout__complete_layout[1][2].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][2].level[2].value.keycode = KEY_;
	// layout__complete_layout[1][2].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][2].level[3].value.keycode = KEY_;
	// layout__complete_layout[1][2].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][2].level[4].value.keycode = KEY_;
	// layout__complete_layout[1][2].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][2].level[5].value.keycode = KEY_;

	// layout__complete_layout[1][3].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][3].level[0].value.keycode = KEY_;
	// layout__complete_layout[1][3].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][3].level[1].value.keycode = KEY_;
	// layout__complete_layout[1][3].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][3].level[2].value.keycode = KEY_;
	// layout__complete_layout[1][3].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][3].level[3].value.keycode = KEY_;
	// layout__complete_layout[1][3].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][3].level[4].value.keycode = KEY_;
	// layout__complete_layout[1][3].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][3].level[5].value.keycode = KEY_;

	layout__complete_layout[1][4].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][4].level[0].value.keycode = KEY_PRINT;
	layout__complete_layout[1][4].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][4].level[1].value.keycode = KEY_PRINT;
	layout__complete_layout[1][4].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][4].level[2].value.keycode = KEY_PRINT;
	layout__complete_layout[1][4].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][4].level[3].value.keycode = KEY_PRINT;
	layout__complete_layout[1][4].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][4].level[4].value.keycode = KEY_PRINT;
	layout__complete_layout[1][4].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][4].level[5].value.keycode = KEY_PRINT;

	layout__complete_layout[1][5].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][5].level[0].value.keycode = KEY_SCROLL_LOCK;
	layout__complete_layout[1][5].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][5].level[1].value.keycode = KEY_SCROLL_LOCK;
	layout__complete_layout[1][5].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][5].level[2].value.keycode = KEY_SCROLL_LOCK;
	layout__complete_layout[1][5].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][5].level[3].value.keycode = KEY_SCROLL_LOCK;
	layout__complete_layout[1][5].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][5].level[4].value.keycode = KEY_SCROLL_LOCK;
	layout__complete_layout[1][5].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][5].level[5].value.keycode = KEY_SCROLL_LOCK;

	layout__complete_layout[1][6].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][6].level[0].value.keycode = KEY_PAUSE;
	layout__complete_layout[1][6].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][6].level[1].value.keycode = KEY_PAUSE;
	layout__complete_layout[1][6].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][6].level[2].value.keycode = KEY_PAUSE;
	layout__complete_layout[1][6].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][6].level[3].value.keycode = KEY_PAUSE;
	layout__complete_layout[1][6].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][6].level[4].value.keycode = KEY_PAUSE;
	layout__complete_layout[1][6].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][6].level[5].value.keycode = KEY_PAUSE;

	// layout__complete_layout[1][7].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][7].level[0].value.keycode = KEY_;
	// layout__complete_layout[1][7].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][7].level[1].value.keycode = KEY_;
	// layout__complete_layout[1][7].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][7].level[2].value.keycode = KEY_;
	// layout__complete_layout[1][7].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][7].level[3].value.keycode = KEY_;
	// layout__complete_layout[1][7].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][7].level[4].value.keycode = KEY_;
	// layout__complete_layout[1][7].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][7].level[5].value.keycode = KEY_;

	// layout__complete_layout[1][8].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][8].level[0].value.keycode = KEY_;
	// layout__complete_layout[1][8].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][8].level[1].value.keycode = KEY_;
	// layout__complete_layout[1][8].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][8].level[2].value.keycode = KEY_;
	// layout__complete_layout[1][8].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][8].level[3].value.keycode = KEY_;
	// layout__complete_layout[1][8].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][8].level[4].value.keycode = KEY_;
	// layout__complete_layout[1][8].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][8].level[5].value.keycode = KEY_;

	// layout__complete_layout[1][9].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][9].level[0].value.keycode = KEY_;
	// layout__complete_layout[1][9].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][9].level[1].value.keycode = KEY_;
	// layout__complete_layout[1][9].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][9].level[2].value.keycode = KEY_;
	// layout__complete_layout[1][9].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][9].level[3].value.keycode = KEY_;
	// layout__complete_layout[1][9].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][9].level[4].value.keycode = KEY_;
	// layout__complete_layout[1][9].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][9].level[5].value.keycode = KEY_;

	// layout__complete_layout[1][10].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][10].level[0].value.keycode = KEY_;
	// layout__complete_layout[1][10].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][10].level[1].value.keycode = KEY_;
	// layout__complete_layout[1][10].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][10].level[2].value.keycode = KEY_;
	// layout__complete_layout[1][10].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][10].level[3].value.keycode = KEY_;
	// layout__complete_layout[1][10].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][10].level[4].value.keycode = KEY_;
	// layout__complete_layout[1][10].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][10].level[5].value.keycode = KEY_;

	// layout__complete_layout[1][11].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][11].level[0].value.keycode = KEY_;
	// layout__complete_layout[1][11].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][11].level[1].value.keycode = KEY_;
	// layout__complete_layout[1][11].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][11].level[2].value.keycode = KEY_;
	// layout__complete_layout[1][11].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][11].level[3].value.keycode = KEY_;
	// layout__complete_layout[1][11].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][11].level[4].value.keycode = KEY_;
	// layout__complete_layout[1][11].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[1][11].level[5].value.keycode = KEY_;

	layout__complete_layout[2][0].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][0].level[0].value.keycode = KEY_HEAD;
	layout__complete_layout[2][0].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][0].level[1].value.keycode = KEY_HEAD;
	layout__complete_layout[2][0].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][0].level[2].value.keycode = KEY_HEAD;
	layout__complete_layout[2][0].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][0].level[3].value.keycode = KEY_HEAD;
	layout__complete_layout[2][0].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][0].level[4].value.keycode = KEY_HEAD;
	layout__complete_layout[2][0].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][0].level[5].value.keycode = KEY_HEAD;

	layout__complete_layout[2][1].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][1].level[0].value.keycode = KEY_1;
	layout__complete_layout[2][1].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][1].level[1].value.keycode = KEY_1;
	layout__complete_layout[2][1].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][1].level[2].value.keycode = KEY_1;
	layout__complete_layout[2][1].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][1].level[3].value.keycode = KEY_1;
	layout__complete_layout[2][1].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][1].level[4].value.keycode = KEY_1;
	layout__complete_layout[2][1].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][1].level[5].value.keycode = KEY_1;

	layout__complete_layout[2][2].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][2].level[0].value.keycode = KEY_2;
	layout__complete_layout[2][2].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][2].level[1].value.keycode = KEY_2;
	layout__complete_layout[2][2].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][2].level[2].value.keycode = KEY_2;
	layout__complete_layout[2][2].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][2].level[3].value.keycode = KEY_2;
	layout__complete_layout[2][2].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][2].level[4].value.keycode = KEY_2;
	layout__complete_layout[2][2].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][2].level[5].value.keycode = KEY_2;

	layout__complete_layout[2][3].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][3].level[0].value.keycode = KEY_3;
	layout__complete_layout[2][3].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][3].level[1].value.keycode = KEY_3;
	layout__complete_layout[2][3].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][3].level[2].value.keycode = KEY_3;
	layout__complete_layout[2][3].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][3].level[3].value.keycode = KEY_3;
	layout__complete_layout[2][3].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][3].level[4].value.keycode = KEY_3;
	layout__complete_layout[2][3].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][3].level[5].value.keycode = KEY_3;

	layout__complete_layout[2][4].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][4].level[0].value.keycode = KEY_4;
	layout__complete_layout[2][4].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][4].level[1].value.keycode = KEY_4;
	layout__complete_layout[2][4].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][4].level[2].value.keycode = KEY_4;
	layout__complete_layout[2][4].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][4].level[3].value.keycode = KEY_4;
	layout__complete_layout[2][4].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][4].level[4].value.keycode = KEY_4;
	layout__complete_layout[2][4].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][4].level[5].value.keycode = KEY_4;

	layout__complete_layout[2][5].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][5].level[0].value.keycode = KEY_5;
	layout__complete_layout[2][5].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][5].level[1].value.keycode = KEY_5;
	layout__complete_layout[2][5].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][5].level[2].value.keycode = KEY_5;
	layout__complete_layout[2][5].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][5].level[3].value.keycode = KEY_5;
	layout__complete_layout[2][5].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][5].level[4].value.keycode = KEY_5;
	layout__complete_layout[2][5].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][5].level[5].value.keycode = KEY_5;

	layout__complete_layout[2][6].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][6].level[0].value.keycode = KEY_6;
	layout__complete_layout[2][6].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][6].level[1].value.keycode = KEY_6;
	layout__complete_layout[2][6].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][6].level[2].value.keycode = KEY_6;
	layout__complete_layout[2][6].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][6].level[3].value.keycode = KEY_6;
	layout__complete_layout[2][6].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][6].level[4].value.keycode = KEY_6;
	layout__complete_layout[2][6].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][6].level[5].value.keycode = KEY_6;

	layout__complete_layout[2][7].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][7].level[0].value.keycode = KEY_7;
	layout__complete_layout[2][7].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][7].level[1].value.keycode = KEY_7;
	layout__complete_layout[2][7].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][7].level[2].value.keycode = KEY_7;
	layout__complete_layout[2][7].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][7].level[3].value.keycode = KEY_7;
	layout__complete_layout[2][7].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][7].level[4].value.keycode = KEY_7;
	layout__complete_layout[2][7].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][7].level[5].value.keycode = KEY_7;

	layout__complete_layout[2][8].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][8].level[0].value.keycode = KEY_8;
	layout__complete_layout[2][8].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][8].level[1].value.keycode = KEY_8;
	layout__complete_layout[2][8].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][8].level[2].value.keycode = KEY_8;
	layout__complete_layout[2][8].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][8].level[3].value.keycode = KEY_8;
	layout__complete_layout[2][8].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][8].level[4].value.keycode = KEY_8;
	layout__complete_layout[2][8].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][8].level[5].value.keycode = KEY_8;

	layout__complete_layout[2][9].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][9].level[0].value.keycode = KEY_9;
	layout__complete_layout[2][9].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][9].level[1].value.keycode = KEY_9;
	layout__complete_layout[2][9].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][9].level[2].value.keycode = KEY_9;
	layout__complete_layout[2][9].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][9].level[3].value.keycode = KEY_9;
	layout__complete_layout[2][9].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][9].level[4].value.keycode = KEY_9;
	layout__complete_layout[2][9].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][9].level[5].value.keycode = KEY_9;

	layout__complete_layout[2][10].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][10].level[0].value.keycode = KEY_0;
	layout__complete_layout[2][10].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][10].level[1].value.keycode = KEY_0;
	layout__complete_layout[2][10].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][10].level[2].value.keycode = KEY_0;
	layout__complete_layout[2][10].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][10].level[3].value.keycode = KEY_0;
	layout__complete_layout[2][10].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][10].level[4].value.keycode = KEY_0;
	layout__complete_layout[2][10].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][10].level[5].value.keycode = KEY_0;

	layout__complete_layout[2][11].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][11].level[0].value.keycode = KEY_MINUS;
	layout__complete_layout[2][11].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][11].level[1].value.keycode = KEY_MINUS;
	layout__complete_layout[2][11].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][11].level[2].value.keycode = KEY_MINUS;
	layout__complete_layout[2][11].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][11].level[3].value.keycode = KEY_MINUS;
	layout__complete_layout[2][11].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][11].level[4].value.keycode = KEY_MINUS;
	layout__complete_layout[2][11].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[2][11].level[5].value.keycode = KEY_MINUS;

	layout__complete_layout[3][0].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][0].level[0].value.keycode = KEY_Y;
	layout__complete_layout[3][0].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][0].level[1].value.keycode = KEY_Y;
	layout__complete_layout[3][0].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][0].level[2].value.keycode = KEY_Y;
	layout__complete_layout[3][0].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][0].level[3].value.keycode = KEY_Y;
	layout__complete_layout[3][0].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][0].level[4].value.keycode = KEY_Y;
	layout__complete_layout[3][0].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][0].level[5].value.keycode = KEY_Y;

	layout__complete_layout[3][1].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][1].level[0].value.keycode = KEY_X;
	layout__complete_layout[3][1].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][1].level[1].value.keycode = KEY_X;
	layout__complete_layout[3][1].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][1].level[2].value.keycode = KEY_X;
	layout__complete_layout[3][1].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][1].level[3].value.keycode = KEY_X;
	layout__complete_layout[3][1].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][1].level[4].value.keycode = KEY_X;
	layout__complete_layout[3][1].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][1].level[5].value.keycode = KEY_X;

	layout__complete_layout[3][2].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][2].level[0].value.keycode = KEY_V;
	layout__complete_layout[3][2].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][2].level[1].value.keycode = KEY_V;
	layout__complete_layout[3][2].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][2].level[2].value.keycode = KEY_V;
	layout__complete_layout[3][2].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][2].level[3].value.keycode = KEY_DELETE;
	layout__complete_layout[3][2].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][2].level[4].value.keycode = KEY_V;
	layout__complete_layout[3][2].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][2].level[5].value.keycode = KEY_V;

	layout__complete_layout[3][3].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][3].level[0].value.keycode = KEY_L;
	layout__complete_layout[3][3].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][3].level[1].value.keycode = KEY_L;
	layout__complete_layout[3][3].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][3].level[2].value.keycode = KEY_L;
	layout__complete_layout[3][3].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][3].level[3].value.keycode = KEY_UP_ARROW;
	layout__complete_layout[3][3].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][3].level[4].value.keycode = KEY_L;
	layout__complete_layout[3][3].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][3].level[5].value.keycode = KEY_L;

	layout__complete_layout[3][4].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][4].level[0].value.keycode = KEY_C;
	layout__complete_layout[3][4].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][4].level[1].value.keycode = KEY_C;
	layout__complete_layout[3][4].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][4].level[2].value.keycode = KEY_C;
	layout__complete_layout[3][4].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][4].level[3].value.keycode = KEY_DELETE_FORWARD;
	layout__complete_layout[3][4].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][4].level[4].value.keycode = KEY_C;
	layout__complete_layout[3][4].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][4].level[5].value.keycode = KEY_C;

	layout__complete_layout[3][5].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][5].level[0].value.keycode = KEY_W;
	layout__complete_layout[3][5].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][5].level[1].value.keycode = KEY_W;
	layout__complete_layout[3][5].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][5].level[2].value.keycode = KEY_W;
	layout__complete_layout[3][5].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][5].level[3].value.keycode = KEY_W;
	layout__complete_layout[3][5].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][5].level[4].value.keycode = KEY_W;
	layout__complete_layout[3][5].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][5].level[5].value.keycode = KEY_W;

	layout__complete_layout[3][6].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][6].level[0].value.keycode = KEY_K;
	layout__complete_layout[3][6].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][6].level[1].value.keycode = KEY_K;
	layout__complete_layout[3][6].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][6].level[2].value.keycode = KEY_K;
	layout__complete_layout[3][6].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][6].level[3].value.keycode = KEY_K;
	layout__complete_layout[3][6].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][6].level[4].value.keycode = KEY_K;
	layout__complete_layout[3][6].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][6].level[5].value.keycode = KEY_K;

	layout__complete_layout[3][7].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][7].level[0].value.keycode = KEY_H;
	layout__complete_layout[3][7].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][7].level[1].value.keycode = KEY_H;
	layout__complete_layout[3][7].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][7].level[2].value.keycode = KEY_H;
	layout__complete_layout[3][7].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][7].level[3].value.keycode = KEY_KEYPAD_7;
	layout__complete_layout[3][7].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][7].level[4].value.keycode = KEY_H;
	layout__complete_layout[3][7].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][7].level[5].value.keycode = KEY_H;

	layout__complete_layout[3][8].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][8].level[0].value.keycode = KEY_G;
	layout__complete_layout[3][8].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][8].level[1].value.keycode = KEY_G;
	layout__complete_layout[3][8].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][8].level[2].value.keycode = KEY_G;
	layout__complete_layout[3][8].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][8].level[3].value.keycode = KEY_KEYPAD_8;
	layout__complete_layout[3][8].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][8].level[4].value.keycode = KEY_G;
	layout__complete_layout[3][8].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][8].level[5].value.keycode = KEY_G;

	layout__complete_layout[3][9].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][9].level[0].value.keycode = KEY_F;
	layout__complete_layout[3][9].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][9].level[1].value.keycode = KEY_F;
	layout__complete_layout[3][9].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][9].level[2].value.keycode = KEY_F;
	layout__complete_layout[3][9].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][9].level[3].value.keycode = KEY_KEYPAD_9;
	layout__complete_layout[3][9].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][9].level[4].value.keycode = KEY_F;
	layout__complete_layout[3][9].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][9].level[5].value.keycode = KEY_F;

	layout__complete_layout[3][10].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][10].level[0].value.keycode = KEY_Q;
	layout__complete_layout[3][10].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][10].level[1].value.keycode = KEY_Q;
	layout__complete_layout[3][10].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][10].level[2].value.keycode = KEY_Q;
	layout__complete_layout[3][10].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][10].level[3].value.keycode = KEY_Q;
	layout__complete_layout[3][10].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][10].level[4].value.keycode = KEY_Q;
	layout__complete_layout[3][10].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][10].level[5].value.keycode = KEY_Q;

	layout__complete_layout[3][11].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][11].level[0].value.keycode = KEY_ESZETT;
	layout__complete_layout[3][11].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][11].level[1].value.keycode = KEY_ESZETT;
	layout__complete_layout[3][11].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][11].level[2].value.keycode = KEY_ESZETT;
	layout__complete_layout[3][11].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][11].level[3].value.keycode = KEY_ESZETT;
	layout__complete_layout[3][11].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][11].level[4].value.keycode = KEY_ESZETT;
	layout__complete_layout[3][11].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[3][11].level[5].value.keycode = KEY_ESZETT;

	layout__complete_layout[4][0].level[0].type = LAYOUT_TYPE_COMPUTER_MODIFIER; layout__complete_layout[4][0].level[0].value.modifier.modifier_bitmask = MODIFIER_LEFT_SHIFT_BITMASK; layout__complete_layout[4][0].level[0].value.modifier.level = 1;
	layout__complete_layout[4][0].level[1].type = LAYOUT_TYPE_COMPUTER_MODIFIER; layout__complete_layout[4][0].level[1].value.modifier.modifier_bitmask = MODIFIER_LEFT_SHIFT_BITMASK; layout__complete_layout[4][0].level[1].value.modifier.level = 1;
	layout__complete_layout[4][0].level[2].type = LAYOUT_TYPE_COMPUTER_MODIFIER; layout__complete_layout[4][0].level[2].value.modifier.modifier_bitmask = MODIFIER_LEFT_SHIFT_BITMASK; layout__complete_layout[4][0].level[2].value.modifier.level = 1;
	layout__complete_layout[4][0].level[3].type = LAYOUT_TYPE_COMPUTER_MODIFIER; layout__complete_layout[4][0].level[3].value.modifier.modifier_bitmask = MODIFIER_LEFT_SHIFT_BITMASK; layout__complete_layout[4][0].level[3].value.modifier.level = 1;
	layout__complete_layout[4][0].level[4].type = LAYOUT_TYPE_COMPUTER_MODIFIER; layout__complete_layout[4][0].level[4].value.modifier.modifier_bitmask = MODIFIER_LEFT_SHIFT_BITMASK; layout__complete_layout[4][0].level[4].value.modifier.level = 1;
	layout__complete_layout[4][0].level[5].type = LAYOUT_TYPE_COMPUTER_MODIFIER; layout__complete_layout[4][0].level[5].value.modifier.modifier_bitmask = MODIFIER_LEFT_SHIFT_BITMASK; layout__complete_layout[4][0].level[5].value.modifier.level = 1;

	layout__complete_layout[4][1].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][1].level[0].value.keycode = KEY_U;
	layout__complete_layout[4][1].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][1].level[1].value.keycode = KEY_U;
	layout__complete_layout[4][1].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][1].level[2].value.keycode = KEY_U;
	layout__complete_layout[4][1].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][1].level[3].value.keycode = KEY_U;
	layout__complete_layout[4][1].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][1].level[4].value.keycode = KEY_U;
	layout__complete_layout[4][1].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][1].level[5].value.keycode = KEY_U;

	layout__complete_layout[4][2].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][2].level[0].value.keycode = KEY_I;
	layout__complete_layout[4][2].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][2].level[1].value.keycode = KEY_I;
	layout__complete_layout[4][2].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][2].level[2].value.keycode = KEY_I;
	layout__complete_layout[4][2].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][2].level[3].value.keycode = KEY_LEFT_ARROW;
	layout__complete_layout[4][2].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][2].level[4].value.keycode = KEY_I;
	layout__complete_layout[4][2].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][2].level[5].value.keycode = KEY_I;

	layout__complete_layout[4][3].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][3].level[0].value.keycode = KEY_A;
	layout__complete_layout[4][3].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][3].level[1].value.keycode = KEY_A;
	layout__complete_layout[4][3].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][3].level[2].value.keycode = KEY_A;
	layout__complete_layout[4][3].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][3].level[3].value.keycode = KEY_DOWN_ARROW;
	layout__complete_layout[4][3].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][3].level[4].value.keycode = KEY_A;
	layout__complete_layout[4][3].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][3].level[5].value.keycode = KEY_A;

	layout__complete_layout[4][4].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][4].level[0].value.keycode = KEY_E;
	layout__complete_layout[4][4].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][4].level[1].value.keycode = KEY_E;
	layout__complete_layout[4][4].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][4].level[2].value.keycode = KEY_E;
	layout__complete_layout[4][4].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][4].level[3].value.keycode = KEY_RIGHT_ARROW;
	layout__complete_layout[4][4].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][4].level[4].value.keycode = KEY_E;
	layout__complete_layout[4][4].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][4].level[5].value.keycode = KEY_E;

	layout__complete_layout[4][5].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][5].level[0].value.keycode = KEY_O;
	layout__complete_layout[4][5].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][5].level[1].value.keycode = KEY_O;
	layout__complete_layout[4][5].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][5].level[2].value.keycode = KEY_O;
	layout__complete_layout[4][5].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][5].level[3].value.keycode = KEY_O;
	layout__complete_layout[4][5].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][5].level[4].value.keycode = KEY_O;
	layout__complete_layout[4][5].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][5].level[5].value.keycode = KEY_O;

	layout__complete_layout[4][6].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][6].level[0].value.keycode = KEY_S;
	layout__complete_layout[4][6].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][6].level[1].value.keycode = KEY_S;
	layout__complete_layout[4][6].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][6].level[2].value.keycode = KEY_S;
	layout__complete_layout[4][6].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][6].level[3].value.keycode = KEY_S;
	layout__complete_layout[4][6].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][6].level[4].value.keycode = KEY_S;
	layout__complete_layout[4][6].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][6].level[5].value.keycode = KEY_S;

	layout__complete_layout[4][7].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][7].level[0].value.keycode = KEY_N;
	layout__complete_layout[4][7].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][7].level[1].value.keycode = KEY_N;
	layout__complete_layout[4][7].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][7].level[2].value.keycode = KEY_N;
	layout__complete_layout[4][7].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][7].level[3].value.keycode = KEY_KEYPAD_4;
	layout__complete_layout[4][7].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][7].level[4].value.keycode = KEY_N;
	layout__complete_layout[4][7].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][7].level[5].value.keycode = KEY_N;

	layout__complete_layout[4][8].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][8].level[0].value.keycode = KEY_R;
	layout__complete_layout[4][8].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][8].level[1].value.keycode = KEY_R;
	layout__complete_layout[4][8].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][8].level[2].value.keycode = KEY_R;
	layout__complete_layout[4][8].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][8].level[3].value.keycode = KEY_KEYPAD_5;
	layout__complete_layout[4][8].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][8].level[4].value.keycode = KEY_R;
	layout__complete_layout[4][8].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][8].level[5].value.keycode = KEY_R;

	layout__complete_layout[4][9].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][9].level[0].value.keycode = KEY_T;
	layout__complete_layout[4][9].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][9].level[1].value.keycode = KEY_T;
	layout__complete_layout[4][9].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][9].level[2].value.keycode = KEY_T;
	layout__complete_layout[4][9].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][9].level[3].value.keycode = KEY_KEYPAD_6;
	layout__complete_layout[4][9].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][9].level[4].value.keycode = KEY_T;
	layout__complete_layout[4][9].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][9].level[5].value.keycode = KEY_T;

	layout__complete_layout[4][10].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][10].level[0].value.keycode = KEY_D;
	layout__complete_layout[4][10].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][10].level[1].value.keycode = KEY_D;
	layout__complete_layout[4][10].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][10].level[2].value.keycode = KEY_D;
	layout__complete_layout[4][10].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][10].level[3].value.keycode = KEY_D;
	layout__complete_layout[4][10].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][10].level[4].value.keycode = KEY_D;
	layout__complete_layout[4][10].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[4][10].level[5].value.keycode = KEY_D;

	layout__complete_layout[4][11].level[0].type = LAYOUT_TYPE_COMPUTER_MODIFIER; layout__complete_layout[4][11].level[0].value.modifier.modifier_bitmask = MODIFIER_RIGHT_SHIFT_BITMASK; layout__complete_layout[4][11].level[0].value.modifier.level = 1;
	layout__complete_layout[4][11].level[1].type = LAYOUT_TYPE_COMPUTER_MODIFIER; layout__complete_layout[4][11].level[1].value.modifier.modifier_bitmask = MODIFIER_RIGHT_SHIFT_BITMASK; layout__complete_layout[4][11].level[1].value.modifier.level = 1;
	layout__complete_layout[4][11].level[2].type = LAYOUT_TYPE_COMPUTER_MODIFIER; layout__complete_layout[4][11].level[2].value.modifier.modifier_bitmask = MODIFIER_RIGHT_SHIFT_BITMASK; layout__complete_layout[4][11].level[2].value.modifier.level = 1;
	layout__complete_layout[4][11].level[3].type = LAYOUT_TYPE_COMPUTER_MODIFIER; layout__complete_layout[4][11].level[3].value.modifier.modifier_bitmask = MODIFIER_RIGHT_SHIFT_BITMASK; layout__complete_layout[4][11].level[3].value.modifier.level = 1;
	layout__complete_layout[4][11].level[4].type = LAYOUT_TYPE_COMPUTER_MODIFIER; layout__complete_layout[4][11].level[4].value.modifier.modifier_bitmask = MODIFIER_RIGHT_SHIFT_BITMASK; layout__complete_layout[4][11].level[4].value.modifier.level = 1;
	layout__complete_layout[4][11].level[5].type = LAYOUT_TYPE_COMPUTER_MODIFIER; layout__complete_layout[4][11].level[5].value.modifier.modifier_bitmask = MODIFIER_RIGHT_SHIFT_BITMASK; layout__complete_layout[4][11].level[5].value.modifier.level = 1;

	// layout__complete_layout[5][0].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][0].level[0].value.keycode = KEY_;
	// layout__complete_layout[5][0].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][0].level[1].value.keycode = KEY_;
	// layout__complete_layout[5][0].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][0].level[2].value.keycode = KEY_;
	// layout__complete_layout[5][0].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][0].level[3].value.keycode = KEY_;
	// layout__complete_layout[5][0].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][0].level[4].value.keycode = KEY_;
	// layout__complete_layout[5][0].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][0].level[5].value.keycode = KEY_;

	layout__complete_layout[5][1].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][1].level[0].value.keycode = KEY_UE;
	layout__complete_layout[5][1].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][1].level[1].value.keycode = KEY_UE;
	layout__complete_layout[5][1].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][1].level[2].value.keycode = KEY_UE;
	layout__complete_layout[5][1].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][1].level[3].value.keycode = KEY_UE;
	layout__complete_layout[5][1].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][1].level[4].value.keycode = KEY_UE;
	layout__complete_layout[5][1].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][1].level[5].value.keycode = KEY_UE;

	layout__complete_layout[5][2].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][2].level[0].value.keycode = KEY_OE;
	layout__complete_layout[5][2].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][2].level[1].value.keycode = KEY_OE;
	layout__complete_layout[5][2].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][2].level[2].value.keycode = KEY_OE;
	layout__complete_layout[5][2].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][2].level[3].value.keycode = KEY_OE;
	layout__complete_layout[5][2].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][2].level[4].value.keycode = KEY_OE;
	layout__complete_layout[5][2].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][2].level[5].value.keycode = KEY_OE;

	layout__complete_layout[5][3].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][3].level[0].value.keycode = KEY_AE;
	layout__complete_layout[5][3].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][3].level[1].value.keycode = KEY_AE;
	layout__complete_layout[5][3].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][3].level[2].value.keycode = KEY_AE;
	layout__complete_layout[5][3].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][3].level[3].value.keycode = KEY_AE;
	layout__complete_layout[5][3].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][3].level[4].value.keycode = KEY_AE;
	layout__complete_layout[5][3].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][3].level[5].value.keycode = KEY_AE;

	layout__complete_layout[5][4].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][4].level[0].value.keycode = KEY_Z;
	layout__complete_layout[5][4].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][4].level[1].value.keycode = KEY_Z;
	layout__complete_layout[5][4].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][4].level[2].value.keycode = KEY_Z;
	layout__complete_layout[5][4].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][4].level[3].value.keycode = KEY_Z;
	layout__complete_layout[5][4].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][4].level[4].value.keycode = KEY_Z;
	layout__complete_layout[5][4].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][4].level[5].value.keycode = KEY_Z;

	layout__complete_layout[5][5].level[0].type = LAYOUT_TYPE_COMPUTER_MODIFIER; layout__complete_layout[5][5].level[0].value.modifier.modifier_bitmask = MODIFIER_RIGHT_CTRL_BITMASK; layout__complete_layout[5][5].level[0].value.modifier.level = 0;
	layout__complete_layout[5][5].level[1].type = LAYOUT_TYPE_COMPUTER_MODIFIER; layout__complete_layout[5][5].level[1].value.modifier.modifier_bitmask = MODIFIER_RIGHT_CTRL_BITMASK; layout__complete_layout[5][5].level[1].value.modifier.level = 0;
	layout__complete_layout[5][5].level[2].type = LAYOUT_TYPE_COMPUTER_MODIFIER; layout__complete_layout[5][5].level[2].value.modifier.modifier_bitmask = MODIFIER_RIGHT_CTRL_BITMASK; layout__complete_layout[5][5].level[2].value.modifier.level = 0;
	layout__complete_layout[5][5].level[3].type = LAYOUT_TYPE_COMPUTER_MODIFIER; layout__complete_layout[5][5].level[3].value.modifier.modifier_bitmask = MODIFIER_RIGHT_CTRL_BITMASK; layout__complete_layout[5][5].level[3].value.modifier.level = 0;
	layout__complete_layout[5][5].level[4].type = LAYOUT_TYPE_COMPUTER_MODIFIER; layout__complete_layout[5][5].level[4].value.modifier.modifier_bitmask = MODIFIER_RIGHT_CTRL_BITMASK; layout__complete_layout[5][5].level[4].value.modifier.level = 0;
	layout__complete_layout[5][5].level[5].type = LAYOUT_TYPE_COMPUTER_MODIFIER; layout__complete_layout[5][5].level[5].value.modifier.modifier_bitmask = MODIFIER_RIGHT_CTRL_BITMASK; layout__complete_layout[5][5].level[5].value.modifier.level = 0;

	// layout__complete_layout[5][6].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][6].level[0].value.keycode = KEY_;
	// layout__complete_layout[5][6].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][6].level[1].value.keycode = KEY_;
	// layout__complete_layout[5][6].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][6].level[2].value.keycode = KEY_;
	// layout__complete_layout[5][6].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][6].level[3].value.keycode = KEY_;
	// layout__complete_layout[5][6].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][6].level[4].value.keycode = KEY_;
	// layout__complete_layout[5][6].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][6].level[5].value.keycode = KEY_;

	layout__complete_layout[5][7].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][7].level[0].value.keycode = KEY_B;
	layout__complete_layout[5][7].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][7].level[1].value.keycode = KEY_B;
	layout__complete_layout[5][7].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][7].level[2].value.keycode = KEY_B;
	layout__complete_layout[5][7].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][7].level[3].value.keycode = KEY_B;
	layout__complete_layout[5][7].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][7].level[4].value.keycode = KEY_B;
	layout__complete_layout[5][7].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][7].level[5].value.keycode = KEY_B;

	layout__complete_layout[5][8].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][8].level[0].value.keycode = KEY_KOMMA;
	layout__complete_layout[5][8].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][8].level[1].value.keycode = KEY_KOMMA;
	layout__complete_layout[5][8].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][8].level[2].value.keycode = KEY_KOMMA;
	layout__complete_layout[5][8].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][8].level[3].value.keycode = KEY_KEYPAD_2;
	layout__complete_layout[5][8].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][8].level[4].value.keycode = KEY_KOMMA;
	layout__complete_layout[5][8].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][8].level[5].value.keycode = KEY_KOMMA;

	layout__complete_layout[5][9].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][9].level[0].value.keycode = KEY_PUNKT;
	layout__complete_layout[5][9].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][9].level[1].value.keycode = KEY_PUNKT;
	layout__complete_layout[5][9].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][9].level[2].value.keycode = KEY_PUNKT;
	layout__complete_layout[5][9].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][9].level[3].value.keycode = KEY_KEYPAD_3;
	layout__complete_layout[5][9].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][9].level[4].value.keycode = KEY_PUNKT;
	layout__complete_layout[5][9].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][9].level[5].value.keycode = KEY_PUNKT;

	layout__complete_layout[5][10].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][10].level[0].value.keycode = KEY_J;
	layout__complete_layout[5][10].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][10].level[1].value.keycode = KEY_J;
	layout__complete_layout[5][10].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][10].level[2].value.keycode = KEY_J;
	layout__complete_layout[5][10].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][10].level[3].value.keycode = KEY_J;
	layout__complete_layout[5][10].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][10].level[4].value.keycode = KEY_J;
	layout__complete_layout[5][10].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][10].level[5].value.keycode = KEY_J;

	// layout__complete_layout[5][11].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][11].level[0].value.keycode = KEY_;
	// layout__complete_layout[5][11].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][11].level[1].value.keycode = KEY_;
	// layout__complete_layout[5][11].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][11].level[2].value.keycode = KEY_;
	// layout__complete_layout[5][11].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][11].level[3].value.keycode = KEY_;
	// layout__complete_layout[5][11].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][11].level[4].value.keycode = KEY_;
	// layout__complete_layout[5][11].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[5][11].level[5].value.keycode = KEY_;

	layout__complete_layout[6][0].level[0].type = LAYOUT_TYPE_COMPUTER_MODIFIER; layout__complete_layout[6][0].level[0].value.modifier.modifier_bitmask = MODIFIER_LEFT_CTRL_BITMASK; layout__complete_layout[6][0].level[0].value.modifier.level = 0;
	layout__complete_layout[6][0].level[1].type = LAYOUT_TYPE_COMPUTER_MODIFIER; layout__complete_layout[6][0].level[1].value.modifier.modifier_bitmask = MODIFIER_LEFT_CTRL_BITMASK; layout__complete_layout[6][0].level[1].value.modifier.level = 0;
	layout__complete_layout[6][0].level[2].type = LAYOUT_TYPE_COMPUTER_MODIFIER; layout__complete_layout[6][0].level[2].value.modifier.modifier_bitmask = MODIFIER_LEFT_CTRL_BITMASK; layout__complete_layout[6][0].level[2].value.modifier.level = 0;
	layout__complete_layout[6][0].level[3].type = LAYOUT_TYPE_COMPUTER_MODIFIER; layout__complete_layout[6][0].level[3].value.modifier.modifier_bitmask = MODIFIER_LEFT_CTRL_BITMASK; layout__complete_layout[6][0].level[3].value.modifier.level = 0;
	layout__complete_layout[6][0].level[4].type = LAYOUT_TYPE_COMPUTER_MODIFIER; layout__complete_layout[6][0].level[4].value.modifier.modifier_bitmask = MODIFIER_LEFT_CTRL_BITMASK; layout__complete_layout[6][0].level[4].value.modifier.level = 0;
	layout__complete_layout[6][0].level[5].type = LAYOUT_TYPE_COMPUTER_MODIFIER; layout__complete_layout[6][0].level[5].value.modifier.modifier_bitmask = MODIFIER_LEFT_CTRL_BITMASK; layout__complete_layout[6][0].level[5].value.modifier.level = 0;

	layout__complete_layout[6][1].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][1].level[0].value.keycode = KEY_LEFT_GUI;
	layout__complete_layout[6][1].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][1].level[1].value.keycode = KEY_LEFT_GUI;
	layout__complete_layout[6][1].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][1].level[2].value.keycode = KEY_LEFT_GUI;
	layout__complete_layout[6][1].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][1].level[3].value.keycode = KEY_LEFT_GUI;
	layout__complete_layout[6][1].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][1].level[4].value.keycode = KEY_LEFT_GUI;
	layout__complete_layout[6][1].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][1].level[5].value.keycode = KEY_LEFT_GUI;

	layout__complete_layout[6][2].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][2].level[0].value.keycode = KEY_LEFT_ALT;
	layout__complete_layout[6][2].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][2].level[1].value.keycode = KEY_LEFT_ALT;
	layout__complete_layout[6][2].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][2].level[2].value.keycode = KEY_LEFT_ALT;
	layout__complete_layout[6][2].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][2].level[3].value.keycode = KEY_LEFT_ALT;
	layout__complete_layout[6][2].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][2].level[4].value.keycode = KEY_LEFT_ALT;
	layout__complete_layout[6][2].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][2].level[5].value.keycode = KEY_LEFT_ALT;

	layout__complete_layout[6][3].level[0].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK; layout__complete_layout[6][3].level[0].value.modifier.level = 2;
	layout__complete_layout[6][3].level[1].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK; layout__complete_layout[6][3].level[1].value.modifier.level = 2;
	layout__complete_layout[6][3].level[2].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK; layout__complete_layout[6][3].level[2].value.modifier.level = 2;
	layout__complete_layout[6][3].level[3].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK; layout__complete_layout[6][3].level[3].value.modifier.level = 2;
	layout__complete_layout[6][3].level[4].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK; layout__complete_layout[6][3].level[4].value.modifier.level = 2;
	layout__complete_layout[6][3].level[5].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK; layout__complete_layout[6][3].level[5].value.modifier.level = 2;

	layout__complete_layout[6][4].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][4].level[0].value.keycode = KEY_ENTER;
	layout__complete_layout[6][4].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][4].level[1].value.keycode = KEY_ENTER;
	layout__complete_layout[6][4].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][4].level[2].value.keycode = KEY_ENTER;
	layout__complete_layout[6][4].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][4].level[3].value.keycode = KEY_ENTER;
	layout__complete_layout[6][4].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][4].level[4].value.keycode = KEY_ENTER;
	layout__complete_layout[6][4].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][4].level[5].value.keycode = KEY_ENTER;

	// layout__complete_layout[6][5].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][5].level[0].value.keycode = KEY_;
	// layout__complete_layout[6][5].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][5].level[1].value.keycode = KEY_;
	// layout__complete_layout[6][5].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][5].level[2].value.keycode = KEY_;
	// layout__complete_layout[6][5].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][5].level[3].value.keycode = KEY_;
	// layout__complete_layout[6][5].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][5].level[4].value.keycode = KEY_;
	// layout__complete_layout[6][5].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][5].level[5].value.keycode = KEY_;

	// layout__complete_layout[6][6].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][6].level[0].value.keycode = KEY_;
	// layout__complete_layout[6][6].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][6].level[1].value.keycode = KEY_;
	// layout__complete_layout[6][6].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][6].level[2].value.keycode = KEY_;
	// layout__complete_layout[6][6].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][6].level[3].value.keycode = KEY_;
	// layout__complete_layout[6][6].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][6].level[4].value.keycode = KEY_;
	// layout__complete_layout[6][6].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][6].level[5].value.keycode = KEY_;

	layout__complete_layout[6][7].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][7].level[0].value.keycode = KEY_SPACE;
	layout__complete_layout[6][7].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][7].level[1].value.keycode = KEY_SPACE;
	layout__complete_layout[6][7].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][7].level[2].value.keycode = KEY_SPACE;
	layout__complete_layout[6][7].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][7].level[3].value.keycode = KEY_KEYPAD_0;
	layout__complete_layout[6][7].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][7].level[4].value.keycode = KEY_SPACE;
	layout__complete_layout[6][7].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][7].level[5].value.keycode = KEY_SPACE;

	layout__complete_layout[6][8].level[0].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK; layout__complete_layout[6][8].level[0].value.modifier.level = 2;
	layout__complete_layout[6][8].level[1].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK; layout__complete_layout[6][8].level[1].value.modifier.level = 2;
	layout__complete_layout[6][8].level[2].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK; layout__complete_layout[6][8].level[2].value.modifier.level = 2;
	layout__complete_layout[6][8].level[3].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK; layout__complete_layout[6][8].level[3].value.modifier.level = 2;
	layout__complete_layout[6][8].level[4].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK; layout__complete_layout[6][8].level[4].value.modifier.level = 2;
	layout__complete_layout[6][8].level[5].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK; layout__complete_layout[6][8].level[5].value.modifier.level = 2;

	layout__complete_layout[6][9].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][9].level[0].value.keycode = KEY_RIGHT_GUI;
	layout__complete_layout[6][9].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][9].level[1].value.keycode = KEY_RIGHT_GUI;
	layout__complete_layout[6][9].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][9].level[2].value.keycode = KEY_RIGHT_GUI;
	layout__complete_layout[6][9].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][9].level[3].value.keycode = KEY_RIGHT_GUI;
	layout__complete_layout[6][9].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][9].level[4].value.keycode = KEY_RIGHT_GUI;
	layout__complete_layout[6][9].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][9].level[5].value.keycode = KEY_RIGHT_GUI;

	// layout__complete_layout[6][10].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][10].level[0].value.keycode = KEY_;
	// layout__complete_layout[6][10].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][10].level[1].value.keycode = KEY_;
	// layout__complete_layout[6][10].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][10].level[2].value.keycode = KEY_;
	// layout__complete_layout[6][10].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][10].level[3].value.keycode = KEY_;
	// layout__complete_layout[6][10].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][10].level[4].value.keycode = KEY_;
	// layout__complete_layout[6][10].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][10].level[5].value.keycode = KEY_;

	// layout__complete_layout[6][11].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][11].level[0].value.keycode = KEY_;
	// layout__complete_layout[6][11].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][11].level[1].value.keycode = KEY_;
	// layout__complete_layout[6][11].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][11].level[2].value.keycode = KEY_;
	// layout__complete_layout[6][11].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][11].level[3].value.keycode = KEY_;
	// layout__complete_layout[6][11].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][11].level[4].value.keycode = KEY_;
	// layout__complete_layout[6][11].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[6][11].level[5].value.keycode = KEY_;

	layout__complete_layout[7][0].level[0].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITHOUT_LOCK; layout__complete_layout[7][0].level[0].value.modifier.level = 4;
	layout__complete_layout[7][0].level[1].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITHOUT_LOCK; layout__complete_layout[7][0].level[1].value.modifier.level = 4;
	layout__complete_layout[7][0].level[2].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITHOUT_LOCK; layout__complete_layout[7][0].level[2].value.modifier.level = 4;
	layout__complete_layout[7][0].level[3].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITHOUT_LOCK; layout__complete_layout[7][0].level[3].value.modifier.level = 4;
	layout__complete_layout[7][0].level[4].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITHOUT_LOCK; layout__complete_layout[7][0].level[4].value.modifier.level = 4;
	layout__complete_layout[7][0].level[5].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITHOUT_LOCK; layout__complete_layout[7][0].level[5].value.modifier.level = 4;

	// layout__complete_layout[7][1].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][1].level[0].value.keycode = KEY_;
	// layout__complete_layout[7][1].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][1].level[1].value.keycode = KEY_;
	// layout__complete_layout[7][1].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][1].level[2].value.keycode = KEY_;
	// layout__complete_layout[7][1].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][1].level[3].value.keycode = KEY_;
	// layout__complete_layout[7][1].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][1].level[4].value.keycode = KEY_;
	// layout__complete_layout[7][1].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][1].level[5].value.keycode = KEY_;

	layout__complete_layout[7][2].level[0].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK; layout__complete_layout[7][2].level[0].value.modifier.level = 3;
	layout__complete_layout[7][2].level[1].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK; layout__complete_layout[7][2].level[1].value.modifier.level = 3;
	layout__complete_layout[7][2].level[2].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK; layout__complete_layout[7][2].level[2].value.modifier.level = 3;
	layout__complete_layout[7][2].level[3].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK; layout__complete_layout[7][2].level[3].value.modifier.level = 3;
	layout__complete_layout[7][2].level[4].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK; layout__complete_layout[7][2].level[4].value.modifier.level = 3;
	layout__complete_layout[7][2].level[5].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK; layout__complete_layout[7][2].level[5].value.modifier.level = 3;

	layout__complete_layout[7][3].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][3].level[0].value.keycode = KEY_P;
	layout__complete_layout[7][3].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][3].level[1].value.keycode = KEY_P;
	layout__complete_layout[7][3].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][3].level[2].value.keycode = KEY_P;
	layout__complete_layout[7][3].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][3].level[3].value.keycode = KEY_ENTER;
	layout__complete_layout[7][3].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][3].level[4].value.keycode = KEY_P;
	layout__complete_layout[7][3].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][3].level[5].value.keycode = KEY_P;

	layout__complete_layout[7][4].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][4].level[0].value.keycode = KEY_DELETE;
	layout__complete_layout[7][4].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][4].level[1].value.keycode = KEY_DELETE;
	layout__complete_layout[7][4].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][4].level[2].value.keycode = KEY_DELETE;
	layout__complete_layout[7][4].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][4].level[3].value.keycode = KEY_DELETE;
	layout__complete_layout[7][4].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][4].level[4].value.keycode = KEY_DELETE;
	layout__complete_layout[7][4].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][4].level[5].value.keycode = KEY_DELETE;

	// layout__complete_layout[7][5].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][5].level[0].value.keycode = KEY_;
	// layout__complete_layout[7][5].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][5].level[1].value.keycode = KEY_;
	// layout__complete_layout[7][5].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][5].level[2].value.keycode = KEY_;
	// layout__complete_layout[7][5].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][5].level[3].value.keycode = KEY_;
	// layout__complete_layout[7][5].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][5].level[4].value.keycode = KEY_;
	// layout__complete_layout[7][5].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][5].level[5].value.keycode = KEY_;

	layout__complete_layout[7][6].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][6].level[0].value.keycode = KEY_DELETE_FORWARD;
	layout__complete_layout[7][6].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][6].level[1].value.keycode = KEY_DELETE_FORWARD;
	layout__complete_layout[7][6].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][6].level[2].value.keycode = KEY_DELETE_FORWARD;
	layout__complete_layout[7][6].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][6].level[3].value.keycode = KEY_DELETE_FORWARD;
	layout__complete_layout[7][6].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][6].level[4].value.keycode = KEY_DELETE_FORWARD;
	layout__complete_layout[7][6].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][6].level[5].value.keycode = KEY_DELETE_FORWARD;

	layout__complete_layout[7][7].level[0].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK; layout__complete_layout[7][7].level[0].value.modifier.level = 3;
	layout__complete_layout[7][7].level[1].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK; layout__complete_layout[7][7].level[1].value.modifier.level = 3;
	layout__complete_layout[7][7].level[2].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK; layout__complete_layout[7][7].level[2].value.modifier.level = 3;
	layout__complete_layout[7][7].level[3].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK; layout__complete_layout[7][7].level[3].value.modifier.level = 3;
	layout__complete_layout[7][7].level[4].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK; layout__complete_layout[7][7].level[4].value.modifier.level = 3;
	layout__complete_layout[7][7].level[5].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK; layout__complete_layout[7][7].level[5].value.modifier.level = 3;

	layout__complete_layout[7][8].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][8].level[0].value.keycode = KEY_M;
	layout__complete_layout[7][8].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][8].level[1].value.keycode = KEY_M;
	layout__complete_layout[7][8].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][8].level[2].value.keycode = KEY_M;
	layout__complete_layout[7][8].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][8].level[3].value.keycode = KEY_KEYPAD_1;
	layout__complete_layout[7][8].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][8].level[4].value.keycode = KEY_M;
	layout__complete_layout[7][8].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][8].level[5].value.keycode = KEY_M;

	// layout__complete_layout[7][9].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][9].level[0].value.keycode = KEY_;
	// layout__complete_layout[7][9].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][9].level[1].value.keycode = KEY_;
	// layout__complete_layout[7][9].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][9].level[2].value.keycode = KEY_;
	// layout__complete_layout[7][9].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][9].level[3].value.keycode = KEY_;
	// layout__complete_layout[7][9].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][9].level[4].value.keycode = KEY_;
	// layout__complete_layout[7][9].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][9].level[5].value.keycode = KEY_;

	// layout__complete_layout[7][10].level[0].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][10].level[0].value.keycode = KEY_;
	// layout__complete_layout[7][10].level[1].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][10].level[1].value.keycode = KEY_;
	// layout__complete_layout[7][10].level[2].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][10].level[2].value.keycode = KEY_;
	// layout__complete_layout[7][10].level[3].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][10].level[3].value.keycode = KEY_;
	// layout__complete_layout[7][10].level[4].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][10].level[4].value.keycode = KEY_;
	// layout__complete_layout[7][10].level[5].type = LAYOUT_TYPE_KEYCODE; layout__complete_layout[7][10].level[5].value.keycode = KEY_;

	layout__complete_layout[7][11].level[0].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITHOUT_LOCK; layout__complete_layout[7][11].level[0].value.modifier.level = 5;
	layout__complete_layout[7][11].level[1].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITHOUT_LOCK; layout__complete_layout[7][11].level[1].value.modifier.level = 5;
	layout__complete_layout[7][11].level[2].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITHOUT_LOCK; layout__complete_layout[7][11].level[2].value.modifier.level = 5;
	layout__complete_layout[7][11].level[3].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITHOUT_LOCK; layout__complete_layout[7][11].level[3].value.modifier.level = 5;
	layout__complete_layout[7][11].level[4].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITHOUT_LOCK; layout__complete_layout[7][11].level[4].value.modifier.level = 5;
	layout__complete_layout[7][11].level[5].type = LAYOUT_TYPE_INTERNAL_MODIFIER_WITHOUT_LOCK; layout__complete_layout[7][11].level[5].value.modifier.level = 5;


	
}

void layout__handle_key_press(layout__keyIndices key)
{
	switch (layout__complete_layout[key.row][key.column].level[0].type)
	{
		case LAYOUT_TYPE_KEYCODE:
			layout__keycode_pressed(layout__complete_layout[key.row][key.column].level[layout__current_level].value.keycode);
			break;
		case LAYOUT_TYPE_UNICODE:
			layout__unicode_pressed(layout__complete_layout[key.row][key.column].level[layout__current_level].value.unicode);
			break;
		case LAYOUT_TYPE_COMPUTER_MODIFIER:
			layout__computer_modifier_pressed(layout__complete_layout[key.row][key.column].level[layout__current_level].value.modifier);
			break;
		case LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK:
			layout__internal_modifier_with_lock_pressed(layout__complete_layout[key.row][key.column].level[layout__current_level].value.modifier);
			break;
		case LAYOUT_TYPE_INTERNAL_MODIFIER_WITHOUT_LOCK:
			layout__internal_modifier_without_lock_pressed(layout__complete_layout[key.row][key.column].level[layout__current_level].value.modifier);
			break;
		default:
			errorHandling_reportError(ERROR_INVALID_KEY_TYPE);
			break;
	}
	
}

void layout__handle_key_release(layout__keyIndices key)
{
	switch (layout__complete_layout[key.row][key.column].level[0].type)
	{
		case LAYOUT_TYPE_KEYCODE:
			layout__keycode_released(layout__complete_layout[key.row][key.column].level[layout__current_level].value.keycode);
			break;
		case LAYOUT_TYPE_UNICODE:
			layout__unicode_released(layout__complete_layout[key.row][key.column].level[layout__current_level].value.unicode);
			break;
		case LAYOUT_TYPE_COMPUTER_MODIFIER:
			layout__computer_modifier_released(layout__complete_layout[key.row][key.column].level[layout__current_level].value.modifier);
			break;
		case LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK:
			layout__internal_modifier_with_lock_released(layout__complete_layout[key.row][key.column].level[layout__current_level].value.modifier);
			break;
		case LAYOUT_TYPE_INTERNAL_MODIFIER_WITHOUT_LOCK:
			layout__internal_modifier_without_lock_released(layout__complete_layout[key.row][key.column].level[layout__current_level].value.modifier);
			break;
		default:
			errorHandling_reportError(ERROR_INVALID_KEY_TYPE);
			break;
	}
}


void layout__updateLevel(void)
{
	layout__current_level = 0;
	uint8_t i = 0;
	for (i = 0; i < LAYOUT__NUMBER_OF_LEVELS; i++)
	{
		if ((layout__level_modifier_state & (1 << i)) ^ (layout__level_lock_state & (1 << i)))
		{
			layout__current_level = i+1;
		}
	}
	LED_update_current_level(layout__current_level);
}



void layout__keycode_pressed(uint8_t keycode)
{
	udi_hid_kbd_down(keycode);
}

void layout__unicode_pressed(uint16_t unicode)
{
	
}

void layout__computer_modifier_pressed(layout__modifier modifier)
{
	udi_hid_kbd_modifier_down(modifier.modifier_bitmask);
	if(modifier.level != 0)
	{
		layout__level_modifier_state |= (1 << (modifier.level-1));
		layout__updateLevel();
	}
}

void layout__internal_modifier_with_lock_pressed(layout__modifier modifier)
{
	if (modifier.level == 0)
	{
		return;
	}
	layout__level_modifier_state |= (1 << (modifier.level-1));
	
	if ((modifier.level == layout__current_level) && !(layout__level_lock_state & (1 << (modifier.level-1))))
	{
		layout__level_lock_state |= (1 << (modifier.level-1));
	}
	if ((modifier.level != layout__current_level) && (layout__level_lock_state & (1 << (modifier.level-1))))
	{
		layout__level_lock_state &= ~(1 << (modifier.level-1));
	}
	layout__updateLevel();
}

void layout__internal_modifier_without_lock_pressed(layout__modifier modifier)
{
	if (modifier.level == 0)
	{
		return;
	}
	layout__level_modifier_state |= (1 << (modifier.level-1));
	layout__updateLevel();
}


void layout__keycode_released(uint8_t keycode)
{
	udi_hid_kbd_up(keycode);
}

void layout__unicode_released(uint16_t unicode)
{
	
}

void layout__computer_modifier_released(layout__modifier modifier)
{
	udi_hid_kbd_modifier_up(modifier.modifier_bitmask);
	if(modifier.level != 0)
	{
		layout__level_modifier_state &= ~(1 << (modifier.level-1));
		layout__updateLevel();
	}
}

void layout__internal_modifier_with_lock_released(layout__modifier modifier)
{
	if (modifier.level == 0)
	{
		return;
	}
	layout__level_modifier_state &= ~(1 << (modifier.level-1));
	layout__updateLevel();
}

void layout__internal_modifier_without_lock_released(layout__modifier modifier)
{
	if (modifier.level == 0)
	{
		return;
	}
	layout__level_modifier_state &= ~(1 << (modifier.level-1));
	layout__updateLevel();
}
