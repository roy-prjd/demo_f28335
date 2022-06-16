/*
 * user_led.c
 *
 *	驱动普通IO输出
 *
 *  Created on: 2022-6-12
 *      Author: tly
 */

#include "user_led.h"


/*****************************************************************************
Function Name        :: void LED_Init(void)
Function Description :: 端口初始化
Bank Ports           :: GPIOC.68
Input Parameters     :: No
Return Value         :: No
Condition            :: No
Tips                 ::
Function called	-

Last Chang Date      : 2022/06/15
*****************************************************************************/
void LED_Init(void)
{
	EALLOW;
	SysCtrlRegs.PCLKCR3.bit.GPIOINENCLK = 1;// 开启GPIO时钟

	//LED1端口配置, GPIOC.68
	GpioCtrlRegs.GPCMUX1.bit.GPIO68=0;//设置为通用GPIO功能
	GpioCtrlRegs.GPCDIR.bit.GPIO68=1;//设置GPIO方向为输出
	GpioCtrlRegs.GPCPUD.bit.GPIO68=0;//使能GPIO上拉电阻

	//端口赋初始值，即寄存器赋值
	GpioDataRegs.GPCSET.bit.GPIO68=1;//置1	//	GpioDataRegs.GPCCLEAR.bit.GPIO68=1;//清0

	EDIS;
}


