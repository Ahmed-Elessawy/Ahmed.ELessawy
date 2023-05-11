
#ifndef SWITCH_INTERFACE_H
#define SWITHC_INTERFCAE_H

#include"Std_Types.h"
typedef enum
{
	PULL_UP=0,
	PULL_DOWN
}SW_InputState_t;

typedef enum
{
	SW_enuPressed=0,
	SW_enuReleased
}Sw_enuState_t;

typedef enum
{
	SW_Ok=0,
	SW_Nok
}ErrorStatus_t;


void SwitchInit(void);
ErrorStatus_t SWITCH_GetState(u8 *Pu8_SW_State,u8 Cpy_u8SW_Number);
void SwitchTask(void);



#endif
