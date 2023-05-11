
#ifndef SWITHC_CONFIG_H
#define SWITCH_CONFIG_H
#include"Std_Types.h"

#define NumberOfSwitches  3

#define Sw0 			  0
#define Sw1				  1	
#define Sw2				  2







typedef struct
{
	u8 SW_Port;
	u8 SW_Pin;
	u8 SW_InputState;
}SW_Config_t,*SW_CfgHandler_t;



#endif
