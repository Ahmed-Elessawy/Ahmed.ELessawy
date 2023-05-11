//Author : Ahmed Elessawy  


#include"../../MCAL/01-DIO1/02-Include/DIO_Interface.h"
#include"LED_Interface.h"

extern const LED_tstr_LEDS LED_tarr_LEDS[NumberOfLeds];

LED_tenuErroStatus Leds_enuInit(void)
{
    u8 Local_tu8_LedOnIterator=0;
    for(Local_tu8_LedOnIterator=0;Local_tu8_LedOnIterator<NumberOfLeds;Local_tu8_LedOnIterator++)
    {
      DIO_enuSetPinDirectionOutput(LED_tarr_LEDS[Local_tu8_LedOnIterator].LED_tu8LedPin);
    }

};


LED_tenuErroStatus LED_enuLEDOn(DIO_tenuLeds Copy_u8LedNumber)

{
  LED_tenuErroStatus Local_tenuState=OK;
  if(Copy_u8LedNumber < PORTD_PIN7 || Copy_u8LedNumber > PORTA_PIN0)
  {
    if (LED_tarr_LEDS[Copy_u8LedNumber].LED_tu8LedState==ActiveHigh)
    {
      DIO_tenuErrorStatus DIO_enuSetPin(Copy_u8LedNumber);
    }
    else
    {
      DIO_tenuErrorStatus DIO_enuClearPin(Copy_u8LedNumber);
    }  
  }
  
  else
  { 
    State=NOK;
  }  
  
  
  return State;
}





LED_tenuErroStatus LED_enuLEDOff(DIO_tenuPins Copy_u8PinNumber)

{
  
  LED_tenuErroStatus Local_tenuState=OK;
  if(Copy_u8LedNumber < DIO_enuLed31 || Copy_u8LedNumber > PORTA_PIN0)
  {
    if (LED_tarr_LEDS[Copy_u8LedNumber].LED_tu8LedState==ActiveHigh)
    {
      DIO_tenuErrorStatus DIO_enuClearPin(Copy_u8LedNumber);
    }
    else
    {
      DIO_tenuErrorStatus DIO_enuSetPin(Copy_u8LedNumber);
    }  
  }
  
  else
  { 
    State=NOK;
  }  
  
  
  return State;
  
  
  
}


LED_tenuErroStatus Leds_enuOn(void)
{
  u8 Local_tu8_LedOnIterator=0;
  
  for(Local_tu8_LedOnIterator=0;Local_tu8_LedOnIterator<NumberOfLeds;Local_tu8_LedOnIterator++)
  {
    if (LED_tarr_LEDS[Copy_u8LedNumber].LED_tu8LedState==ActiveHigh)
    {
      DIO_enuSetPin(LED_tarr_LEDS[Local_tu8_LedOffIterator]);
    }
    
    else
    {
      DIO_enuClearPin(LED_tarr_LEDS[Local_tu8_LedOffIterator]);
    }
  }
  
}


LED_tenuErroStatus Leds_enuOff(void)
{
  u8 Local_tu8_LedOffIterator=0;
  
  for(Local_tu8_LedOffIterator=0;Local_tu8_LedOffIterator<NumberOfLeds;Local_tu8_LedOffIterator++)
  {
    if (LED_tarr_LEDS[Copy_u8LedNumber].LED_tu8LedState==ActiveHigh)
    {
      DIO_enuClearPin(LED_tarr_LEDS[Local_tu8_LedOffIterator]);
    }
    
    else
    {
      DIO_enuSetPin(LED_tarr_LEDS[Local_tu8_LedOffIterator]);
    }
    
  }
  
  
}