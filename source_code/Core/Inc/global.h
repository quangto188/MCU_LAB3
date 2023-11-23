/*
 * global.h
 *
 *  Created on: Nov 22, 2023
 *      Author: todiu_cp4n01g
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#define RED_TIME			500
#define GREEN_TIME			300
#define	YELLOW_TIME			200

#define button_mode_is_pressed		2
#define button_add_is_pressed		3
#define button_confirm_is_pressed	4
#define button_reset_is_pressed		5

extern int red_time;
extern int green_time;
extern int yellow_time;

extern int PORTA;
extern int status;

#endif /* INC_GLOBAL_H_ */
