/*
 * def.h
 *
 *  Created on: Mar 26, 2022
 *      Author: sungjinkim
 */

#ifndef SRC_COMMON_DEF_H_
#define SRC_COMMON_DEF_H_


#ifdef __cplusplus
extern "C" {
#endif


#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "stdint.h"


#define USER_SSD1306_RESET_Pin GPIO_PIN_6
#define USER_SSD1306_RESET_GPIO_Port GPIOA
#define USER_SSD1306_CS_Pin GPIO_PIN_0
#define USER_SSD1306_CS_GPIO_Port GPIOB
#define USER_SSD1306_DC_Pin GPIO_PIN_1
#define USER_SSD1306_DC_GPIO_Port GPIOB
#define USER_SWITCH_INPUT_Pin GPIO_PIN_10
#define USER_SWITCH_INPUT_GPIO_Port GPIOB


#ifdef __cplusplus
}
#endif


#endif /* SRC_COMMON_DEF_H_ */
