/*
 * user_led.h
 *
 *	������ͨIO���
 *
 *  Created on: 2022-6-12
 *      Author: tly
 */

#ifndef USER_LED_H_
#define USER_LED_H_


#include "DSP2833x_Device.h"     // DSP2833x ͷ�ļ�
#include "DSP2833x_Examples.h"   // DSP2833x �������ͷ�ļ�


#define LED1_OFF		(GpioDataRegs.GPCSET.bit.GPIO68=1)		//��1
#define LED1_ON			(GpioDataRegs.GPCCLEAR.bit.GPIO68=1)	//��0
#define LED1_TOGGLE		(GpioDataRegs.GPCTOGGLE.bit.GPIO68=1)	//��ת


void LED_Init(void);



#endif /* USER_LED_H_ */
