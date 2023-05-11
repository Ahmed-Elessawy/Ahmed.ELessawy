

#include"GPIO_Interface.h"
#include"SWITCH_Interface.h"
#include"SWITCH_Config.h"

#define NULL ((void*)0)
static u8 SwState[NumberOfSwitches]={SW_enuReleased};

extern const SW_Config_t SW_Cfg_t[NumberOfSwitches];




void SwitchInit(void)

{
	u8 Loc_u8Iter;
	gpio_cfg_t Switch_Cfg_t;
	for(Loc_u8Iter=0;Loc_u8Iter<NumberOfSwitches;Loc_u8Iter++)
	{
		Switch_Cfg_t.pin_Port=SW_Cfg_t[Loc_u8Iter].SW_Port;
		Switch_Cfg_t.pin_Num=SW_Cfg_t[Loc_u8Iter].SW_Pin;
		if(SW_Cfg_t[Loc_u8Iter].SW_InputState==PULL_UP)
		{
			Switch_Cfg_t.pin_Mode=gpio_INPUT_PU;
		}
		else
		{
			Switch_Cfg_t.pin_Mode=gpio_INPUT_PD;
		}
		gpio_vInit(&Switch_Cfg_t);
	}
}


ErrorStatus_t SWITCH_GetState(u8 *Pu8_SW_State,u8 Cpy_u8SW_Number)
{
	ErrorStatus_t state=SW_Ok;
	if(Pu8_SW_State==NULL)
	{
		state=SW_Nok;
		
	}
	else
	{
		*Pu8_SW_State=SwState[Cpy_u8SW_Number]^SW_Cfg_t[Cpy_u8SW_Number].SW_InputState;
	}
	return state;
}

void SwitchTask(void)
{
	static u8 Loc_Ctr[NumberOfSwitches]={0};
	static u8 PrevState[NumberOfSwitches]={0};
    u8 CurrState[NumberOfSwitches]={0}; 
	u8 Loc_u8Iter;
	for(Loc_u8Iter=0;Loc_u8Iter<NumberOfSwitches;Loc_u8Iter++)
	{
	CurrState[Loc_u8Iter]=gpio_ReadPinValue(SW_Cfg_t[Loc_u8Iter].SW_Port,SW_Cfg_t[Loc_u8Iter].SW_Pin,&CurrState[Loc_u8Iter]);
	if(CurrState[Loc_u8Iter]==PrevState[Loc_u8Iter])
		{
		Loc_Ctr[Loc_u8Iter]++;
		
		}
	else
		{
		Loc_Ctr[Loc_u8Iter]=0;
		}
	if(Loc_Ctr[Loc_u8Iter]==5)
		{
		SwState[Loc_u8Iter]=CurrState[Loc_u8Iter];
		}
		
	PrevState[Loc_u8Iter]=CurrState[Loc_u8Iter];	
	}
	
}
