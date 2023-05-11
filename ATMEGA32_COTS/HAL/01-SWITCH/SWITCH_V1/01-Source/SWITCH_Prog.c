//Author : Ahmed Elessawy  


#include"../../MCAL/01-DIO1/02-Include/DIO_Interface.h"
#include"SWITCH_Interface.h"

extern const SWITCH_tstr_SWITCHS SWITCH_tarr_SWITCHS[NumberOfSWITCHs];

SWITCH_tenuErroStatus SWITCHs_enuInit(void)
{
    u8 Local_tu8_SWITCHOnIterator=0;
    for(Local_tu8_SWITCHOnIterator=0;Local_tu8_SWITCHOnIterator<NumberOfSWITCHs;Local_tu8_SWITCHOnIterator++)
    {
      DIO_enuSetPinDirectionInput(SWITCH_tarr_SWITCHS[Local_tu8_SWITCHOnIterator].SWITCH_tu8SWITCHPin);
      if(SWITCH_tarr_SWITCHS[Local_tu8_SWITCHOnIterator].SWITCH_tu8InputState==PULL_DOWN)
      {
        DIO_enuClearPinValue(SWITCH_tarr_SWITCHS[Local_tu8_SWITCHOnIterator].SWITCH_tu8SWITCHPin);
      }
      else
      {
        DIO_enuSetPinValue(SWITCH_tarr_SWITCHS[Local_tu8_SWITCHOnIterator].SWITCH_tu8SWITCHPin);
      }
      
    }

};


SWITCH_tenuErroStatus SWITCH_enuGetSwitchState(DIO_tenuSWITCHs Copy_u8SWITCHNumber,u8* Add_pu8SwitchState)

{
  Add_pu8SwitchState=NULL;
  PushButton_tenuErroStatus State=S_OK;
  
  DIO_enuGetPin( Copy_u8SwitchNumber, Add_pu8SwitchState);
  
  
  if(Add_pu8SwitchState)
  {
    
  }
  else
  {
	    State=S_NOK;
  }
  
  return State;
}

