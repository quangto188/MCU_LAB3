/*
 * global.c
 *
 *  Created on: Nov 22, 2023
 *      Author: todiu_cp4n01g
 */

#include "global.h"
#include "main.h"

// default light time for 3 states
int man_red_time = 5;
int man_amber_time = 2;
int man_green_time = 3;

int temp_value = 0;
int light_time = GREEN_TIME / 100;
int light_time1 = RED_TIME / 100;
int status = NORMAL_MODE;
int led_status1 = INIT_TRAFFIC_LIGHT;
int led_status2 = INIT_TRAFFIC_LIGHT;
int index_led = 0;
int AllowToExecuteAfterASecondPressed = 0;

int flagForButtonPressOneQuarterSecond[4] = {0};
