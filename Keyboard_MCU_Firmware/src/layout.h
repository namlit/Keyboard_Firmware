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
#define KEY_LEFT_ARROW 0x50
#define KEY_DOWN_ARROW 0x51
#define KEY_UP_ARROW 0x52

#define KEY_KEYPAD_1 0x59
#define KEY_KEYPAD_2 0x5A
#define KEY_KEYPAD_3 0x5B
#define KEY_KEYPAD_4 0x5C
#define KEY_KEYPAD_5 0x5D
#define KEY_KEYPAD_6 0x5E
#define KEY_KEYPAD_7 0x5F
#define KEY_KEYPAD_8 0x60
#define KEY_KEYPAD_9 0x61
#define KEY_KEYPAD_0 0x62

#define KEY_LEFT_CTRL 0xE0
#define KEY_LEFT_SHIFT 0xE1
#define KEY_LEFT_ALT 0xE2
#define KEY_LEFT_GUI 0xE3
#define KEY_RIGHT_CTRL 0xE4
#define KEY_RIGHT_SHIFT 0xE5
#define KEY_RIGHT_ALT 0xE6
#define KEY_RIGHT_GUI 0xE7

#define MODIFIER_LEFT_CTRL_BITMASK     0x01
#define MODIFIER_LEFT_SHIFT_BITMASK    0x02
#define MODIFIER_LEFT_ALT_BITMASK      0x04
#define MODIFIER_LEFT_GUI_BITMASK      0x08
#define MODIFIER_RIGHT_CTRL_BITMASK    0x10
#define MODIFIER_RIGHT_SHIFT_BITMASK   0x20
#define MODIFIER_RIGHT_ALT_BITMASK     0x40
#define MODIFIER_RIGHT_GUI_BITMASK     0x80


#define LAYOUT__NUMBER_OF_LEVELS 6


typedef enum layout_key_type
{
	LAYOUT_TYPE_KEYCODE, /**< Sends a normal keycode to the computer that gets evaluated by the operating system */
	LAYOUT_TYPE_UNICODE, /**< Not supported at the moment */
	LAYOUT_TYPE_COMPUTER_MODIFIER, /**< Modifier like CTLR, SHIFT, ALT, GUI that gets send to the computer and evaluated by the operating system. It can also change the internal level*/
	LAYOUT_TYPE_INTERNAL_MODIFIER_WITH_LOCK, /**< Modifier that only changes the internal level and does not get send to the computer. Pressing two modifiers for the same level at the same time causes the level to lock. */
	LAYOUT_TYPE_INTERNAL_MODIFIER_WITHOUT_LOCK, /**< Modifier that only changes the internal level and does not get send to the computer. Locking by pressing two modifiers is not possible. */
	LAYOUT_TYPE_LOCK_UNLOCK_LEVEL /**< Modifier that toggles the lock state of a level */
} layout_key_type;

typedef struct layout__keyIndices
{
	uint8_t row;
	uint8_t column;
	
} layout__keyIndices;

typedef struct layout__modifier
{
	uint8_t modifier_bitmask; /**< Bit mask for computer modifiers*/
	uint8_t level; /**< Level to enter when modifier is pressed. If Level is zero, the modifier does not change the internal Level and gets evaluated by the PC. The Level counting starts from zero (shift normally activates level 1, M3 activates level 2)*/
} layout__modifier;

typedef union layout__key_value
{
	uint8_t keycode; /**<  */
	layout__modifier modifier; /**<  */
	uint16_t unicode; /**<  */
} layout__key_value;

typedef struct layout__key
{
	layout_key_type type;
	layout__key_value value;
} layout__key;

typedef struct layout__keyLevels
{
	layout__key level[LAYOUT__NUMBER_OF_LEVELS];
	
} layout__keyLevels;

extern layout__keyLevels layout__complete_layout[KEYBOARD_NUMBER_OF_ROWS][KEYBOARD_NUMBER_OF_COLUMNS];
//extern uint8_t layout__computer_modifier_state;
//extern uint16_t layout__internal_modifier_state;
extern uint8_t layout__current_level;
extern uint16_t layout__level_modifier_state; /**<  contains the state of the internal modifiers. If a bit is set to one the corresponding modifier is currently pressed down. [level_16 level_15 ... level_2 level_1]*/
extern uint16_t layout__level_lock_state;

void layout__load(void);
void layout__handle_key_press(layout__keyIndices key);
void layout__handle_key_release(layout__keyIndices key);

void layout__updateLevel(void);

void layout__keycode_pressed(uint8_t keycode);
void layout__unicode_pressed(uint16_t unicode);
void layout__computer_modifier_pressed(layout__modifier modifier);
void layout__internal_modifier_with_lock_pressed(layout__modifier modifier);
void layout__internal_modifier_without_lock_pressed(layout__modifier modifier);

void layout__keycode_released(uint8_t keycode);
void layout__unicode_released(uint16_t unicode);
void layout__computer_modifier_released(layout__modifier modifier);
void layout__internal_modifier_with_lock_released(layout__modifier modifier);
void layout__internal_modifier_without_lock_released(layout__modifier modifier);


#endif /* LAYOUT_H_ */