/*
 * TestDIO.c
 *
 * Created: 17/01/2023 13:25:59
 * Author : 3essawy
 */ 


#include"../../LIB/Std_Types.h"
#include"../../MCAL/00-DIO1/02-Include/DIO1_Interface.h"
#include"../../HAL/00-LED/02-Include/LED_Interface.h"
#include"../../HAL/01-SWITCH/02-Include/SWITCH_Interface.h"
#include"APP_Interface.h"
#include"util/delay.h"



extern s8 Global_u8_LedIndex=0;

int main(void)
{

	if(DIO_enuInit()==0)
	{
    /* Replace with your application code */
	
    while (1) 
    {
		APP_IncrementDecrement();
    }
	
	}
	else
	{
		
	}
	
	//return 0;
}

