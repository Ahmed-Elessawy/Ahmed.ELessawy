
#include"GPIO_Interface.h"
#include"SWITCH_Interface.h"
#include"SWITCH_Config.h"

#define NULL ((void*)0)


extern const LED_tstr_LEDS Leds[NumberOfSwitches];




void Led_vInit(void)

{
	u8 Loc_u8Iter;
	gpio_cfg_t Led_Cfg_t;
	for(Loc_u8Iter=0;Loc_u8Iter<NumberOfSwitches;Loc_u8Iter++)
	{
		Led_Cfg_t.pin_Port=Leds[Loc_u8Iter].SW_Port;
		Led_Cfg_t.pin_Num=Leds[Loc_u8Iter].SW_Pin;
		Led_Cfg_t.pin_Mode=gpio_GP_PP;
		Led_Cfg_t.pin_Speed=Leds[Loc_u8Iter].LED_u8LedSpeed;
		gpio_vInit(&Switch_Cfg_t);
	}
}

ErrorStatus_t Led_SetState(u8 Cpy_u8Port,u8 Cpy_u8LedNumber,Led_enuState_t State)
{
	ErrorStatus_t State=Led_Ok;
	if(Cpy_u8LedNumber>NumberOfLeds)
	{
		State=Led_Nok;
	}
	else
	{
		gpio_WritePinValue(Leds[Cpy_u8LedNumber].LED_u8LedPort,Leds[Cpy_u8LedNumber].LED_u8LedPin
		,State^Leds[Cpy_u8LedNumber].LED_u8ActiveSatet);
	}
	return State;
}