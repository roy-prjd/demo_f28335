/*
 * user_led.h
 *
 *	驱动普通IO输出
 *
 *  Created on: 2022-6-12
 *      Author: tly
 */

#ifndef USER_LED_H_
#define USER_LED_H_


#include "DSP2833x_Device.h"     // DSP2833x 头文件
#include "DSP2833x_Examples.h"   // DSP2833x 例子相关头文件


#define LED1_OFF		(GpioDataRegs.GPCSET.bit.GPIO68=1)		//置1
#define LED1_ON			(GpioDataRegs.GPCCLEAR.bit.GPIO68=1)	//清0
#define LED1_TOGGLE		(GpioDataRegs.GPCTOGGLE.bit.GPIO68=1)	//反转


void LED_Init(void);



#endif /* USER_LED_H_ */
