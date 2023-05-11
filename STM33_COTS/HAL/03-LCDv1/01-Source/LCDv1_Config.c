#include"LCDv1_Private.h"
#include"LCDv1_Config.h"

#define NumberOfLcds	1
#define LCD0			0





const LCD_cfg_t LcdCfg_t[NumberOfLcds]=
{
	[LCD0].LCD_DataPins={[0].pin_Port=gpioA,
						 [0].pin_Num=PIN0,
						 [0].pin_Speed=GPIO_SPEED_HIGHSPEED,
						 [0].pin_Mode=gpio_GP_PP,
						
						 [1].pin_Port=gpioA,		
                         [1].pin_Num=PIN1,
                         [1].pin_Speed=GPIO_SPEED_HIGHSPEED,
                         [1].pin_Mode=gpio_GP_PP,
						 
						 [2].pin_Port=gpioA,
                         [2].pin_Num=PIN2,
                         [2].pin_Speed=GPIO_SPEED_HIGHSPEED,
                         [2].pin_Mode=gpio_GP_PP,
						 
						 [3].pin_Port=gpioA,
                         [3].pin_Num=PIN3,
                         [3].pin_Speed=GPIO_SPEED_HIGHSPEED,
                         [3].pin_Mode=gpio_GP_PP,
						 
					     [4].pin_Port=gpioA,
                         [4].pin_Num=PIN4,
                         [4].pin_Speed=GPIO_SPEED_HIGHSPEED,
                         [4].pin_Mode=gpio_GP_PP,
						 
						 [5].pin_Port=gpioA,
                         [5].pin_Num=PIN5,
                         [5].pin_Speed=GPIO_SPEED_HIGHSPEED,
                         [5].pin_Mode=gpio_GP_PP,
						 
						 [6].pin_Port=gpioA,
                         [6].pin_Num=PIN6,
                         [6].pin_Speed=GPIO_SPEED_HIGHSPEED,
                         [6].pin_Mode=gpio_GP_PP,
						 
						 [7].pin_Port=gpioA,
                         [7].pin_Num=PIN7,
                         [7].pin_Speed=GPIO_SPEED_HIGHSPEED,
						 [7].pin_Mode=gpio_GP_PP};
						 
	[LCD0].Lcd_RS_Pin.pin_Port =gpioA,
	[LCD0].Lcd_RS_Pin.pin_Num  =PIN8,
	[LCD0].Lcd_RS_Pin.pin_Speed=GPIO_SPEED_HIGHSPEED,
    [LCD0].Lcd_RS_Pin.pin_Mode =gpio_GP_PP,
	
	[LCD0].Lcd_EN_Pin.pin_Port =gpioA,	
	[LCD0].Lcd_EN_Pin.pin_Num  =PIN9,				  
    [LCD0].Lcd_EN_Pin.pin_Speed=GPIO_SPEED_HIGHSPEED,
    [LCD0].Lcd_EN_Pin.pin_Mode =gpio_GP_PP,
	
	[LCD0].Lcd_RW_Pin.pin_Port =gpioA,
	[LCD0].Lcd_RW_Pin.pin_Num  =PIN10,
	[LCD0].Lcd_RW_Pin.pin_Speed=GPIO_SPEED_HIGHSPEED,
	[LCD0].Lcd_RW_Pin.pin_Mode =gpio_GP_PP
	
};

/*
Macro for setting the initialized commands for Function Set
Range:
      LCD_u8_FUN_SET_8BIT_1LINE_5X8Font
      LCD_u8_FUN_SET_8BIT_2LINES_5X8Font
      LCD_u8_FUN_SET_8BIT_1LINE_5X11Font
      LCD_u8_FUN_SET_8BIT_2LINES_5X11Font
 */
 
 
 /*
Macro for setting the initialized commands for Display on/off control
Range:
      LCD_u8_DISPLAY_OFF_CURSOR_OFF_BlinkOFF	
      LCD_u8_DISPLAY_OFF_CURSOR_OFF_BlinkON	
      LCD_u8_DISPLAY_OFF_CURSOR_ON_BlinkOFF	
	  LCD_u8_DISPLAY_OFF_CURSOR_ON_BlinkON 	
	  LCD_u8_DISPLAY_ON_CURSOR_OFF_BlinkOFF 	
	  LCD_u8_DISPLAY_ON_CURSOR_OFF_BlinkON 	
	  LCD_u8_DISPLAY_ON_CURSOR_ON_BlinkOFF 	
	  LCD_u8_DISPLAY_ON_CURSOR_OFF_BlinkOFF 	
 */
 
 /*
	BACK_LIGHT_ON
	BACK_LIGHT_OFF
	*/
const Lcd_Operation_Cfg_t LcdOpCfg_t[NumberOfLcds]=
{
	[LCD0].LCD_u8_INIT_FUNCTION_SET   =LCD_u8_FUN_SET_8BIT_2LINES_5X8Font,
	[LCD0].LCD_u8_INIT_DISPLAY_CONTROL=LCD_u8_DISPLAY_ON_CURSOR_OFF_BlinkOFF,
	[LCD0].LCD_BackLight=BACK_LIGHT_ON
};