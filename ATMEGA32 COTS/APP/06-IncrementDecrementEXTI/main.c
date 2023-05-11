/*
 * EXIT_TEST.c
 *
 * Created: 30/01/2023 12:29:37
 * Author : 3essawy
 */ 

#include"Std_Types.h"
#include"Macros.h"
#include"DIO1_Interface.h"
#include"GLOBAL_INTERR_Interface.h"
#include"INTERRUPT_Private.h"
#include"INTERRUPT_Interface.h"
#include"INTERRUPT_Config.h"

u8 Counter=0;
void Increment(void);
void Decrement(void);


int main(void)
{
    /* Replace with your application code */
	//DIO_enuInit();
	SSegment_voidSegmentLEDInit();
	GlobalINT_enuEnable();
	Interrupt_enuEnable(EXTI_0,FALLING_EDGE);
	Interrupt_enuEnable(EXTI_1,FALLING_EDGE);
	SSegment_enuSSegmentLEDOn(Counter);
    while (1) 
    {
		Interrupt_enuSetCallBack(EXTI_0,Increment);
		Interrupt_enuSetCallBack(EXTI_1,Decrement);
    }
}

void Increment(void)
{
	
	if(Counter<99)
	{
		Counter++;
	}
	SSegment_enuSSegmentLEDOn(Counter);
	
}

void Decrement(void)
{
	if(Counter>0)
	{	
	Counter--;
	}

	SSegment_enuSSegmentLEDOn(Counter);
}