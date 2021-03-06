/*
 * main.c
 *
 *  Created on: 2022-6-12
 *      Author: tly
 */
#include "DSP2833x_Device.h"
#include "DSP2833x_Examples.h"


#include "user_led.h"


/*****************************************************************************
Function Name        :: void delay(void)
Function Description :: 延时函数，通过循环占用CPU，达到延时功能
Bank Ports           :: No
Input Parameters     :: No
Return Value         :: No
Condition            :: No
Tips                 ::
Function called	-

Last Chang Date      : 2022/06/15
*****************************************************************************/
void delay(void)
{
    Uint16 		i;
	Uint32      j;
	for(i=0;i<32;i++)
		for (j = 0; j < 100000; j++);
}


/*****************************************************************************
Function Name        :: void main(void)
Function Description :: 主函数
Bank Ports           :: default
Input Parameters     :: No
Return Value         :: No
Condition            :: No
Tips                 :: 裸机程序驱动
Function called	-

Last Chang Date      : 2022/06/15
*****************************************************************************/
void main()
{

	InitSysCtrl();	//完成系统时钟配置以及使能各外设时钟（含GPIO时钟）

	LED_Init();	//初始化

	while(1)
	{//顺序执行以下操作

	#if 0	//启用反转
		LED1_TOGGLE;
	#else	//启用置数
		LED1_ON;
		//delay(1000);
		DELAY_US(100);
		LED1_OFF;
	#endif
		//delay(1000);	//不准确延时
		DELAY_US(100);	//使用该延时函数，在此处CPU-150M

	}
}


