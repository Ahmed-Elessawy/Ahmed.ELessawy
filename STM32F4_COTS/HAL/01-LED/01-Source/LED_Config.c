#inlude"GPIO_Interface.h"
#include"LED_Interface.h"
#include"LED_Config.h"

const LED_tstr_LEDS Leds[NumberOfSwitches]=
{
	[Led0].LED_u8LedPort=gpioA,
	[Led0].LED_u8LedPin=PIN0,
	[Led0].LED_u8ActiveSatet=ActiveHigh,
	[Led0].LED_u8LedSpeed=GPIO_SPEED_MEDIUM;
	
	[Led1].LED_u8LedPort=gpioB,
	[Led1].LED_u8LedPin=PIN0,
	[Led1].LED_u8ActiveSatet=ActiveHigh,
	[Led1].LED_u8LedSpeed=GPIO_SPEED_MEDIUM;
	
	[Led2].LED_u8LedPort=gpioC,
	[Led2].LED_u8LedPin=PIN0,
	[Led2].LED_u8ActiveSatet=ActiveHigh,
	[Led2].LED_u8LedSpeed=GPIO_SPEED_MEDIUM;
	
};