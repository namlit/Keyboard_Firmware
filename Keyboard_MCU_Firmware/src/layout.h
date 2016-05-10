/*
 * layout.h
 *
 * Created: 23.03.2016 00:43:20
 *  Author: Tilman
 */ 


#ifndef LAYOUT_H_
#define LAYOUT_H_

//#include "eventQueue.h"

#define KEY_A 0x04
#define KEY_B 0x05
#define KEY_C 0x06
#define KEY_D 0x07
#define KEY_E 0x08
#define KEY_F 0x09
#define KEY_G 0x0A
#define KEY_H 0x0B
#define KEY_I 0x0C
#define KEY_J 0x0D
#define KEY_K 0x0E
#define KEY_L 0x0F
#define KEY_M 0x10
#define KEY_N 0x11
#define KEY_O 0x12
#define KEY_P 0x13
#define KEY_Q 0x14
#define KEY_R 0x15
#define KEY_S 0x16
#define KEY_T 0x17
#define KEY_U 0x18
#define KEY_V 0x19
#define KEY_W 0x1A
#define KEY_Y 0x1D
#define KEY_X 0x1B
#define KEY_Z 0x1C

#define KEY_1 0x1E
#define KEY_2 0x1F
#define KEY_3 0x20
#define KEY_4 0x21
#define KEY_5 0x22
#define KEY_6 0x23
#define KEY_7 0x24
#define KEY_8 0x25
#define KEY_9 0x26
#define KEY_0 0x27


#define KEY_ENTER 0x28
#define KEY_ESCAPE 0x29
#define KEY_DELETE 0x2A
#define KEY_TAB 0x2B
#define KEY_SPACE 0x2C
#define KEY_ESZETT 0x2D
#define KEY_ACCENT 0x2E
#define KEY_UE 0x2F
#define KEY_PLUS 0x30
#define KEY_RAUTE 0x31
#define KEY_SMALLER 0x32
#define KEY_OE 0x33
#define KEY_AE 0x34
#define KEY_HEAD 0x35
#define KEY_KOMMA 0x36
#define KEY_PUNKT 0x37
#define KEY_MINUS 0x38
#define KEY_CAPS_LOCK 0x39


#define KEY_F1 0x3A
#define KEY_F2 0x3B
#define KEY_F3 0x3C
#define KEY_F4 0x3D
#define KEY_F5 0x3E
#define KEY_F6 0x3F
#define KEY_F7 0x40
#define KEY_F8 0x41
#define KEY_F9 0x42
#define KEY_F10 0x43
#define KEY_F11 0x44
#define KEY_F12 0x45

#define KEY_PRINT 0x46
#define KEY_SCROLL_LOCK 0x47
#define KEY_PAUSE 0x48
#define KEY_INSERT 0x49
#define KEY_HOME 0x4A
#define KEY_PAGE_UP 0x4B
#define KEY_DELETE_FORWARD 0x4C
#define KEY_END 0x4D
#define KEY_PAGE_DOWN 0x4E
#define KEY_RIGHT_ARROW 0x4F
#define KEY_Z_LEFT_ARROW 0x50
#define KEY_DOWN_ARROW 0x51
#define KEY_UP_ARROW 0x52

#define KEY_LEFT_CTRL 0xE0
#define KEY_LEFT_SHIFT 0xE1
#define KEY_LEFT_ALT 0xE2
#define KEY_LEFT_GUI 0xE3
#define KEY_RIGHT_CTRL 0xE4
#define KEY_RIGHT_SHIFT 0xE5
#define KEY_RIGHT_ALT 0xE6
#define KEY_RIGHT_GUI 0xE7

#define MODIFIER_NONE          0x00
#define MODIFIER_LEFT_CTRL     0x01
#define MODIFIER_LEFT_SHIFT    0x02
#define MODIFIER_LEFT_ALT      0x04
#define MODIFIER_LEFT_GUI       0x08
#define MODIFIER_RIGHT_CTRL    0x10
#define MODIFIER_RIGHT_SHIFT   0x20
#define MODIFIER_RIGHT_ALT     0x40
#define MODIFIER_RIGHT_GUI      0x80

#define LAYOUT_NUMBER_OF_LEVELS 6

typedef enum layout_key_type {LAYOUT_TYPE_KEYCODE, LAYOUT_TYPE_MODIFIER, LAYOUT_TYPE_INTERNAL_MODIFIER, LAYOUT_TYPE_UNICODE} layout_key_type;

typedef struct layout_keyIndices
{
	uint8_t row;
	uint8_t column;
	
} layout_keyIndices;

typedef union layout_key_value
{
	uint8_t keycode;
	// modifierAndKeycode
	uint16_t unicode;
} layout_key_value;

typedef struct layout_keyValue
{
	layout_key_type type;
	layout_key_value value;
	
	
} layout_keyValue;

typedef struct layout_keyLevels
{
	layout_keyValue level[LAYOUT_NUMBER_OF_LEVELS];
	
} layout_keyLevels;

extern layout_keyLevels LAYOUT_ALL_KEYS[KEYBOARD_NUMBER_OF_ROWS][KEYBOARD_NUMBER_OF_COLUMNS];

void layout_load(void);
void layout_handle_key_press(layout_keyIndices key);
void layout_handle_key_release(layout_keyIndices key);

#endif /* LAYOUT_H_ */