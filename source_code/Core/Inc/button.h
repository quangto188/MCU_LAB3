/*
 * button.h
 *
 *  Created on: Nov 22, 2023
 *      Author: todiu_cp4n01g
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_


#include <main.h>

#define NORMAL_STATE SET
#define PRESSED_STATE RESET
extern int status_LED;
extern int button1_flag;

void getKeyInput();

#endif /* INC_BUTTON_H_ */
