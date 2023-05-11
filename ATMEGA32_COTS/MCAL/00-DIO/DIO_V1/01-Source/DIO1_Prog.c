//Author : Ahmed Elessawy  
//Date : 17/01/2023



#include"../../../LIB/Std_Types.h"
#include"../../../LIB/Macros.h"


#include"../02-Include/DIO1_Interface.h"
#include"../02-Include/DIO1_Private.h"
#include"../02-Include/DIO1_Config.h"

/*******************4**************************/
/*DIO Init Funtion
  Input : void
  Output : DIO_tenuErrorStatus to report error */
/***********************************************/  

DIO_tenuErrorStatus DIO_enuInit(void)
{
  u8 u8Copy_u8Iterator=0;
  u8 u8Copy_u8PortId=0;
  u8 u8Copy_u8PinId=0;
  
  for (u8Copy_u8Iterator=0;u8Copy_u8Iterator<DIO_enuNumberOfPins;u8Copy_u8Iterator++)
  {
    u8Copy_u8PortId=u8Copy_u8Iterator/8;
    u8Copy_u8PinId =u8Copy_u8Iterator%8;
    
    
    switch(u8Copy_u8PortId)
    {
      case DIO_u8_PORTA:
      if (DIO_strPinConfig[u8Copy_u8Iterator].DIO_PinDirection == DIO_DIR_OUTPUT)
      {
        SET_BIT(DIOA->DDR,u8Copy_u8PinId);
      }
      
      else
      {
        CLR_BIT(DIOA->DDR,u8Copy_u8PinId);
        if(DIO_strPinConfig[u8Copy_u8Iterator].DIO_InputStatus == DIO_INPUT_PULL_UP)
        {
          SET_BIT(DIOA->PORT,u8Copy_u8PinId);
        }
        else
        {
          CLR_BIT(DIOA->PORT,u8Copy_u8PinId);
        }
      }
        
      break;
        
      case DIO_u8_PORTB:
      if (DIO_strPinConfig[u8Copy_u8Iterator].DIO_PinDirection == DIO_DIR_OUTPUT)
      {
        SET_BIT(DIOB->DDR,u8Copy_u8PinId);
      }
      
      else
      {
        CLR_BIT(DIOB->DDR,u8Copy_u8PinId);
        if(DIO_strPinConfig[u8Copy_u8Iterator].DIO_InputStatus == DIO_INPUT_PULL_UP)
        {
          SET_BIT(DIOB->PORT,u8Copy_u8PinId);
        }
        else
        {
          CLR_BIT(DIOB->PORT,u8Copy_u8PinId);
        }
      }
        
      break;

      
      case DIO_u8_PORTC:
      if (DIO_strPinConfig[u8Copy_u8Iterator].DIO_PinDirection == DIO_DIR_OUTPUT)
      {
        SET_BIT(DIOC->DDR,u8Copy_u8PinId);
      }
      
      else
      {
        CLR_BIT(DIOC->DDR,u8Copy_u8PinId);
        if(DIO_strPinConfig[u8Copy_u8Iterator].DIO_InputStatus == DIO_INPUT_PULL_UP)
        {
          SET_BIT(DIOC->PORT,u8Copy_u8PinId);
        }
        else
        {
          CLR_BIT(DIOC->PORT,u8Copy_u8PinId);
        }
      }
        
      break;
      
      
      case DIO_u8_PORTD:
      if (DIO_strPinConfig[u8Copy_u8Iterator].DIO_PinDirection == DIO_DIR_OUTPUT)
      {
        SET_BIT(DIOD->DDR,u8Copy_u8PinId);
      }
      
      else
      {
        CLR_BIT(DIOD->DDR,u8Copy_u8PinId);
        if(DIO_strPinConfig[u8Copy_u8Iterator].DIO_InputStatus == DIO_INPUT_PULL_UP)
        {
          SET_BIT(DIOD->PORT,u8Copy_u8PinId);
        }
        else
        {
          CLR_BIT(DIOD->PORT,u8Copy_u8PinId);
        }
      }
        
      break; 
      }
      
      
      
  }
  return DIO_enuOk;
}    
      
  
  
  

/***********************************************/
/*DIO Set Pin Function
  Input : Pin Number (0 -> 31)
  Output : DIO_tenuErrorStatus to report error */
/***********************************************/

DIO_tenuErrorStatus DIO_enuSetPin(DIO_tenuPins Copy_u8PinNumber)
{
  
  if (Copy_u8PinNumber>(DIO_enuPin31) || Copy_u8PinNumber<DIO_enuPin0)
  {
    return DIO_enuNotOk;
  }
  
  else
  {
    

  u8 u8Copy_u8PortId=Copy_u8PinNumber/8;
  u8 u8Copy_u8PinId=Copy_u8PinNumber%8;
  
  
  switch(u8Copy_u8PortId)
    {
      case DIO_u8_PORTA: SET_BIT(DIOA->PORT,u8Copy_u8PinId);
      break;
      
      case DIO_u8_PORTB: SET_BIT(DIOB->PORT,u8Copy_u8PinId);
      break;
      
      case DIO_u8_PORTC: SET_BIT(DIOC->PORT,u8Copy_u8PinId);
      break;
      
      case DIO_u8_PORTD: SET_BIT(DIOD->PORT,u8Copy_u8PinId);
      break;
    }
    return DIO_enuOk;
  }
    
}
  
  


/***********************************************/
/*DIO Clear Pin Function
  Input : Pin Number (0 -> 31)
  Output : DIO_tenuErrorStatus to report error */
/***********************************************/

DIO_tenuErrorStatus DIO_enuClearPin(DIO_tenuPins Copy_u8PinNumber)
 
{
  if (Copy_u8PinNumber>DIO_enuPin31 || Copy_u8PinNumber<DIO_enuPin0)
  {
    return DIO_enuNotOk;
  }
  
  else
  {
    

  u8 u8Copy_u8PortId=Copy_u8PinNumber/8;
  u8 u8Copy_u8PinId=Copy_u8PinNumber%8;
  
  
  switch(u8Copy_u8PortId)
    {
      case DIO_u8_PORTA: CLR_BIT(DIOA->PORT,u8Copy_u8PinId);
      break;
      
      case DIO_u8_PORTB: CLR_BIT(DIOB->PORT,u8Copy_u8PinId);
      break;
      
      case DIO_u8_PORTC: CLR_BIT(DIOC->PORT,u8Copy_u8PinId);
      break;
      
      case DIO_u8_PORTD: CLR_BIT(DIOD->PORT,u8Copy_u8PinId);
      break;
    }
    return DIO_enuOk;
  }
  
}
  
  


/*DIO Get Pin Function
  Input : Pin Number (0 -> 31)
  Output : DIO_tenuErrorStatus to report error */
/***********************************************/

DIO_tenuErrorStatus DIO_enuGetPin(DIO_tenuPins Copy_u8PinNumber ,u8* Add_pu8PinValue)
{
  
  if (Copy_u8PinNumber>DIO_enuPin31 || Copy_u8PinNumber<DIO_enuPin0)
  {
    return DIO_enuNotOk;
  }
  
  else
  {
    

  u8 u8Copy_u8PortId=Copy_u8PinNumber/8;
  u8 u8Copy_u8PinId=Copy_u8PinNumber%8;
  
  
  switch(u8Copy_u8PortId)
    {
      case DIO_u8_PORTA: * Add_pu8PinValue = GET_BIT(DIOA->PIN,u8Copy_u8PinId);
      break;
      
      case DIO_u8_PORTB: * Add_pu8PinValue = GET_BIT(DIOB->PIN,u8Copy_u8PinId);
      break;
      
      case DIO_u8_PORTC: * Add_pu8PinValue = GET_BIT(DIOC->PIN,u8Copy_u8PinId);
      break;
      
      case DIO_u8_PORTD: * Add_pu8PinValue = GET_BIT(DIOD->PIN,u8Copy_u8PinId);
      break;
    }
    return DIO_enuOk;
  }
  
}




/***********************************************/
/*DIO Set Pin Function
  Input : Pin Number (0 -> 31)
  Output : DIO_tenuErrorStatus to report error */
/***********************************************/

DIO_tenuErrorStatus DIO_enuSetRangeOfPins(DIO_tenuPins Copy_u8PinNumberStart,DIO_tenuPins Copy_u8PinNumberEnd)


{
  
  if(Copy_u8PinNumberStart<DIO_enuPin0 || Copy_u8PinNumberEnd > DIO_enuPin31)
  {
    return DIO_enuNotOk;
  
  }
  else
  {
  for (Copy_u8PinNumberStart=0;Copy_u8PinNumberStart<=Copy_u8PinNumberEnd;Copy_u8PinNumberStart++)
  {
    DIO_tenuErrorStatus DIO_enuSetPin(DIO_tenuPins Copy_u8PinNumberStart);
    
  }
  
  return DIO_enuOk;
  
  }
  
}
 
 
 

/*DIO ClearRangeOfPins Function
  Input : Pin NumberStart  (0 -> 31),Pin NumberEnd
  Output : DIO_tenuErrorStatus to report error */
/***********************************************/

DIO_tenuErrorStatus DIO_enuClearRangeOfPins(DIO_tenuPins Copy_u8PinNumberStart,DIO_tenuPins Copy_u8PinNumberEnd)

{
  
  if(Copy_u8PinNumberStart<DIO_enuPin0 || Copy_u8PinNumberEnd > DIO_enuPin31)
  {
    return DIO_enuNotOk;
  
  }
  else
  {
  for (Copy_u8PinNumberStart=0;Copy_u8PinNumberStart<=Copy_u8PinNumberEnd;Copy_u8PinNumberStart++)
  {
    DIO_tenuErrorStatus DIO_enuClearPin(DIO_tenuPins Copy_u8PinNumberStart);
    
  }
  
  return DIO_enuOk;
  
  }
  
} 



/***********************************************/
/*DIO Set Pin Direction Output Function
  Input : Pin Number (0 -> 31)
  Output : DIO_tenuErrorStatus to report error */
/***********************************************/

DIO_tenuErrorStatus DIO_enuSetPinDirectionOutput(DIO_tenuPins Copy_u8PinNumber)


{
  
  if (Copy_u8PinNumber>DIO_enuPin31 || Copy_u8PinNumber<DIO_enuPin0)
  {
    return DIO_enuNotOk;
  }
  
  else
  {
    

  u8 u8Copy_u8PortId=Copy_u8PinNumber/8;
  u8 u8Copy_u8PinId=Copy_u8PinNumber%8;
  
  
  switch(u8Copy_u8PortId)
    {
      case DIO_u8_PORTA: SET_BIT(DIOA->DDR,u8Copy_u8PinId);
      break;
      
      case DIO_u8_PORTB: SET_BIT(DIOB->DDR,u8Copy_u8PinId);
      break;
      
      case DIO_u8_PORTC: SET_BIT(DIOC->DDR,u8Copy_u8PinId);
      break;
      
      case DIO_u8_PORTD: SET_BIT(DIOD->DDR,u8Copy_u8PinId);
      break;
    }
    return DIO_enuOk;
  }
    
}




/***********************************************/
/*DIO Set Pin Direction Input Function
  Input : Pin Number (0 -> 31)
  Output : DIO_tenuErrorStatus to report error */
/***********************************************/

DIO_tenuErrorStatus DIO_enuSetPinDirectionInput(DIO_tenuPins Copy_u8PinNumber)


{
  
  if (Copy_u8PinNumber>DIO_enuPin31 || Copy_u8PinNumber<DIO_enuPin0)
  {
    return DIO_enuNotOk;
  }
  
  else
  {
    

  u8 u8Copy_u8PortId=Copy_u8PinNumber/8;
  u8 u8Copy_u8PinId=Copy_u8PinNumber%8;
  
  
  switch(u8Copy_u8PortId)
    {
      case DIO_u8_PORTA: CLR_BIT(DIOA->DDR,u8Copy_u8PinId);
      break;
      
      case DIO_u8_PORTB: CLR_BIT(DIOB->DDR,u8Copy_u8PinId);
      break;
      
      case DIO_u8_PORTC: CLR_BIT(DIOC->DDR,u8Copy_u8PinId);
      break;
      
      case DIO_u8_PORTD: CLR_BIT(DIOD->DDR,u8Copy_u8PinId);
      break;
    }
    return DIO_enuOk;
  }
    
}







/***********************************************/
/*DIO Set Pin Function
  Input : Pin Number (0 -> 31)
  Output : DIO_tenuErrorStatus to report error */
/***********************************************/

DIO_tenuErrorStatus DIO_enuSetPinValue(DIO_tenuPins Copy_u8PinNumber,DIO_tPinValue Copy_u8Value)
{
  
  if (Copy_u8PinNumber>(DIO_enuPin31) || Copy_u8PinNumber<DIO_enuPin0)
  {
    return DIO_enuNotOk;
  }
  
  else
  {
    

  u8 u8Copy_u8PortId=Copy_u8PinNumber/8;
  u8 u8Copy_u8PinId=Copy_u8PinNumber%8;
  
  
  switch(u8Copy_u8PortId)
    {
      case DIO_u8_PORTA: 
      if(Copy_u8Value==DIO_enuHigh)
      {
        SET_BIT(DIOA->PORT,u8Copy_u8PinId);
      }
      else
      {
        CLR_BIT(DIOA->DDR,u8Copy_u8PinId);
      }
        
      break;
      
      case DIO_u8_PORTB: 
      if(Copy_u8Value==DIO_enuHigh)
      {
        SET_BIT(DIOA->PORT,u8Copy_u8PinId);
      }
      else
      {
        CLR_BIT(DIOA->DDR,u8Copy_u8PinId);
      }
        
      break;
      
      case DIO_u8_PORTC: 
      if(Copy_u8Value==DIO_enuHigh)
      {
        SET_BIT(DIOB->PORT,u8Copy_u8PinId);
      }
      else
      {
        CLR_BIT(DIOB->DDR,u8Copy_u8PinId);
      }
        
      break;
      
      case DIO_u8_PORTD: 
      if(Copy_u8Value==DIO_enuHigh)
      {
        SET_BIT(DIOD->PORT,u8Copy_u8PinId);
      }
      else
      {
        CLR_BIT(DIOD->DDR,u8Copy_u8PinId);
      }
        
      break;
    }
    return DIO_enuOk;
  }
    
}