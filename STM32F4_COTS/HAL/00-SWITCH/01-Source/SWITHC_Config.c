

#include"GPIO_Interface.h"
#include"SWITCH_Interface.h"
#include"SWITCH_Config.h"

/*
Pin : PIN0 : PIN15

Port: gpioA : gpioC

Input State: PULL_UP, PULL_DOWN
*/

const SW_Config_t SW_Cfg_t[NumberOfSwitches]=
{
	[Sw0].SW_Port=gpioA,
	[Sw0].SW_Pin=PIN0,
	[Sw0].SW_InputState=PULL_UP,
	
	[Sw1].SW_Port=gpioB,
	[Sw1].SW_Pin=PIN0,
	[Sw1].SW_InputState=PULL_UP,
	
	[Sw2].SW_Port=gpioC,
	[Sw2].SW_Pin=PIN0,
	[Sw2].SW_InputState=PULL_UP,
	
};
