/*
 * readKeys.h
 *
 * Created: 22.03.2016 21:44:25
 *  Author: Tilman
 */ 


#ifndef READKEYS_H_
#define READKEYS_H_

extern volatile uint8_t current_keyMatrix_Status[KEYBOARD_NUMBER_OF_COLUMNS];

void readKeys_set_all_columns_to_low(void);
void readKeys_set_all_columns_to_high(void);
void readKeys_start_key_polling(void);
void readKeys_stop_key_polling(void);


#endif /* READKEYS_H_ */