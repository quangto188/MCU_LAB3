/*
 * output_display.c
 *
 *  Created on: Nov 22, 2023
 *      Author: todiu_cp4n01g
 */


#include "main.h"
#include "output_display.h"

extern UART_HandleTypeDef huart2;

int _write(int file, char *ptr, int len)
{
	/* Implement your write code here, this is used by puts and printf for example */
	HAL_UART_Transmit(&huart2, (uint8_t*)ptr, len, HAL_MAX_DELAY);
	return len;
}
