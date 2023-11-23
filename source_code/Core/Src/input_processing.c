/*
 * input_processing.c
 *
 *  Created on: Nov 22, 2023
 *      Author: todiu_cp4n01g
 */


#include "input_reading.h"
#include "input_processing.h"
#include "global.h"
#include "software_timer.h"
#include "led7seg.h"
enum ButtonState{
	BUTTON_RELEASED,
	BUTTON_PRESSED,
	BUTTON_PRESS_MORE_THAN_1S
};

enum ButtonState buttonState = BUTTON_RELEASED;


int WhichButtonIsPressed() {
	if (is_button_pressed(0)) return button_mode_is_pressed;
	if (is_button_pressed(1)) return button_add_is_pressed;
	if (is_button_pressed(2)) return button_confirm_is_pressed;
	if (is_button_pressed(3)) return button_reset_is_pressed;

	return 0; // none of these button is pressed
}

void fsm_for_input_processing() {
	switch(buttonState) {
		case BUTTON_RELEASED:
			if (WhichButtonIsPressed()) {
				buttonState = BUTTON_PRESSED;
				switch(WhichButtonIsPressed()) {
					case button_mode_is_pressed:
						if (status >= 3) status = -1;
						display7SEG(++status);
						buttonState = BUTTON_PRESSED;
						break;
					case button_add_is_pressed:
						break;
					case button_confirm_is_pressed:
						break;
					case button_reset_is_pressed:
						break;
					default: buttonState = BUTTON_RELEASED;
				}
			}
			break;
		case BUTTON_PRESSED:
			if (!is_button_pressed(0)) {
				buttonState = BUTTON_RELEASED;
			} else {
				if (is_button_pressed_1s(0)) {
					buttonState = BUTTON_PRESS_MORE_THAN_1S;
				}
			}
			break;
		case BUTTON_PRESS_MORE_THAN_1S:
			//firstLongPressButton = 0;
			if (!is_button_pressed(0)) {
				buttonState = BUTTON_RELEASED;
			}
			// TODO
			break;
		default:
			break;
	}
}
