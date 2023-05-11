//Author : Ahmed Elessawy  
#ifndef _LCD_CFG_H_
#define _LCD_CFG_H_
#include"GPIO_Interface.h"
typedef struct{
    gpio_cfg_t LCD_DataPins[8];
	gpio_cfg_t Lcd_RS_Pin;
	gpio_cfg_t Lcd_EN_Pin;
	gpio_cfg_t Lcd_RW_Pin;
}LCD_cfg_t; 

typedef struct 
{
	u8 LCD_u8_INIT_FUNCTION_SET;
	u8 LCD_u8_INIT_DISPLAY_CONTROL;
	u8 LCD_BackLight;
}LcdOperationCfg_t;

typedef struct 
{
	u8 X_u8Pos;
	u8 Y_u8Pos;
	u8 StrSize;
	u8 *Str;
}Lcd_String_t,*Lcd_StringHandler_t;

#define LCD_PIN_NUMS          11


#define LCD_BUFFERSIZE        4

#define LCD_ROWS_NUM          2
#define LCD_COLUMNS_NUM       16


#endif