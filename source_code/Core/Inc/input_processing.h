/*
 * input_processing.h
 *
 *  Created on: Nov 22, 2023
 *      Author: todiu_cp4n01g
 */
#ifndef INC_INPUT_PROCESSING_H_
#define INC_INPUT_PROCESSING_H_

void button_processing(void);
void fsm_for_input_processing(void);
void fsm_mode_running(void);
void fsm_mode_running_for_pressed_1s(void);
void normal_running_traffic_light(void);
int WhichButtonIsPressed();
#endif /* INC_INPUT_PROCESSING_H_ */
