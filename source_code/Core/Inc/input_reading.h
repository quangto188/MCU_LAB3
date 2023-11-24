/*
 * input_reading.h
 *
 *  Created on: Nov 22, 2023
 *      Author: todiu_cp4n01g
 */

#ifndef INC_INPUT_READING_H_
#define INC_INPUT_READING_H_
#include "main.h"
// we aim to work with more than one buttons
#define N0_OF_BUTTONS 4

void button_reading(void);
unsigned char is_button_pressed(unsigned char index);
unsigned char is_button_pressed_1s(unsigned char index);
unsigned char is_button_pressed_one_quarter_second(unsigned char index);
#endif /* INC_INPUT_READING_H_ */
