/*
 * bsp.h
 *
 *  Created on: Mar 26, 2022
 *      Author: sungjinkim
 */

#ifndef SRC_BSP_BSP_H_
#define SRC_BSP_BSP_H_


#ifdef __cplusplus
extern "C" {
#endif


#include "stm32f1xx_hal.h"
#include "def.h"


void bspInit(void);

void SystemClock_Config(void);
void Error_Handler(void);
void delay(uint32_t ms);
uint32_t millis(void);


#ifdef __cplusplus
}
#endif


#endif /* SRC_BSP_BSP_H_ */
