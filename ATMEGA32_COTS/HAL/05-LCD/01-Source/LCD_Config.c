/**************************************************************/
/* Author: Ahmed Elessawy Rashid                              */
/* Date: 10-Feb-2023                                          */
/* Version: 01                                                */
/* Description: Config file for ِLCD Driver	  			  */
/**************************************************************/

#include"LCD_Config.h"


#define LCD_NumberOfPins 11

const u8 LCD_arPins[LCD_NumberOfPins]={
							  LCD_u8_RS_PIN,	
                              LCD_u8_RW_PIN,	
                              LCD_u8_E_PIN,
							  LCD_u8_D0_PIN,
                              LCD_u8_D1_PIN,
                              LCD_u8_D2_PIN,
                              LCD_u8_D3_PIN,
                              LCD_u8_D4_PIN,
                              LCD_u8_D5_PIN,
                              LCD_u8_D6_PIN,
                              LCD_u8_D7_PIN,
							 };
							 
							 