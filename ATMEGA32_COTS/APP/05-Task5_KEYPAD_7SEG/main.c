#include<util/delay.h>
#include"Std_Types.h"
#include"Macros.h"
#include"KEYPAD_Interface.h"
#include"DIO1_Interface.h"
#include"SSegment_Interface.h"
#include"SSegment_Config.h"
#include"KEYPAD_Config.h"
#include"KEYPAD_Private.h"



int main(void)
{
    /* Replace with your application code */
	SSegment_voidSegmentLEDInit();
	u8 Value=0;
	KPD_voidInit();
	
    while (1) 
    {
		KPD_u8GetPressedKey(&Value);
		//_delay_ms(200);
			
		SSegment_enuSSegmentLEDOn(Value);
		_delay_ms(50);
		//Value++;
		
    }
}

