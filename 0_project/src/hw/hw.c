/*
 * hw.c
 *
 *  Created on: Mar 26, 2022
 *      Author: sungjinkim
 */


#include "hw_def.h"
#include "gpio.h"
#include "dma.h"
#include "i2c.h"
#include "spi.h"
#include "usart.h"
#include "tim.h"


void hwInit(void)
{
    bspInit();

    MX_GPIO_Init();
    MX_DMA_Init();
    MX_I2C1_Init();
    MX_SPI1_Init();
    MX_USART1_UART_Init();
    MX_TIM1_Init();
}
