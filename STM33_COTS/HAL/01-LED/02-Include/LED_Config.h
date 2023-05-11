//Author : Ahmed Elessawy  

#include"Std_Types.h"
#define NumberOfLeds 3 

#define Led0 	0
#define Led1	1
#define Led2	2


/*
Speed:
GPIO_SPEED_LOW		
GPIO_SPEED_MEDIUM	
GPIO_SPEED_HIGHSPEED
GPIO_SPEED_VHIGHSPEED

Port:
gpioA:gpioC

Pin:
PIN0:PIN15

ActiveState:
ActiveHigh
ActiveLow
*/

typedef struct 
{
  u8  LED_u8LedPort; 		
  u16 LED_u8LedPin;
  u8  LED_u8ActiveSatet;
  u8 LED_u8LedSpeed;
}LED_tstr_LEDS;