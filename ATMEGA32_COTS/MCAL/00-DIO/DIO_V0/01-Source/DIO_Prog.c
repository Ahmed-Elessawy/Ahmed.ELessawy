//Author : Ahmed Elessawy 
//Date 16/01/2023
/*********************************************************************************/



#include"DIO_Interface.h"




/*********************************************************************************/
/* Function: DIO_voidSetPortDirection                        				    **/
/* I/P Parameters: Copy_u8PortId, u8 Copy_u8Direction                           **/
/* Returns:it returns No thing                                				    **/
/* Desc:This Function Sets the Direction of a specific port			       	    **/
/*********************************************************************************/
/* Copy_u8PortId Options: DIO_u8_PORTA, DIO_u8_PORTB, DIO_u8_PORTC, DIO_u8_PORTD**/
/* Copy_u8Value  Options:  Value assigned directly                              **/
/*********************************************************************************/
ErrorStatus DIO_voidSetPortDirection(u8 Copy_u8PortId, u8 Copy_u8Direction)

{
  if(Copy_u8PortId>DIO_u8_PORTD || Copy_u8PortId<DIO_u8_PORTA  
  Copy_u8Direction!=DIO_u8_INPUT || Copy_u8Direction!= DIO_u8_OUTPUT)
  {
    
    return NOK;
    
  }

  else
  {
    
  switch (Copy_u8PortId)
  {
    case DIO_u8_PORTA:
         if (Copy_u8Direction==DIO_u8_OUTPUT)
         {
           SET_REG(DIO_u8_DDRA_REG);
         }
         else
         {
           CLR_REG(DIO_u8_DDRA_REG);
         }
         
         
    case DIO_u8_PORTB:
         if (Copy_u8Direction==DIO_u8_OUTPUT)
         {
           SET_REG(DIO_u8_DDRB_REG);
         }
         else
         {
           CLR_REG(DIO_u8_DDRB_REG);
         }
         
         
    case DIO_u8_PORTC:
         if (Copy_u8Direction==DIO_u8_OUTPUT)
         {
           SET_REG(DIO_u8_DDRC_REG);
         }
         else
         {
           CLR_REG(DIO_u8_DDRC_REG);
         }
    

    case DIO_u8_PORTD:
         if (Copy_u8Direction==DIO_u8_OUTPUT)
         {
           SET_REG(DIO_u8_DDRD_REG);
         }
         else
         {
           CLR_REG(DIO_u8_DDRD_REG);
         }
    
    
  }
  
  return OK;
  
  }

}




/*********************************************************************************/
/* Function: DIO_voidSetPortValue	                        				    **/
/* I/P Parameters: Copy_u8PortId, u8 Copy_u8Value                               **/
/* Returns:it returns No thing                                				    **/
/* Desc:This Function Sets the Value of a specific port				       	    **/
/*********************************************************************************/
/* Copy_u8PortId Options: DIO_u8_PORTA, DIO_u8_PORTB, DIO_u8_PORTC, DIO_u8_PORTD**/
/* Copy_u8Value  Options:  Value assigned directly                              **/
/*********************************************************************************/
ErrorStatus DIO_voidSetPortValue(u8 Copy_u8PortId, u8 Copy_u8Value)
{
  
  if( Copy_u8PortId>DIO_u8_PORTD || Copy_u8PortId<DIO_u8_PORTA )
  {
    return NOK;
    
  }
  
  else
  {
    switch (Copy_u8PortId)
  {
    case DIO_u8_PORTA: DIO_u8_PORTA_REG=Copy_u8Value;
         
    case DIO_u8_PORTB: DIO_u8_PORTB_REG=Copy_u8Value;
         
    case DIO_u8_PORTC: DIO_u8_PORTC_REG=Copy_u8Value; 
    
    case DIO_u8_PORTD: DIO_u8_PORTD_REG=Copy_u8Value; 
    
  }
  
  return OK;
  
  }
  
  
  
  
}




/*********************************************************************************/
/* Function: DIO_voidGetPortValue	                        				    **/
/* I/P Parameters: Copy_u8PortId                                                **/
/* Returns:it returns   u8                                     				    **/
/* Desc:This Function Sets the Value of a specific port				       	    **/
/*********************************************************************************/
/* Copy_u8PortId Options: DIO_u8_PORTA, DIO_u8_PORTB, DIO_u8_PORTC, DIO_u8_PORTD**/
/* Copy_u8Value  Options:  Value assigned directly                              **/
/*********************************************************************************/
ErrorStatus DIO_voidGetPortValue(u8 Copy_u8PortId,u8 * Copy_ptrPortValue)
{
  
  if( Copy_u8PortId>DIO_u8_PORTD || Copy_u8PortId<DIO_u8_PORTA )
  {
    return NOK;
    
  }
  
  else
  {
    switch (Copy_u8PortId)
  {
    case DIO_u8_PORTA: * Copy_ptrPortValue=DIO_u8_PINA_REG;
         
    case DIO_u8_PORTB: * Copy_ptrPortValue=DIO_u8_PINB_REG;
         
    case DIO_u8_PORTC: * Copy_ptrPortValue=DIO_u8_PINC_REG; 
    
    case DIO_u8_PORTD: * Copy_ptrPortValue=DIO_u8_PIND_REG; 
    
  }
  
  return OK;
  
  }
    
}
  
  
  
  
 



/*********************************************************************************/
/* Function: DIO_voidSetPinDirection	                        				**/
/* I/P Parameters: Copy_u8PortId,  Copy_u8PinId, Copy_u8Direction  			    **/
/* Returns:it returns No thing                                				    **/
/* Desc:This Function Sets the Direction of a specific pin     		       	    **/
/*********************************************************************************/
/* Copy_u8PortId Options: DIO_u8_PORTA, DIO_u8_PORTB, DIO_u8_PORTC, DIO_u8_PORTD**/
/* Copy_u8PinId  Options: DIO_u8_PIN0 --> DIO_u8_PIN7                           **/
/* Copy_u8Value  Options: DIO_u8_INPUT, DIO_u8_OUTPUT                           **/
/*********************************************************************************/
ErrorStatus DIO_voidSetPinDirection(u8 Copy_u8PortId, u8 Copy_u8PinId, u8 Copy_u8Direction)
{
  
  if(Copy_u8PortId>DIO_u8_PORTD  || Copy_u8PortId<DIO_u8_PORTA
  ||  Copy_u8PinId>DIO_u8_PIN7   || Copy_u8PinId<DIO_u8_PIN0 ||  
  Copy_u8Direction!=DIO_u8_INPUT || Copy_u8Direction!= DIO_u8_OUTPUT)
  
  {
    return NOK;
  }
  
  else
  {
  
  switch (Copy_u8PortId)
  {
    case DIO_u8_PORTA:
         if (Copy_u8Direction==DIO_u8_OUTPUT)
         {
           SET_BIT(DIO_u8_DDRA_REG,Copy_u8PinId);
         }
         else
         {
           CLR_BIT(DIO_u8_DDRA_REG,Copy_u8PinId);
         }
         
         
    case DIO_u8_PORTB:
         if (Copy_u8Direction==DIO_u8_OUTPUT)
         {
           SET_BIT(DIO_u8_DDRB_REG,Copy_u8PinId);
         }
         else
         {
           CLR_BIT(DIO_u8_DDRB_REG,Copy_u8PinId);
         }
         
         
    case DIO_u8_PORTC:
         if (Copy_u8Direction==DIO_u8_OUTPUT)
         {
           SET_BIT(DIO_u8_DDRC_REG,Copy_u8PinId);
         }
         else
         {
           CLR_BIT(DIO_u8_DDRC_REG,Copy_u8PinId);
         }
    

    case DIO_u8_PORTD:
         if (Copy_u8Direction==DIO_u8_OUTPUT)
         {
           SET_BIT(DIO_u8_DDRD_REG,Copy_u8PinId);
         }
         else
         {
           CLR_BIT(DIO_u8_DDRD_REG,Copy_u8PinId);
         }
    
    
  }
  
  return OK;
  
  }
  
} 



/*********************************************************************************/
/* Function: DIO_voidSetPinValue	                        				    **/
/* I/P Parameters: Port ID,  Pin ID, Pin Value				          		    **/
/* Returns:it returns No thing                                				    **/
/* Desc:This Function Sets the Value of a specific pin				       	    **/
/*********************************************************************************/
/* Copy_u8PortId Options: DIO_u8_PORTA, DIO_u8_PORTB, DIO_u8_PORTC, DIO_u8_PORTD**/
/* Copy_u8PinId  Options: DIO_u8_PIN0 --> DIO_u8_PIN7                           **/
/* Copy_u8Value  Options: DIO_u8_LOW, DIO_u8_HIGH                               **/
/*********************************************************************************/
ErrorStatus DIO_voidSetPinValue(u8 Copy_u8PortId, u8 Copy_u8PinId, u8 Copy_u8Value)


{
  
  if(Copy_u8PortId>DIO_u8_PORTD  || Copy_u8PortId<DIO_u8_PORTA
  ||  Copy_u8PinId>DIO_u8_PIN7   || Copy_u8PinId<DIO_u8_PIN0 ||  
  Copy_u8Direction!=DIO_u8_INPUT || Copy_u8Direction!= DIO_u8_OUTPUT)
  
  {
    return NOK;
  }
  
  else
  {
  
  switch (Copy_u8PortId)
  {
    case DIO_u8_PORTA:
         if (Copy_u8Value==DIO_u8_HIGH)
         {
           SET_BIT(DIO_u8_PORTA_REG,Copy_u8PinId);
         }
         else
         {
           CLR_BIT(DIO_u8_PORTA_REG,Copy_u8PinId);
         }
         
         
    case DIO_u8_PORTB:
         if (Copy_u8Value==DIO_u8_HIGH)
         {
           SET_BIT(DIO_u8_PORTB_REG,Copy_u8PinId);
         }
         else
         {
           CLR_BIT(DIO_u8_PORTB_REG,Copy_u8PinId);
         }
         
         
    case DIO_u8_PORTC:
         if (Copy_u8Value==DIO_u8_HIGH)
         {
           SET_BIT(DIO_u8_PORTC_REG,Copy_u8PinId);
         }
         else
         {
           CLR_BIT(DIO_u8_PORTC_REG,Copy_u8PinId);
         }
    

    case DIO_u8_PORTA:
         if (Copy_u8Value==DIO_u8_HIGH)
         {
           SET_BIT(DIO_u8_PORTD_REG,Copy_u8PinId);
         }
         else
         {
           CLR_BIT(DIO_u8_PORTD_REG,Copy_u8PinId);
         }
    
    
  }
  
  return OK;
  
  }
  
}
  
  
  
/*********************************************************************************/
/* Function: DIO_voidGetPinValue	                        				    **/
/* I/P Parameters: Copy_u8PortId, Copy_u8PinId				          		    **/
/* Returns:it returns u8                                				        **/
/* Desc:This Function gets the Value of a given pin					       	    **/
/*********************************************************************************/
/* Copy_u8PortId Options: DIO_u8_PORTA, DIO_u8_PORTB, DIO_u8_PORTC, DIO_u8_PORTD**/
/* Copy_u8PinId  Options: DIO_u8_PIN0 --> DIO_u8_PIN7                           **/
/*********************************************************************************/
ErrorStatus DIO_voidGetPinValue(u8 Copy_u8PortId, u8 Copy_u8PinId,u8 * Copy_ptrPortValue)
{

  if(Copy_u8PortId>DIO_u8_PORTD  || Copy_u8PortId<DIO_u8_PORTA
  ||  Copy_u8PinId>DIO_u8_PIN7   || Copy_u8PinId<DIO_u8_PIN0 ||)
  
  {
    
    return NOK;
  }
  
  else
  {
    switch (Copy_u8PortId)
  {
    case DIO_u8_PORTA: * Copy_ptrPortValue=GET_BIT(DIO_u8_PINA_REG,Copy_u8PinId);
         
    case DIO_u8_PORTB: * Copy_ptrPortValue=GET_BIT(DIO_u8_PINB_REG,Copy_u8PinId);
         
    case DIO_u8_PORTC: * Copy_ptrPortValue=GET_BIT(DIO_u8_PINC_REG,Copy_u8PinId); 
    
    case DIO_u8_PORTD: * Copy_ptrPortValue=GET_BIT(DIO_u8_PIND_REG,Copy_u8PinId);
    
  }
  
  return OK;
  
  }
  
}
    
  
  
  
  
  
  
  
  
  