 /**************************************************************/
/* Author: Ahmed Elessawy Rashid                              */
/* Date: 10-Feb-2023                                          */
/* Version: 01                                                */
/* Description: Private file for Ù�LCD Driver	  			  	  */
/**************************************************************/
#ifndef LCD_PRIVATE_H
#define LCD_PRIVATE_H
						/*LCD commands */
						
#define LCD_u8_FUN_SET_8BIT_1LINE_5X8Font         (u8)0x30
#define LCD_u8_FUN_SET_8BIT_2LINES_5X8Font        (u8)0x38
#define LCD_u8_FUN_SET_8BIT_1LINE_5X11Font        (u8)0x34
#define LCD_u8_FUN_SET_8BIT_2LINES_5X11Font       (u8)0x3C


#define LCD_u8_DISPLAY_OFF_CURSOR_OFF_BlinkOFF	 (u8)0x08
#define LCD_u8_DISPLAY_OFF_CURSOR_OFF_BlinkON	 (u8)0x09
#define LCD_u8_DISPLAY_OFF_CURSOR_ON_BlinkOFF	 (u8)0x0A
#define LCD_u8_DISPLAY_OFF_CURSOR_ON_BlinkON 	 (u8)0x0B
#define LCD_u8_DISPLAY_ON_CURSOR_OFF_BlinkOFF 	 (u8)0x0C
#define LCD_u8_DISPLAY_ON_CURSOR_OFF_BlinkON 	 (u8)0x0D
#define LCD_u8_DISPLAY_ON_CURSOR_ON_BlinkOFF 	 (u8)0x0E
#define LCD_u8_DISPLAY_ON_CURSOR_ON_BlinkON 	 (u8)0x0F



#define LCD_u8_CLEAR                     (u8)0x01
#define LCD_u8_ENTRY_MODE				 (u8)0x06


#define LCD_u8_FirstRow                  (u8)0x80
#define LCD_u8_SecondRow                 (u8)0xC0


typedef enum{
	LCD_enuInitPins=0,
	LCD_enuWaitingPower,
    LCD_enuInitStart,
    LCD_enuInitFunctionSet,
    LCD_enuInitClearDisplay,
    LCD_enuInitDone
}LCD_enuInit_t;

typedef enum
{
	LCD_EN_PIN_ON=0,
	LCD_EN_PIN_OFF
}LcdEN_Pin;

typedef enum
{
	LCD_Request,
	LCD_Idle
}LcdStatus_t;

typedef enum 

{
	 Lcd_SetPosition,
	 Lcd_Writing,
	 Lcd_Done
}Lcd_WritingStatus_t;


#endif
