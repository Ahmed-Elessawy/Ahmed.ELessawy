//Author : Ahmed Elessawy  

#include"../../../LIB/Std_Types.h"
#include"../../../LIB/Macros.h"

#include"../../../MCAL/DIO1/Include/DIO1_Interface.h"



LED_tenuErroStatus LED_enuLEDOn(DIO_tenuLeds Copy_u8LedNumber)

{
  
  if(Copy_u8LedNumber > DIO_enuLED7 || Copy_u8LedNumber<DIO_enuLED0)
  {
    return NOK;
  }
  
  else
    
  {
      
     DIO_enuSetPin(Copy_u8LedNumber);
    return OK;  
      
  }  
  
  
  
}





LED_tenuErroStatus LED_enuLEDOff(DIO_tenuLeds Copy_u8LedNumber)

{
  
  if(Copy_u8LedNumber > DIO_enuLED7 || Copy_u8LedNumber < DIO_enuLED0)
  {
    return NOK;
  }
  
  else
    
  {
      
     DIO_enuClearPin(Copy_u8LedNumber);
    return OK;  
      
  }  
  
  
  
}
