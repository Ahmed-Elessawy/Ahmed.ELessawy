

#include"../../LIB/Std_Types.h"

#include"../../HAL/00-LED/02-Include/LED_Interface.h"
#include"APP_Interface.h"
#include"util/delay.h"





void APP_TrainPulse(void)

{
  s8 Local_s8_IteratorOfLeds=0;
  
  for(Local_s8_IteratorOfLeds=0;Local_s8_IteratorOfLeds<NumberOfLeds;Local_s8_IteratorOfLeds++)
  {
    
    LED_tenuErroStatus LED_enuLEDOn(Local_s8_IteratorOfLeds);
    _delay_ms(500);
  }
  
  for(Local_s8_IteratorOfLeds=0;Local_s8_IteratorOfLeds<NumberOfLeds;Local_s8_IteratorOfLeds++)
  {
    
    LED_tenuErroStatus LED_enuLEDOff(Local_s8_IteratorOfLeds);
  }

  for(Local_s8_IteratorOfLeds=NumberOfLeds-1;Local_s8_IteratorOfLeds>=0;Local_s8_IteratorOfLeds--)
  {
    
    LED_tenuErroStatus LED_enuLEDOn(Local_s8_IteratorOfLeds);
    _delay_ms(500);
  }

  for(Local_s8_IteratorOfLeds=NumberOfLeds-1;Local_s8_IteratorOfLeds>=0;Local_s8_IteratorOfLeds--)
  {
    
    LED_tenuErroStatus LED_enuLEDOff(Local_s8_IteratorOfLeds);
  }

}



