/*
 *
 *
 * Created: 18/01/2023 12:43:02
 * Author : 3essawy
 */ 


#include"../..LIB/Std_Types.h"
#include"../..LIB/Macros.h"
#include"../MCAL/01-DIO1/02-Include/DIO1_Interface.h"
#include"../HAL/02-SSegment/02-Include/SSegment_Interface.h"
#include"../../Service/00-Delay/Delay_Interface.h"


int main(void)
{
	SSegment_voidSegmentLEDInit();
	s8 Local_s8Counter=99;	

    while (1) 
    {
		//Counter down from 99 to 0
		for(Local_s8Counter=99;Local_s8Counter>=0;Local_s8Counter--)
		
		{
			SSegment_enuSSegmentLEDOn(Local_s8Counter);
			Delay(1000);
			
		}
   }
	
	return 0;
}

