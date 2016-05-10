/*
 * layout.c
 *
 * Created: 23.03.2016 00:43:13
 *  Author: Tilman
 */ 

#include <asf.h>

#include "layout.h"
#include "errorHandling.h"

layout_keyLevels LAYOUT_ALL_KEYS[KEYBOARD_NUMBER_OF_ROWS][KEYBOARD_NUMBER_OF_COLUMNS];

void layout_load(void)
{
	
	LAYOUT_ALL_KEYS[0][0].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][0].level[0].value.keycode = KEY_F1;
	LAYOUT_ALL_KEYS[0][0].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][0].level[0].value.keycode = KEY_F1;
	LAYOUT_ALL_KEYS[0][0].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][0].level[0].value.keycode = KEY_F1;
	LAYOUT_ALL_KEYS[0][0].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][0].level[0].value.keycode = KEY_F1;
	LAYOUT_ALL_KEYS[0][0].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][0].level[0].value.keycode = KEY_F1;
	LAYOUT_ALL_KEYS[0][0].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][0].level[0].value.keycode = KEY_F1;

	LAYOUT_ALL_KEYS[0][1].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][1].level[0].value.keycode = KEY_F2;
	LAYOUT_ALL_KEYS[0][1].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][1].level[0].value.keycode = KEY_F2;
	LAYOUT_ALL_KEYS[0][1].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][1].level[0].value.keycode = KEY_F2;
	LAYOUT_ALL_KEYS[0][1].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][1].level[0].value.keycode = KEY_F2;
	LAYOUT_ALL_KEYS[0][1].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][1].level[0].value.keycode = KEY_F2;
	LAYOUT_ALL_KEYS[0][1].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][1].level[0].value.keycode = KEY_F2;

	LAYOUT_ALL_KEYS[0][2].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][2].level[0].value.keycode = KEY_F3;
	LAYOUT_ALL_KEYS[0][2].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][2].level[0].value.keycode = KEY_F3;
	LAYOUT_ALL_KEYS[0][2].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][2].level[0].value.keycode = KEY_F3;
	LAYOUT_ALL_KEYS[0][2].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][2].level[0].value.keycode = KEY_F3;
	LAYOUT_ALL_KEYS[0][2].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][2].level[0].value.keycode = KEY_F3;
	LAYOUT_ALL_KEYS[0][2].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][2].level[0].value.keycode = KEY_F3;

	LAYOUT_ALL_KEYS[0][3].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][3].level[0].value.keycode = KEY_F4;
	LAYOUT_ALL_KEYS[0][3].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][3].level[0].value.keycode = KEY_F4;
	LAYOUT_ALL_KEYS[0][3].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][3].level[0].value.keycode = KEY_F4;
	LAYOUT_ALL_KEYS[0][3].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][3].level[0].value.keycode = KEY_F4;
	LAYOUT_ALL_KEYS[0][3].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][3].level[0].value.keycode = KEY_F4;
	LAYOUT_ALL_KEYS[0][3].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][3].level[0].value.keycode = KEY_F4;

	LAYOUT_ALL_KEYS[0][4].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][4].level[0].value.keycode = KEY_F5;
	LAYOUT_ALL_KEYS[0][4].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][4].level[0].value.keycode = KEY_F5;
	LAYOUT_ALL_KEYS[0][4].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][4].level[0].value.keycode = KEY_F5;
	LAYOUT_ALL_KEYS[0][4].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][4].level[0].value.keycode = KEY_F5;
	LAYOUT_ALL_KEYS[0][4].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][4].level[0].value.keycode = KEY_F5;
	LAYOUT_ALL_KEYS[0][4].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][4].level[0].value.keycode = KEY_F5;

	LAYOUT_ALL_KEYS[0][5].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][5].level[0].value.keycode = KEY_F6;
	LAYOUT_ALL_KEYS[0][5].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][5].level[0].value.keycode = KEY_F6;
	LAYOUT_ALL_KEYS[0][5].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][5].level[0].value.keycode = KEY_F6;
	LAYOUT_ALL_KEYS[0][5].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][5].level[0].value.keycode = KEY_F6;
	LAYOUT_ALL_KEYS[0][5].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][5].level[0].value.keycode = KEY_F6;
	LAYOUT_ALL_KEYS[0][5].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][5].level[0].value.keycode = KEY_F6;

	LAYOUT_ALL_KEYS[0][6].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][6].level[0].value.keycode = KEY_F7;
	LAYOUT_ALL_KEYS[0][6].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][6].level[0].value.keycode = KEY_F7;
	LAYOUT_ALL_KEYS[0][6].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][6].level[0].value.keycode = KEY_F7;
	LAYOUT_ALL_KEYS[0][6].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][6].level[0].value.keycode = KEY_F7;
	LAYOUT_ALL_KEYS[0][6].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][6].level[0].value.keycode = KEY_F7;
	LAYOUT_ALL_KEYS[0][6].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][6].level[0].value.keycode = KEY_F7;

	LAYOUT_ALL_KEYS[0][7].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][7].level[0].value.keycode = KEY_F8;
	LAYOUT_ALL_KEYS[0][7].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][7].level[0].value.keycode = KEY_F8;
	LAYOUT_ALL_KEYS[0][7].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][7].level[0].value.keycode = KEY_F8;
	LAYOUT_ALL_KEYS[0][7].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][7].level[0].value.keycode = KEY_F8;
	LAYOUT_ALL_KEYS[0][7].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][7].level[0].value.keycode = KEY_F8;
	LAYOUT_ALL_KEYS[0][7].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][7].level[0].value.keycode = KEY_F8;

	LAYOUT_ALL_KEYS[0][8].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][8].level[0].value.keycode = KEY_F9;
	LAYOUT_ALL_KEYS[0][8].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][8].level[0].value.keycode = KEY_F9;
	LAYOUT_ALL_KEYS[0][8].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][8].level[0].value.keycode = KEY_F9;
	LAYOUT_ALL_KEYS[0][8].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][8].level[0].value.keycode = KEY_F9;
	LAYOUT_ALL_KEYS[0][8].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][8].level[0].value.keycode = KEY_F9;
	LAYOUT_ALL_KEYS[0][8].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][8].level[0].value.keycode = KEY_F9;

	LAYOUT_ALL_KEYS[0][9].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][9].level[0].value.keycode = KEY_F10;
	LAYOUT_ALL_KEYS[0][9].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][9].level[0].value.keycode = KEY_F10;
	LAYOUT_ALL_KEYS[0][9].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][9].level[0].value.keycode = KEY_F10;
	LAYOUT_ALL_KEYS[0][9].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][9].level[0].value.keycode = KEY_F10;
	LAYOUT_ALL_KEYS[0][9].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][9].level[0].value.keycode = KEY_F10;
	LAYOUT_ALL_KEYS[0][9].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][9].level[0].value.keycode = KEY_F10;

	LAYOUT_ALL_KEYS[0][10].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][10].level[0].value.keycode = KEY_F11;
	LAYOUT_ALL_KEYS[0][10].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][10].level[0].value.keycode = KEY_F11;
	LAYOUT_ALL_KEYS[0][10].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][10].level[0].value.keycode = KEY_F11;
	LAYOUT_ALL_KEYS[0][10].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][10].level[0].value.keycode = KEY_F11;
	LAYOUT_ALL_KEYS[0][10].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][10].level[0].value.keycode = KEY_F11;
	LAYOUT_ALL_KEYS[0][10].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][10].level[0].value.keycode = KEY_F11;

	LAYOUT_ALL_KEYS[0][11].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][11].level[0].value.keycode = KEY_F12;
	LAYOUT_ALL_KEYS[0][11].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][11].level[0].value.keycode = KEY_F12;
	LAYOUT_ALL_KEYS[0][11].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][11].level[0].value.keycode = KEY_F12;
	LAYOUT_ALL_KEYS[0][11].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][11].level[0].value.keycode = KEY_F12;
	LAYOUT_ALL_KEYS[0][11].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][11].level[0].value.keycode = KEY_F12;
	LAYOUT_ALL_KEYS[0][11].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[0][11].level[0].value.keycode = KEY_F12;

	LAYOUT_ALL_KEYS[1][0].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][0].level[0].value.keycode = KEY_ESCAPE;
	LAYOUT_ALL_KEYS[1][0].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][0].level[0].value.keycode = KEY_ESCAPE;
	LAYOUT_ALL_KEYS[1][0].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][0].level[0].value.keycode = KEY_ESCAPE;
	LAYOUT_ALL_KEYS[1][0].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][0].level[0].value.keycode = KEY_ESCAPE;
	LAYOUT_ALL_KEYS[1][0].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][0].level[0].value.keycode = KEY_ESCAPE;
	LAYOUT_ALL_KEYS[1][0].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][0].level[0].value.keycode = KEY_ESCAPE;

	// LAYOUT_ALL_KEYS[1][1].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][1].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][1].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][1].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][1].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][1].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][1].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][1].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][1].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][1].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][1].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][1].level[0].value.keycode = KEY_;

	// LAYOUT_ALL_KEYS[1][2].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][2].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][2].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][2].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][2].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][2].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][2].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][2].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][2].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][2].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][2].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][2].level[0].value.keycode = KEY_;

	// LAYOUT_ALL_KEYS[1][3].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][3].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][3].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][3].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][3].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][3].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][3].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][3].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][3].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][3].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][3].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][3].level[0].value.keycode = KEY_;

	LAYOUT_ALL_KEYS[1][4].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][4].level[0].value.keycode = KEY_PRINT;
	LAYOUT_ALL_KEYS[1][4].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][4].level[0].value.keycode = KEY_PRINT;
	LAYOUT_ALL_KEYS[1][4].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][4].level[0].value.keycode = KEY_PRINT;
	LAYOUT_ALL_KEYS[1][4].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][4].level[0].value.keycode = KEY_PRINT;
	LAYOUT_ALL_KEYS[1][4].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][4].level[0].value.keycode = KEY_PRINT;
	LAYOUT_ALL_KEYS[1][4].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][4].level[0].value.keycode = KEY_PRINT;

	LAYOUT_ALL_KEYS[1][5].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][5].level[0].value.keycode = KEY_SCROLL_LOCK;
	LAYOUT_ALL_KEYS[1][5].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][5].level[0].value.keycode = KEY_SCROLL_LOCK;
	LAYOUT_ALL_KEYS[1][5].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][5].level[0].value.keycode = KEY_SCROLL_LOCK;
	LAYOUT_ALL_KEYS[1][5].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][5].level[0].value.keycode = KEY_SCROLL_LOCK;
	LAYOUT_ALL_KEYS[1][5].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][5].level[0].value.keycode = KEY_SCROLL_LOCK;
	LAYOUT_ALL_KEYS[1][5].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][5].level[0].value.keycode = KEY_SCROLL_LOCK;

	LAYOUT_ALL_KEYS[1][6].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][6].level[0].value.keycode = KEY_PAUSE;
	LAYOUT_ALL_KEYS[1][6].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][6].level[0].value.keycode = KEY_PAUSE;
	LAYOUT_ALL_KEYS[1][6].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][6].level[0].value.keycode = KEY_PAUSE;
	LAYOUT_ALL_KEYS[1][6].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][6].level[0].value.keycode = KEY_PAUSE;
	LAYOUT_ALL_KEYS[1][6].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][6].level[0].value.keycode = KEY_PAUSE;
	LAYOUT_ALL_KEYS[1][6].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][6].level[0].value.keycode = KEY_PAUSE;

	// LAYOUT_ALL_KEYS[1][7].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][7].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][7].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][7].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][7].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][7].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][7].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][7].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][7].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][7].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][7].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][7].level[0].value.keycode = KEY_;

	// LAYOUT_ALL_KEYS[1][8].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][8].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][8].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][8].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][8].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][8].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][8].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][8].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][8].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][8].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][8].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][8].level[0].value.keycode = KEY_;

	// LAYOUT_ALL_KEYS[1][9].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][9].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][9].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][9].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][9].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][9].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][9].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][9].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][9].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][9].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][9].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][9].level[0].value.keycode = KEY_;

	// LAYOUT_ALL_KEYS[1][10].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][10].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][10].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][10].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][10].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][10].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][10].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][10].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][10].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][10].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][10].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][10].level[0].value.keycode = KEY_;

	// LAYOUT_ALL_KEYS[1][11].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][11].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][11].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][11].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][11].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][11].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][11].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][11].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][11].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][11].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[1][11].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[1][11].level[0].value.keycode = KEY_;

	LAYOUT_ALL_KEYS[2][0].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][0].level[0].value.keycode = KEY_HEAD;
	LAYOUT_ALL_KEYS[2][0].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][0].level[0].value.keycode = KEY_HEAD;
	LAYOUT_ALL_KEYS[2][0].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][0].level[0].value.keycode = KEY_HEAD;
	LAYOUT_ALL_KEYS[2][0].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][0].level[0].value.keycode = KEY_HEAD;
	LAYOUT_ALL_KEYS[2][0].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][0].level[0].value.keycode = KEY_HEAD;
	LAYOUT_ALL_KEYS[2][0].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][0].level[0].value.keycode = KEY_HEAD;

	LAYOUT_ALL_KEYS[2][1].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][1].level[0].value.keycode = KEY_1;
	LAYOUT_ALL_KEYS[2][1].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][1].level[0].value.keycode = KEY_1;
	LAYOUT_ALL_KEYS[2][1].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][1].level[0].value.keycode = KEY_1;
	LAYOUT_ALL_KEYS[2][1].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][1].level[0].value.keycode = KEY_1;
	LAYOUT_ALL_KEYS[2][1].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][1].level[0].value.keycode = KEY_1;
	LAYOUT_ALL_KEYS[2][1].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][1].level[0].value.keycode = KEY_1;

	LAYOUT_ALL_KEYS[2][2].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][2].level[0].value.keycode = KEY_2;
	LAYOUT_ALL_KEYS[2][2].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][2].level[0].value.keycode = KEY_2;
	LAYOUT_ALL_KEYS[2][2].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][2].level[0].value.keycode = KEY_2;
	LAYOUT_ALL_KEYS[2][2].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][2].level[0].value.keycode = KEY_2;
	LAYOUT_ALL_KEYS[2][2].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][2].level[0].value.keycode = KEY_2;
	LAYOUT_ALL_KEYS[2][2].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][2].level[0].value.keycode = KEY_2;

	LAYOUT_ALL_KEYS[2][3].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][3].level[0].value.keycode = KEY_3;
	LAYOUT_ALL_KEYS[2][3].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][3].level[0].value.keycode = KEY_3;
	LAYOUT_ALL_KEYS[2][3].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][3].level[0].value.keycode = KEY_3;
	LAYOUT_ALL_KEYS[2][3].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][3].level[0].value.keycode = KEY_3;
	LAYOUT_ALL_KEYS[2][3].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][3].level[0].value.keycode = KEY_3;
	LAYOUT_ALL_KEYS[2][3].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][3].level[0].value.keycode = KEY_3;

	LAYOUT_ALL_KEYS[2][4].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][4].level[0].value.keycode = KEY_4;
	LAYOUT_ALL_KEYS[2][4].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][4].level[0].value.keycode = KEY_4;
	LAYOUT_ALL_KEYS[2][4].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][4].level[0].value.keycode = KEY_4;
	LAYOUT_ALL_KEYS[2][4].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][4].level[0].value.keycode = KEY_4;
	LAYOUT_ALL_KEYS[2][4].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][4].level[0].value.keycode = KEY_4;
	LAYOUT_ALL_KEYS[2][4].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][4].level[0].value.keycode = KEY_4;

	LAYOUT_ALL_KEYS[2][5].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][5].level[0].value.keycode = KEY_5;
	LAYOUT_ALL_KEYS[2][5].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][5].level[0].value.keycode = KEY_5;
	LAYOUT_ALL_KEYS[2][5].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][5].level[0].value.keycode = KEY_5;
	LAYOUT_ALL_KEYS[2][5].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][5].level[0].value.keycode = KEY_5;
	LAYOUT_ALL_KEYS[2][5].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][5].level[0].value.keycode = KEY_5;
	LAYOUT_ALL_KEYS[2][5].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][5].level[0].value.keycode = KEY_5;

	LAYOUT_ALL_KEYS[2][6].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][6].level[0].value.keycode = KEY_6;
	LAYOUT_ALL_KEYS[2][6].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][6].level[0].value.keycode = KEY_6;
	LAYOUT_ALL_KEYS[2][6].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][6].level[0].value.keycode = KEY_6;
	LAYOUT_ALL_KEYS[2][6].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][6].level[0].value.keycode = KEY_6;
	LAYOUT_ALL_KEYS[2][6].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][6].level[0].value.keycode = KEY_6;
	LAYOUT_ALL_KEYS[2][6].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][6].level[0].value.keycode = KEY_6;

	LAYOUT_ALL_KEYS[2][7].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][7].level[0].value.keycode = KEY_7;
	LAYOUT_ALL_KEYS[2][7].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][7].level[0].value.keycode = KEY_7;
	LAYOUT_ALL_KEYS[2][7].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][7].level[0].value.keycode = KEY_7;
	LAYOUT_ALL_KEYS[2][7].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][7].level[0].value.keycode = KEY_7;
	LAYOUT_ALL_KEYS[2][7].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][7].level[0].value.keycode = KEY_7;
	LAYOUT_ALL_KEYS[2][7].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][7].level[0].value.keycode = KEY_7;

	LAYOUT_ALL_KEYS[2][8].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][8].level[0].value.keycode = KEY_8;
	LAYOUT_ALL_KEYS[2][8].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][8].level[0].value.keycode = KEY_8;
	LAYOUT_ALL_KEYS[2][8].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][8].level[0].value.keycode = KEY_8;
	LAYOUT_ALL_KEYS[2][8].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][8].level[0].value.keycode = KEY_8;
	LAYOUT_ALL_KEYS[2][8].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][8].level[0].value.keycode = KEY_8;
	LAYOUT_ALL_KEYS[2][8].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][8].level[0].value.keycode = KEY_8;

	LAYOUT_ALL_KEYS[2][9].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][9].level[0].value.keycode = KEY_9;
	LAYOUT_ALL_KEYS[2][9].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][9].level[0].value.keycode = KEY_9;
	LAYOUT_ALL_KEYS[2][9].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][9].level[0].value.keycode = KEY_9;
	LAYOUT_ALL_KEYS[2][9].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][9].level[0].value.keycode = KEY_9;
	LAYOUT_ALL_KEYS[2][9].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][9].level[0].value.keycode = KEY_9;
	LAYOUT_ALL_KEYS[2][9].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][9].level[0].value.keycode = KEY_9;

	LAYOUT_ALL_KEYS[2][10].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][10].level[0].value.keycode = KEY_0;
	LAYOUT_ALL_KEYS[2][10].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][10].level[0].value.keycode = KEY_0;
	LAYOUT_ALL_KEYS[2][10].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][10].level[0].value.keycode = KEY_0;
	LAYOUT_ALL_KEYS[2][10].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][10].level[0].value.keycode = KEY_0;
	LAYOUT_ALL_KEYS[2][10].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][10].level[0].value.keycode = KEY_0;
	LAYOUT_ALL_KEYS[2][10].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][10].level[0].value.keycode = KEY_0;

	LAYOUT_ALL_KEYS[2][11].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][11].level[0].value.keycode = KEY_MINUS;
	LAYOUT_ALL_KEYS[2][11].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][11].level[0].value.keycode = KEY_MINUS;
	LAYOUT_ALL_KEYS[2][11].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][11].level[0].value.keycode = KEY_MINUS;
	LAYOUT_ALL_KEYS[2][11].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][11].level[0].value.keycode = KEY_MINUS;
	LAYOUT_ALL_KEYS[2][11].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][11].level[0].value.keycode = KEY_MINUS;
	LAYOUT_ALL_KEYS[2][11].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[2][11].level[0].value.keycode = KEY_MINUS;

	LAYOUT_ALL_KEYS[3][0].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][0].level[0].value.keycode = KEY_Y;
	LAYOUT_ALL_KEYS[3][0].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][0].level[0].value.keycode = KEY_Y;
	LAYOUT_ALL_KEYS[3][0].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][0].level[0].value.keycode = KEY_Y;
	LAYOUT_ALL_KEYS[3][0].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][0].level[0].value.keycode = KEY_Y;
	LAYOUT_ALL_KEYS[3][0].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][0].level[0].value.keycode = KEY_Y;
	LAYOUT_ALL_KEYS[3][0].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][0].level[0].value.keycode = KEY_Y;

	LAYOUT_ALL_KEYS[3][1].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][1].level[0].value.keycode = KEY_X;
	LAYOUT_ALL_KEYS[3][1].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][1].level[0].value.keycode = KEY_X;
	LAYOUT_ALL_KEYS[3][1].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][1].level[0].value.keycode = KEY_X;
	LAYOUT_ALL_KEYS[3][1].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][1].level[0].value.keycode = KEY_X;
	LAYOUT_ALL_KEYS[3][1].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][1].level[0].value.keycode = KEY_X;
	LAYOUT_ALL_KEYS[3][1].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][1].level[0].value.keycode = KEY_X;

	LAYOUT_ALL_KEYS[3][2].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][2].level[0].value.keycode = KEY_V;
	LAYOUT_ALL_KEYS[3][2].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][2].level[0].value.keycode = KEY_V;
	LAYOUT_ALL_KEYS[3][2].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][2].level[0].value.keycode = KEY_V;
	LAYOUT_ALL_KEYS[3][2].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][2].level[0].value.keycode = KEY_V;
	LAYOUT_ALL_KEYS[3][2].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][2].level[0].value.keycode = KEY_V;
	LAYOUT_ALL_KEYS[3][2].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][2].level[0].value.keycode = KEY_V;

	LAYOUT_ALL_KEYS[3][3].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][3].level[0].value.keycode = KEY_L;
	LAYOUT_ALL_KEYS[3][3].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][3].level[0].value.keycode = KEY_L;
	LAYOUT_ALL_KEYS[3][3].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][3].level[0].value.keycode = KEY_L;
	LAYOUT_ALL_KEYS[3][3].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][3].level[0].value.keycode = KEY_L;
	LAYOUT_ALL_KEYS[3][3].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][3].level[0].value.keycode = KEY_L;
	LAYOUT_ALL_KEYS[3][3].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][3].level[0].value.keycode = KEY_L;

	LAYOUT_ALL_KEYS[3][4].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][4].level[0].value.keycode = KEY_C;
	LAYOUT_ALL_KEYS[3][4].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][4].level[0].value.keycode = KEY_C;
	LAYOUT_ALL_KEYS[3][4].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][4].level[0].value.keycode = KEY_C;
	LAYOUT_ALL_KEYS[3][4].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][4].level[0].value.keycode = KEY_C;
	LAYOUT_ALL_KEYS[3][4].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][4].level[0].value.keycode = KEY_C;
	LAYOUT_ALL_KEYS[3][4].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][4].level[0].value.keycode = KEY_C;

	LAYOUT_ALL_KEYS[3][5].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][5].level[0].value.keycode = KEY_W;
	LAYOUT_ALL_KEYS[3][5].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][5].level[0].value.keycode = KEY_W;
	LAYOUT_ALL_KEYS[3][5].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][5].level[0].value.keycode = KEY_W;
	LAYOUT_ALL_KEYS[3][5].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][5].level[0].value.keycode = KEY_W;
	LAYOUT_ALL_KEYS[3][5].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][5].level[0].value.keycode = KEY_W;
	LAYOUT_ALL_KEYS[3][5].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][5].level[0].value.keycode = KEY_W;

	LAYOUT_ALL_KEYS[3][6].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][6].level[0].value.keycode = KEY_K;
	LAYOUT_ALL_KEYS[3][6].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][6].level[0].value.keycode = KEY_K;
	LAYOUT_ALL_KEYS[3][6].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][6].level[0].value.keycode = KEY_K;
	LAYOUT_ALL_KEYS[3][6].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][6].level[0].value.keycode = KEY_K;
	LAYOUT_ALL_KEYS[3][6].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][6].level[0].value.keycode = KEY_K;
	LAYOUT_ALL_KEYS[3][6].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][6].level[0].value.keycode = KEY_K;

	LAYOUT_ALL_KEYS[3][7].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][7].level[0].value.keycode = KEY_H;
	LAYOUT_ALL_KEYS[3][7].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][7].level[0].value.keycode = KEY_H;
	LAYOUT_ALL_KEYS[3][7].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][7].level[0].value.keycode = KEY_H;
	LAYOUT_ALL_KEYS[3][7].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][7].level[0].value.keycode = KEY_H;
	LAYOUT_ALL_KEYS[3][7].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][7].level[0].value.keycode = KEY_H;
	LAYOUT_ALL_KEYS[3][7].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][7].level[0].value.keycode = KEY_H;

	LAYOUT_ALL_KEYS[3][8].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][8].level[0].value.keycode = KEY_G;
	LAYOUT_ALL_KEYS[3][8].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][8].level[0].value.keycode = KEY_G;
	LAYOUT_ALL_KEYS[3][8].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][8].level[0].value.keycode = KEY_G;
	LAYOUT_ALL_KEYS[3][8].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][8].level[0].value.keycode = KEY_G;
	LAYOUT_ALL_KEYS[3][8].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][8].level[0].value.keycode = KEY_G;
	LAYOUT_ALL_KEYS[3][8].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][8].level[0].value.keycode = KEY_G;

	LAYOUT_ALL_KEYS[3][9].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][9].level[0].value.keycode = KEY_F;
	LAYOUT_ALL_KEYS[3][9].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][9].level[0].value.keycode = KEY_F;
	LAYOUT_ALL_KEYS[3][9].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][9].level[0].value.keycode = KEY_F;
	LAYOUT_ALL_KEYS[3][9].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][9].level[0].value.keycode = KEY_F;
	LAYOUT_ALL_KEYS[3][9].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][9].level[0].value.keycode = KEY_F;
	LAYOUT_ALL_KEYS[3][9].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][9].level[0].value.keycode = KEY_F;

	LAYOUT_ALL_KEYS[3][10].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][10].level[0].value.keycode = KEY_Q;
	LAYOUT_ALL_KEYS[3][10].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][10].level[0].value.keycode = KEY_Q;
	LAYOUT_ALL_KEYS[3][10].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][10].level[0].value.keycode = KEY_Q;
	LAYOUT_ALL_KEYS[3][10].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][10].level[0].value.keycode = KEY_Q;
	LAYOUT_ALL_KEYS[3][10].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][10].level[0].value.keycode = KEY_Q;
	LAYOUT_ALL_KEYS[3][10].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][10].level[0].value.keycode = KEY_Q;

	LAYOUT_ALL_KEYS[3][11].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][11].level[0].value.keycode = KEY_ESZETT;
	LAYOUT_ALL_KEYS[3][11].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][11].level[0].value.keycode = KEY_ESZETT;
	LAYOUT_ALL_KEYS[3][11].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][11].level[0].value.keycode = KEY_ESZETT;
	LAYOUT_ALL_KEYS[3][11].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][11].level[0].value.keycode = KEY_ESZETT;
	LAYOUT_ALL_KEYS[3][11].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][11].level[0].value.keycode = KEY_ESZETT;
	LAYOUT_ALL_KEYS[3][11].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[3][11].level[0].value.keycode = KEY_ESZETT;

	LAYOUT_ALL_KEYS[4][0].level[0].type = LAYOUT_TYPE_MODIFIER; LAYOUT_ALL_KEYS[4][0].level[0].value.keycode = MODIFIER_LEFT_SHIFT;
	LAYOUT_ALL_KEYS[4][0].level[1].type = LAYOUT_TYPE_MODIFIER; LAYOUT_ALL_KEYS[4][0].level[0].value.keycode = MODIFIER_LEFT_SHIFT;
	LAYOUT_ALL_KEYS[4][0].level[2].type = LAYOUT_TYPE_MODIFIER; LAYOUT_ALL_KEYS[4][0].level[0].value.keycode = MODIFIER_LEFT_SHIFT;
	LAYOUT_ALL_KEYS[4][0].level[3].type = LAYOUT_TYPE_MODIFIER; LAYOUT_ALL_KEYS[4][0].level[0].value.keycode = MODIFIER_LEFT_SHIFT;
	LAYOUT_ALL_KEYS[4][0].level[4].type = LAYOUT_TYPE_MODIFIER; LAYOUT_ALL_KEYS[4][0].level[0].value.keycode = MODIFIER_LEFT_SHIFT;
	LAYOUT_ALL_KEYS[4][0].level[5].type = LAYOUT_TYPE_MODIFIER; LAYOUT_ALL_KEYS[4][0].level[0].value.keycode = MODIFIER_LEFT_SHIFT;

	LAYOUT_ALL_KEYS[4][1].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][1].level[0].value.keycode = KEY_U;
	LAYOUT_ALL_KEYS[4][1].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][1].level[0].value.keycode = KEY_U;
	LAYOUT_ALL_KEYS[4][1].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][1].level[0].value.keycode = KEY_U;
	LAYOUT_ALL_KEYS[4][1].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][1].level[0].value.keycode = KEY_U;
	LAYOUT_ALL_KEYS[4][1].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][1].level[0].value.keycode = KEY_U;
	LAYOUT_ALL_KEYS[4][1].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][1].level[0].value.keycode = KEY_U;

	LAYOUT_ALL_KEYS[4][2].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][2].level[0].value.keycode = KEY_I;
	LAYOUT_ALL_KEYS[4][2].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][2].level[0].value.keycode = KEY_I;
	LAYOUT_ALL_KEYS[4][2].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][2].level[0].value.keycode = KEY_I;
	LAYOUT_ALL_KEYS[4][2].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][2].level[0].value.keycode = KEY_I;
	LAYOUT_ALL_KEYS[4][2].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][2].level[0].value.keycode = KEY_I;
	LAYOUT_ALL_KEYS[4][2].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][2].level[0].value.keycode = KEY_I;

	LAYOUT_ALL_KEYS[4][3].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][3].level[0].value.keycode = KEY_A;
	LAYOUT_ALL_KEYS[4][3].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][3].level[0].value.keycode = KEY_A;
	LAYOUT_ALL_KEYS[4][3].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][3].level[0].value.keycode = KEY_A;
	LAYOUT_ALL_KEYS[4][3].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][3].level[0].value.keycode = KEY_A;
	LAYOUT_ALL_KEYS[4][3].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][3].level[0].value.keycode = KEY_A;
	LAYOUT_ALL_KEYS[4][3].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][3].level[0].value.keycode = KEY_A;

	LAYOUT_ALL_KEYS[4][4].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][4].level[0].value.keycode = KEY_E;
	LAYOUT_ALL_KEYS[4][4].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][4].level[0].value.keycode = KEY_E;
	LAYOUT_ALL_KEYS[4][4].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][4].level[0].value.keycode = KEY_E;
	LAYOUT_ALL_KEYS[4][4].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][4].level[0].value.keycode = KEY_E;
	LAYOUT_ALL_KEYS[4][4].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][4].level[0].value.keycode = KEY_E;
	LAYOUT_ALL_KEYS[4][4].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][4].level[0].value.keycode = KEY_E;

	LAYOUT_ALL_KEYS[4][5].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][5].level[0].value.keycode = KEY_O;
	LAYOUT_ALL_KEYS[4][5].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][5].level[0].value.keycode = KEY_O;
	LAYOUT_ALL_KEYS[4][5].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][5].level[0].value.keycode = KEY_O;
	LAYOUT_ALL_KEYS[4][5].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][5].level[0].value.keycode = KEY_O;
	LAYOUT_ALL_KEYS[4][5].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][5].level[0].value.keycode = KEY_O;
	LAYOUT_ALL_KEYS[4][5].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][5].level[0].value.keycode = KEY_O;

	LAYOUT_ALL_KEYS[4][6].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][6].level[0].value.keycode = KEY_S;
	LAYOUT_ALL_KEYS[4][6].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][6].level[0].value.keycode = KEY_S;
	LAYOUT_ALL_KEYS[4][6].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][6].level[0].value.keycode = KEY_S;
	LAYOUT_ALL_KEYS[4][6].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][6].level[0].value.keycode = KEY_S;
	LAYOUT_ALL_KEYS[4][6].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][6].level[0].value.keycode = KEY_S;
	LAYOUT_ALL_KEYS[4][6].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][6].level[0].value.keycode = KEY_S;

	LAYOUT_ALL_KEYS[4][7].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][7].level[0].value.keycode = KEY_N;
	LAYOUT_ALL_KEYS[4][7].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][7].level[0].value.keycode = KEY_N;
	LAYOUT_ALL_KEYS[4][7].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][7].level[0].value.keycode = KEY_N;
	LAYOUT_ALL_KEYS[4][7].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][7].level[0].value.keycode = KEY_N;
	LAYOUT_ALL_KEYS[4][7].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][7].level[0].value.keycode = KEY_N;
	LAYOUT_ALL_KEYS[4][7].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][7].level[0].value.keycode = KEY_N;

	LAYOUT_ALL_KEYS[4][8].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][8].level[0].value.keycode = KEY_R;
	LAYOUT_ALL_KEYS[4][8].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][8].level[0].value.keycode = KEY_R;
	LAYOUT_ALL_KEYS[4][8].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][8].level[0].value.keycode = KEY_R;
	LAYOUT_ALL_KEYS[4][8].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][8].level[0].value.keycode = KEY_R;
	LAYOUT_ALL_KEYS[4][8].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][8].level[0].value.keycode = KEY_R;
	LAYOUT_ALL_KEYS[4][8].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][8].level[0].value.keycode = KEY_R;

	LAYOUT_ALL_KEYS[4][9].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][9].level[0].value.keycode = KEY_T;
	LAYOUT_ALL_KEYS[4][9].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][9].level[0].value.keycode = KEY_T;
	LAYOUT_ALL_KEYS[4][9].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][9].level[0].value.keycode = KEY_T;
	LAYOUT_ALL_KEYS[4][9].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][9].level[0].value.keycode = KEY_T;
	LAYOUT_ALL_KEYS[4][9].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][9].level[0].value.keycode = KEY_T;
	LAYOUT_ALL_KEYS[4][9].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][9].level[0].value.keycode = KEY_T;

	LAYOUT_ALL_KEYS[4][10].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][10].level[0].value.keycode = KEY_D;
	LAYOUT_ALL_KEYS[4][10].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][10].level[0].value.keycode = KEY_D;
	LAYOUT_ALL_KEYS[4][10].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][10].level[0].value.keycode = KEY_D;
	LAYOUT_ALL_KEYS[4][10].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][10].level[0].value.keycode = KEY_D;
	LAYOUT_ALL_KEYS[4][10].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][10].level[0].value.keycode = KEY_D;
	LAYOUT_ALL_KEYS[4][10].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[4][10].level[0].value.keycode = KEY_D;

	LAYOUT_ALL_KEYS[4][11].level[0].type = LAYOUT_TYPE_MODIFIER; LAYOUT_ALL_KEYS[4][11].level[0].value.keycode = MODIFIER_RIGHT_SHIFT;
	LAYOUT_ALL_KEYS[4][11].level[1].type = LAYOUT_TYPE_MODIFIER; LAYOUT_ALL_KEYS[4][11].level[0].value.keycode = MODIFIER_RIGHT_SHIFT;
	LAYOUT_ALL_KEYS[4][11].level[2].type = LAYOUT_TYPE_MODIFIER; LAYOUT_ALL_KEYS[4][11].level[0].value.keycode = MODIFIER_RIGHT_SHIFT;
	LAYOUT_ALL_KEYS[4][11].level[3].type = LAYOUT_TYPE_MODIFIER; LAYOUT_ALL_KEYS[4][11].level[0].value.keycode = MODIFIER_RIGHT_SHIFT;
	LAYOUT_ALL_KEYS[4][11].level[4].type = LAYOUT_TYPE_MODIFIER; LAYOUT_ALL_KEYS[4][11].level[0].value.keycode = MODIFIER_RIGHT_SHIFT;
	LAYOUT_ALL_KEYS[4][11].level[5].type = LAYOUT_TYPE_MODIFIER; LAYOUT_ALL_KEYS[4][11].level[0].value.keycode = MODIFIER_RIGHT_SHIFT;

	// LAYOUT_ALL_KEYS[5][0].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][0].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[5][0].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][0].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[5][0].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][0].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[5][0].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][0].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[5][0].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][0].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[5][0].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][0].level[0].value.keycode = KEY_;

	LAYOUT_ALL_KEYS[5][1].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][1].level[0].value.keycode = KEY_UE;
	LAYOUT_ALL_KEYS[5][1].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][1].level[0].value.keycode = KEY_UE;
	LAYOUT_ALL_KEYS[5][1].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][1].level[0].value.keycode = KEY_UE;
	LAYOUT_ALL_KEYS[5][1].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][1].level[0].value.keycode = KEY_UE;
	LAYOUT_ALL_KEYS[5][1].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][1].level[0].value.keycode = KEY_UE;
	LAYOUT_ALL_KEYS[5][1].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][1].level[0].value.keycode = KEY_UE;

	LAYOUT_ALL_KEYS[5][2].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][2].level[0].value.keycode = KEY_OE;
	LAYOUT_ALL_KEYS[5][2].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][2].level[0].value.keycode = KEY_OE;
	LAYOUT_ALL_KEYS[5][2].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][2].level[0].value.keycode = KEY_OE;
	LAYOUT_ALL_KEYS[5][2].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][2].level[0].value.keycode = KEY_OE;
	LAYOUT_ALL_KEYS[5][2].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][2].level[0].value.keycode = KEY_OE;
	LAYOUT_ALL_KEYS[5][2].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][2].level[0].value.keycode = KEY_OE;

	LAYOUT_ALL_KEYS[5][3].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][3].level[0].value.keycode = KEY_AE;
	LAYOUT_ALL_KEYS[5][3].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][3].level[0].value.keycode = KEY_AE;
	LAYOUT_ALL_KEYS[5][3].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][3].level[0].value.keycode = KEY_AE;
	LAYOUT_ALL_KEYS[5][3].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][3].level[0].value.keycode = KEY_AE;
	LAYOUT_ALL_KEYS[5][3].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][3].level[0].value.keycode = KEY_AE;
	LAYOUT_ALL_KEYS[5][3].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][3].level[0].value.keycode = KEY_AE;

	LAYOUT_ALL_KEYS[5][4].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][4].level[0].value.keycode = KEY_Z;
	LAYOUT_ALL_KEYS[5][4].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][4].level[0].value.keycode = KEY_Z;
	LAYOUT_ALL_KEYS[5][4].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][4].level[0].value.keycode = KEY_Z;
	LAYOUT_ALL_KEYS[5][4].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][4].level[0].value.keycode = KEY_Z;
	LAYOUT_ALL_KEYS[5][4].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][4].level[0].value.keycode = KEY_Z;
	LAYOUT_ALL_KEYS[5][4].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][4].level[0].value.keycode = KEY_Z;

	LAYOUT_ALL_KEYS[5][5].level[0].type = LAYOUT_TYPE_MODIFIER; LAYOUT_ALL_KEYS[5][5].level[0].value.keycode = MODIFIER_RIGHT_CTRL;
	LAYOUT_ALL_KEYS[5][5].level[1].type = LAYOUT_TYPE_MODIFIER; LAYOUT_ALL_KEYS[5][5].level[0].value.keycode = MODIFIER_RIGHT_CTRL;
	LAYOUT_ALL_KEYS[5][5].level[2].type = LAYOUT_TYPE_MODIFIER; LAYOUT_ALL_KEYS[5][5].level[0].value.keycode = MODIFIER_RIGHT_CTRL;
	LAYOUT_ALL_KEYS[5][5].level[3].type = LAYOUT_TYPE_MODIFIER; LAYOUT_ALL_KEYS[5][5].level[0].value.keycode = MODIFIER_RIGHT_CTRL;
	LAYOUT_ALL_KEYS[5][5].level[4].type = LAYOUT_TYPE_MODIFIER; LAYOUT_ALL_KEYS[5][5].level[0].value.keycode = MODIFIER_RIGHT_CTRL;
	LAYOUT_ALL_KEYS[5][5].level[5].type = LAYOUT_TYPE_MODIFIER; LAYOUT_ALL_KEYS[5][5].level[0].value.keycode = MODIFIER_RIGHT_CTRL;

	// LAYOUT_ALL_KEYS[5][6].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][6].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[5][6].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][6].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[5][6].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][6].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[5][6].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][6].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[5][6].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][6].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[5][6].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][6].level[0].value.keycode = KEY_;

	LAYOUT_ALL_KEYS[5][7].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][7].level[0].value.keycode = KEY_B;
	LAYOUT_ALL_KEYS[5][7].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][7].level[0].value.keycode = KEY_B;
	LAYOUT_ALL_KEYS[5][7].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][7].level[0].value.keycode = KEY_B;
	LAYOUT_ALL_KEYS[5][7].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][7].level[0].value.keycode = KEY_B;
	LAYOUT_ALL_KEYS[5][7].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][7].level[0].value.keycode = KEY_B;
	LAYOUT_ALL_KEYS[5][7].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][7].level[0].value.keycode = KEY_B;

	LAYOUT_ALL_KEYS[5][8].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][8].level[0].value.keycode = KEY_KOMMA;
	LAYOUT_ALL_KEYS[5][8].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][8].level[0].value.keycode = KEY_KOMMA;
	LAYOUT_ALL_KEYS[5][8].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][8].level[0].value.keycode = KEY_KOMMA;
	LAYOUT_ALL_KEYS[5][8].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][8].level[0].value.keycode = KEY_KOMMA;
	LAYOUT_ALL_KEYS[5][8].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][8].level[0].value.keycode = KEY_KOMMA;
	LAYOUT_ALL_KEYS[5][8].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][8].level[0].value.keycode = KEY_KOMMA;

	LAYOUT_ALL_KEYS[5][9].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][9].level[0].value.keycode = KEY_PUNKT;
	LAYOUT_ALL_KEYS[5][9].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][9].level[0].value.keycode = KEY_PUNKT;
	LAYOUT_ALL_KEYS[5][9].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][9].level[0].value.keycode = KEY_PUNKT;
	LAYOUT_ALL_KEYS[5][9].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][9].level[0].value.keycode = KEY_PUNKT;
	LAYOUT_ALL_KEYS[5][9].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][9].level[0].value.keycode = KEY_PUNKT;
	LAYOUT_ALL_KEYS[5][9].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][9].level[0].value.keycode = KEY_PUNKT;

	LAYOUT_ALL_KEYS[5][10].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][10].level[0].value.keycode = KEY_J;
	LAYOUT_ALL_KEYS[5][10].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][10].level[0].value.keycode = KEY_J;
	LAYOUT_ALL_KEYS[5][10].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][10].level[0].value.keycode = KEY_J;
	LAYOUT_ALL_KEYS[5][10].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][10].level[0].value.keycode = KEY_J;
	LAYOUT_ALL_KEYS[5][10].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][10].level[0].value.keycode = KEY_J;
	LAYOUT_ALL_KEYS[5][10].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][10].level[0].value.keycode = KEY_J;

	// LAYOUT_ALL_KEYS[5][11].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][11].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[5][11].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][11].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[5][11].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][11].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[5][11].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][11].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[5][11].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][11].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[5][11].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[5][11].level[0].value.keycode = KEY_;

	LAYOUT_ALL_KEYS[6][0].level[0].type = LAYOUT_TYPE_MODIFIER; LAYOUT_ALL_KEYS[6][0].level[0].value.keycode = MODIFIER_LEFT_CTRL;
	LAYOUT_ALL_KEYS[6][0].level[1].type = LAYOUT_TYPE_MODIFIER; LAYOUT_ALL_KEYS[6][0].level[0].value.keycode = MODIFIER_LEFT_CTRL;
	LAYOUT_ALL_KEYS[6][0].level[2].type = LAYOUT_TYPE_MODIFIER; LAYOUT_ALL_KEYS[6][0].level[0].value.keycode = MODIFIER_LEFT_CTRL;
	LAYOUT_ALL_KEYS[6][0].level[3].type = LAYOUT_TYPE_MODIFIER; LAYOUT_ALL_KEYS[6][0].level[0].value.keycode = MODIFIER_LEFT_CTRL;
	LAYOUT_ALL_KEYS[6][0].level[4].type = LAYOUT_TYPE_MODIFIER; LAYOUT_ALL_KEYS[6][0].level[0].value.keycode = MODIFIER_LEFT_CTRL;
	LAYOUT_ALL_KEYS[6][0].level[5].type = LAYOUT_TYPE_MODIFIER; LAYOUT_ALL_KEYS[6][0].level[0].value.keycode = MODIFIER_LEFT_CTRL;

	LAYOUT_ALL_KEYS[6][1].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][1].level[0].value.keycode = KEY_LEFT_GUI;
	LAYOUT_ALL_KEYS[6][1].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][1].level[0].value.keycode = KEY_LEFT_GUI;
	LAYOUT_ALL_KEYS[6][1].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][1].level[0].value.keycode = KEY_LEFT_GUI;
	LAYOUT_ALL_KEYS[6][1].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][1].level[0].value.keycode = KEY_LEFT_GUI;
	LAYOUT_ALL_KEYS[6][1].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][1].level[0].value.keycode = KEY_LEFT_GUI;
	LAYOUT_ALL_KEYS[6][1].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][1].level[0].value.keycode = KEY_LEFT_GUI;

	LAYOUT_ALL_KEYS[6][2].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][2].level[0].value.keycode = KEY_LEFT_ALT;
	LAYOUT_ALL_KEYS[6][2].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][2].level[0].value.keycode = KEY_LEFT_ALT;
	LAYOUT_ALL_KEYS[6][2].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][2].level[0].value.keycode = KEY_LEFT_ALT;
	LAYOUT_ALL_KEYS[6][2].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][2].level[0].value.keycode = KEY_LEFT_ALT;
	LAYOUT_ALL_KEYS[6][2].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][2].level[0].value.keycode = KEY_LEFT_ALT;
	LAYOUT_ALL_KEYS[6][2].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][2].level[0].value.keycode = KEY_LEFT_ALT;

	// LAYOUT_ALL_KEYS[6][3].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][3].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][3].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][3].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][3].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][3].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][3].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][3].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][3].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][3].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][3].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][3].level[0].value.keycode = KEY_;

	LAYOUT_ALL_KEYS[6][4].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][4].level[0].value.keycode = KEY_ENTER;
	LAYOUT_ALL_KEYS[6][4].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][4].level[0].value.keycode = KEY_ENTER;
	LAYOUT_ALL_KEYS[6][4].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][4].level[0].value.keycode = KEY_ENTER;
	LAYOUT_ALL_KEYS[6][4].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][4].level[0].value.keycode = KEY_ENTER;
	LAYOUT_ALL_KEYS[6][4].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][4].level[0].value.keycode = KEY_ENTER;
	LAYOUT_ALL_KEYS[6][4].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][4].level[0].value.keycode = KEY_ENTER;

	// LAYOUT_ALL_KEYS[6][5].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][5].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][5].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][5].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][5].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][5].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][5].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][5].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][5].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][5].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][5].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][5].level[0].value.keycode = KEY_;

	// LAYOUT_ALL_KEYS[6][6].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][6].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][6].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][6].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][6].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][6].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][6].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][6].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][6].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][6].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][6].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][6].level[0].value.keycode = KEY_;

	LAYOUT_ALL_KEYS[6][7].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][7].level[0].value.keycode = KEY_SPACE;
	LAYOUT_ALL_KEYS[6][7].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][7].level[0].value.keycode = KEY_SPACE;
	LAYOUT_ALL_KEYS[6][7].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][7].level[0].value.keycode = KEY_SPACE;
	LAYOUT_ALL_KEYS[6][7].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][7].level[0].value.keycode = KEY_SPACE;
	LAYOUT_ALL_KEYS[6][7].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][7].level[0].value.keycode = KEY_SPACE;
	LAYOUT_ALL_KEYS[6][7].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][7].level[0].value.keycode = KEY_SPACE;

	// LAYOUT_ALL_KEYS[6][8].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][8].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][8].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][8].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][8].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][8].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][8].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][8].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][8].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][8].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][8].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][8].level[0].value.keycode = KEY_;

	LAYOUT_ALL_KEYS[6][9].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][9].level[0].value.keycode = KEY_RIGHT_GUI;
	LAYOUT_ALL_KEYS[6][9].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][9].level[0].value.keycode = KEY_RIGHT_GUI;
	LAYOUT_ALL_KEYS[6][9].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][9].level[0].value.keycode = KEY_RIGHT_GUI;
	LAYOUT_ALL_KEYS[6][9].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][9].level[0].value.keycode = KEY_RIGHT_GUI;
	LAYOUT_ALL_KEYS[6][9].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][9].level[0].value.keycode = KEY_RIGHT_GUI;
	LAYOUT_ALL_KEYS[6][9].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][9].level[0].value.keycode = KEY_RIGHT_GUI;

	// LAYOUT_ALL_KEYS[6][10].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][10].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][10].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][10].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][10].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][10].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][10].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][10].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][10].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][10].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][10].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][10].level[0].value.keycode = KEY_;

	// LAYOUT_ALL_KEYS[6][11].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][11].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][11].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][11].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][11].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][11].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][11].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][11].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][11].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][11].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[6][11].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[6][11].level[0].value.keycode = KEY_;

	// LAYOUT_ALL_KEYS[7][0].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][0].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][0].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][0].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][0].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][0].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][0].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][0].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][0].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][0].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][0].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][0].level[0].value.keycode = KEY_;

	// LAYOUT_ALL_KEYS[7][1].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][1].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][1].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][1].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][1].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][1].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][1].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][1].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][1].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][1].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][1].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][1].level[0].value.keycode = KEY_;

	// LAYOUT_ALL_KEYS[7][2].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][2].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][2].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][2].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][2].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][2].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][2].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][2].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][2].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][2].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][2].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][2].level[0].value.keycode = KEY_;

	LAYOUT_ALL_KEYS[7][3].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][3].level[0].value.keycode = KEY_P;
	LAYOUT_ALL_KEYS[7][3].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][3].level[0].value.keycode = KEY_P;
	LAYOUT_ALL_KEYS[7][3].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][3].level[0].value.keycode = KEY_P;
	LAYOUT_ALL_KEYS[7][3].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][3].level[0].value.keycode = KEY_P;
	LAYOUT_ALL_KEYS[7][3].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][3].level[0].value.keycode = KEY_P;
	LAYOUT_ALL_KEYS[7][3].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][3].level[0].value.keycode = KEY_P;

	LAYOUT_ALL_KEYS[7][4].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][4].level[0].value.keycode = KEY_DELETE;
	LAYOUT_ALL_KEYS[7][4].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][4].level[0].value.keycode = KEY_DELETE;
	LAYOUT_ALL_KEYS[7][4].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][4].level[0].value.keycode = KEY_DELETE;
	LAYOUT_ALL_KEYS[7][4].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][4].level[0].value.keycode = KEY_DELETE;
	LAYOUT_ALL_KEYS[7][4].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][4].level[0].value.keycode = KEY_DELETE;
	LAYOUT_ALL_KEYS[7][4].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][4].level[0].value.keycode = KEY_DELETE;

	// LAYOUT_ALL_KEYS[7][5].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][5].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][5].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][5].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][5].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][5].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][5].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][5].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][5].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][5].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][5].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][5].level[0].value.keycode = KEY_;

	LAYOUT_ALL_KEYS[7][6].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][6].level[0].value.keycode = KEY_DELETE_FORWARD;
	LAYOUT_ALL_KEYS[7][6].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][6].level[0].value.keycode = KEY_DELETE_FORWARD;
	LAYOUT_ALL_KEYS[7][6].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][6].level[0].value.keycode = KEY_DELETE_FORWARD;
	LAYOUT_ALL_KEYS[7][6].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][6].level[0].value.keycode = KEY_DELETE_FORWARD;
	LAYOUT_ALL_KEYS[7][6].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][6].level[0].value.keycode = KEY_DELETE_FORWARD;
	LAYOUT_ALL_KEYS[7][6].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][6].level[0].value.keycode = KEY_DELETE_FORWARD;

	// LAYOUT_ALL_KEYS[7][7].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][7].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][7].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][7].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][7].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][7].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][7].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][7].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][7].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][7].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][7].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][7].level[0].value.keycode = KEY_;

	LAYOUT_ALL_KEYS[7][8].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][8].level[0].value.keycode = KEY_M;
	LAYOUT_ALL_KEYS[7][8].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][8].level[0].value.keycode = KEY_M;
	LAYOUT_ALL_KEYS[7][8].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][8].level[0].value.keycode = KEY_M;
	LAYOUT_ALL_KEYS[7][8].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][8].level[0].value.keycode = KEY_M;
	LAYOUT_ALL_KEYS[7][8].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][8].level[0].value.keycode = KEY_M;
	LAYOUT_ALL_KEYS[7][8].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][8].level[0].value.keycode = KEY_M;

	// LAYOUT_ALL_KEYS[7][9].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][9].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][9].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][9].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][9].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][9].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][9].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][9].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][9].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][9].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][9].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][9].level[0].value.keycode = KEY_;

	// LAYOUT_ALL_KEYS[7][10].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][10].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][10].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][10].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][10].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][10].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][10].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][10].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][10].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][10].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][10].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][10].level[0].value.keycode = KEY_;

	// LAYOUT_ALL_KEYS[7][11].level[0].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][11].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][11].level[1].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][11].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][11].level[2].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][11].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][11].level[3].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][11].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][11].level[4].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][11].level[0].value.keycode = KEY_;
	// LAYOUT_ALL_KEYS[7][11].level[5].type = LAYOUT_TYPE_KEYCODE; LAYOUT_ALL_KEYS[7][11].level[0].value.keycode = KEY_;




	
	
}

void layout_handle_key_press(layout_keyIndices key)
{
	switch (LAYOUT_ALL_KEYS[key.row][key.column].level[0].type)
	{
		case LAYOUT_TYPE_KEYCODE:
			udi_hid_kbd_down(LAYOUT_ALL_KEYS[key.row][key.column].level[0].value.keycode);
			break;
		case LAYOUT_TYPE_MODIFIER:
			udi_hid_kbd_modifier_down(LAYOUT_ALL_KEYS[key.row][key.column].level[0].value.keycode);
			break;
	}
	
}

void layout_handle_key_release(layout_keyIndices key)
{
	switch (LAYOUT_ALL_KEYS[key.row][key.column].level[0].type)
	{
		case LAYOUT_TYPE_KEYCODE:
			udi_hid_kbd_up(LAYOUT_ALL_KEYS[key.row][key.column].level[0].value.keycode);
			break;
		case LAYOUT_TYPE_MODIFIER:
			udi_hid_kbd_modifier_up(LAYOUT_ALL_KEYS[key.row][key.column].level[0].value.keycode);
			break;
	}
	udi_hid_kbd_up(LAYOUT_ALL_KEYS[key.row][key.column].level[0].value.keycode);
}