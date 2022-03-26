/*
 * hw.h
 *
 *  Created on: Mar 26, 2022
 *      Author: sungjinkim
 */

#ifndef SRC_HW_HW_H_
#define SRC_HW_HW_H_


#ifdef __cplusplus
extern "C" {
#endif


#include "hw_def.h"
#include "dma.h"
#include "flash.h"
#include "ssd1306.h"
#include "ssd1306_tests.h"
#include "gpio.h"
#include "i2c.h"
#include "spi.h"
#include "tim.h"
#include "usart.h"


void hwInit(void);


#ifdef __cplusplus
}
#endif


#endif /* SRC_HW_HW_H_ */
