/*
 * led7seg.h
 *
 *  Created on: Nov 22, 2023
 *      Author: todiu_cp4n01g
 */

#ifndef INC_LED7SEG_H_
#define INC_LED7SEG_H_

#define ON_7SEG			SET
#define OFF_7SEG		RESET
#define NUMBERS_LED7	4
#include "main.h"

//uint8_t led_bu3ffer[4] = {0, 1, 2, 3};
void update_buffer(void);
void led7SEG_init(void);
void led_init(void);
void display7SEG(int number);
void update7SEG(int index);

void displayMode();
void displayREDTIME();
//void update7SEG(int index, int number);

#endif /* INC_LED7SEG_H_ */
