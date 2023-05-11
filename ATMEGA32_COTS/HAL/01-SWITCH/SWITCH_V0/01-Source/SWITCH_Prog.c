//Author : Ahmed Elessawy  

#include"../../../LIB/Std_Types.h"

#include"../../../MCAL/DIO1/02-Include/DIO1_Interface.h"
#include"../Include/SWITCH_Interface.h"



PushButton_tenuErroStatus Switch_enuGetButtonState ( HAL_tenuSwitches Copy_u8SwitchNumber,u8* Add_pu8SwitchState)

{
  PushButton_tenuErroStatus State=S_OK;
  if(Copy_u8SwitchNumber<HAL_enuSwitch31 || Copy_u8SwitchNumber>HAL_enuSwitch0)
  {
    DIO_enuGetPin( Copy_u8SwitchNumber, Add_pu8SwitchState);
  }
  
  else
  {
	      State=S_NOK;
  }
  
  return State;
}