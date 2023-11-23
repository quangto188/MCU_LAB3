/*
 * timer.c
 *
 *  Created on: Nov 22, 2023
 *      Author: todiu_cp4n01g
 */


#ifndef SRC_TIMER_C_
#define SRC_TIMER_C_

#include "main.h"
#include "input_processing.h"
#include "input_reading.h"
#include "software_timer.h"
#include "button.h"
void HAL_TIM_PeriodElapsedCallback (TIM_HandleTypeDef *htim ) {
	if (htim->Instance == TIM2) {
		button_reading();
		timerRun();
		getKeyInput();
	}
}

#endif /* SRC_TIMER_C_ */
