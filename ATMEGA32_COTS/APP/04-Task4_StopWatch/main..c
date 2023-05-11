/*
 *
 *
 * Created: 18/01/2023 12:43:02
 * Author : 3essawy
 */ 


#include"LIB/Std_Types.h"
#include"LIB/Macros.h"
#include"01-DIO1/02-Include/DIO1_Interface.h"
#include"00-SSegment/02-Include/SSegment_Interface.h"
#include"SWITCH/02-Include/SWITCH_Interface.h"
#include"SWITCH/02-Include/SWITCH_Config.h"
#include"Delay/Delay_Interface.h"



#define Play     1
#define Pause    0
#define No_Reset 0
#define Reset    1


int main(void)
{
	SSegment_voidSegmentLEDInit();
	SWITCHs_enuInit();
	u8 Button1_State=SWITCH_enuPressed;
	u8 Button2_State=SWITCH_enuNotPressed;
	u8 Local_s8Counter=0;	
	u8 Flag=No_Reset;
	u8 Button1Counter=Pause;
	SSegment_enuSSegmentLEDOn(Local_s8Counter);
    while (1) 
    {
		//Counter down from 99 to 0
		
		SWITCH_enuGetSwitchState(SWITCH0_PIN,&Button1_State);
		SWITCH_enuGetSwitchState(SWITCH1_PIN,&Button2_State);
		
		
		
		if(Button1_State==SWITCH_enuPressed)
		{
			while(Button1_State==SWITCH_enuPressed)
			{
				SWITCH_enuGetSwitchState(SWITCH0_PIN,&Button1_State);
			}
			
			Button1Counter++;
			if(Button1Counter==2)
			{
				
			Button1Counter=Pause;
			
			}
			
			if(Flag==Reset)
			{
				
				Flag=No_Reset;
			}
		}
		
		
		if(Button2_State==SWITCH_enuPressed)
		{
			while(Button2_State==SWITCH_enuPressed)
			{
				SWITCH_enuGetSwitchState(SWITCH1_PIN,&Button2_State);
			}
			Local_s8Counter=0;
			Flag=Reset;
			Button1Counter=Pause;
			SSegment_enuSSegmentLEDOn(Local_s8Counter);
		}
		
		
		
		if((Button1Counter==Play))
		{
			SSegment_enuSSegmentLEDOn(Local_s8Counter);
			Local_s8Counter++;
			Delay(30);
			if(Local_s8Counter>99)
			{
				Button1Counter=Pause;
				
			}
		}
		else
		{
			
		
		}
		
   }
	
	return 0;
}

