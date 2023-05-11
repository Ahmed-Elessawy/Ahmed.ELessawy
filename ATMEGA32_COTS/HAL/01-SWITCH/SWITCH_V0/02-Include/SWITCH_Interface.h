//Author : Ahmed Elessawy 



#ifndef SWITCH_INTERFACE_H

#define SWITCH_INTERFACE_H

typedef enum{

	S_OK,
	S_NOK,
	S_OUT_OF_RANGE,
	S_NULL_POINTER

}PushButton_tenuErroStatus;


typedef enum
{

    HAL_enuSwitch0 = 0,
    HAL_enuSwitch1    ,
    HAL_enuSwitch2    ,
    HAL_enuSwitch3    ,
    HAL_enuSwitch4    ,
    HAL_enuSwitch5    ,
    HAL_enuSwitch6    ,
    HAL_enuSwitch7    ,
    HAL_enuSwitch8    ,  
    HAL_enuSwitch9    ,
    HAL_enuSwitch10   ,
    HAL_enuSwitch11   ,
    HAL_enuSwitch12   ,
    HAL_enuSwitch13   ,
    HAL_enuSwitch14   ,
    HAL_enuSwitch15   ,
    HAL_enuSwitch16   ,
    HAL_enuSwitch17   ,
    HAL_enuSwitch18   ,
    HAL_enuSwitch19   ,
    HAL_enuSwitch20   ,
    HAL_enuSwitch21   ,
    HAL_enuSwitch22   ,
    HAL_enuSwitch23   ,
    HAL_enuSwitch24   ,
    HAL_enuSwitch25   ,
    HAL_enuSwitch26   ,
    HAL_enuSwitch27   ,
    HAL_enuSwitch28   ,
    HAL_enuSwitch29   ,
    HAL_enuSwitch30   ,
    HAL_enuSwitch31   ,
    HAL_enuNumberOfSwitches
}HAL_tenuSwitches;


typedef enum

{
  HAL_enuSwitchNotPressed=0,	
  HAL_enuSwitchPressed
}HAL_tenuSwitchState;


PushButton_tenuErroStatus Switch_enuGetButtonState ( HAL_tenuSwitches Copy_u8SwitchNumber,u8* Add_pu8SwitchState);



 










#endif