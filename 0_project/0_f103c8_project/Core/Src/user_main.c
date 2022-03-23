/*
 * user_main.c
 *
 *  Created on: 2022. 3. 23.
 *      Author: sungjinkim
 */


#include "ap.h"


int main(void)
{
	hwInit();
	apInit();

	apMain();
}
