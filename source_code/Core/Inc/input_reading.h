/*
 * input_reading.h
 *
 *  Created on: Nov 22, 2023
 *      Author: todiu_cp4n01g
 */

#ifndef INC_INPUT_READING_H_
#define INC_INPUT_READING_H_

void button_reading(void);
unsigned char is_button_pressed(unsigned char index);
unsigned char is_button_pressed_1s(unsigned char index);
unsigned char is_button_pressed_haft_a_second(unsigned char index);
unsigned char is_button_pressed_one_quarter_second(unsigned char index);
#endif /* INC_INPUT_READING_H_ */
