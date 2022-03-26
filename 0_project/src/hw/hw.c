/*
 * hw.c
 *
 *  Created on: Mar 26, 2022
 *      Author: sungjinkim
 */


#include "hw.h"


void hwInit(void)
{
    bspInit();

    MX_GPIO_Init();
    MX_DMA_Init();
    MX_I2C1_Init();
    MX_SPI1_Init();
    MX_USART1_UART_Init();
    MX_TIM1_Init();

    ssd1306_Init();
}
