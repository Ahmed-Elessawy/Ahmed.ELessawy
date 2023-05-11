
#include"../../LIB/Std_Types.h"
#include"../../HAL/01-SWITCH/02-Include/SWITCH_Interface.h"
#include"../../HAL/00-LED/02-Include/LED_Interface.h"
#include"APP_Interface.h"
#include"util/delay.h"



s8 Global_u8_LedIndex=0;


void APP_IncrementDecrement(void)
{
  u8 Local_u8_Button1State;
  u8 Local_u8_Button2State;
  
  Switch_enuGetButtonState(HAL_enuSwitch0 ,&Local_u8_Button1State);
  _delay_ms(50);	
  if(Local_u8_Button1State==HAL_enuSwitchPressed)
  {
    LED_enuLEDOn(Global_u8_LedIndex);
    Global_u8_LedIndex++;
	 _delay_ms(100);
	//Local_u8_Button1State=HAL_enuSwitchNotPressed;
  }
  
  Switch_enuGetButtonState(HAL_enuSwitch1 ,&Local_u8_Button2State);
  _delay_ms(50);
  
  if(Local_u8_Button2State==HAL_enuSwitchPressed)
  {
    Global_u8_LedIndex--;
	LED_enuLEDOff(Global_u8_LedIndex);
	 _delay_ms(100);
  }
  
  if(Global_u8_LedIndex>7)
  {
	  
	  Global_u8_LedIndex=8;
  }
  
  else if(Global_u8_LedIndex<0)
  {
	  Global_u8_LedIndex=0;
  }
  
}



