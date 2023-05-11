/**************************************************************/
/* Author: Ahmed Elessawy Rashid                              */
/* Date: 10-Feb-2023                                          */
/* Version: 01                                                */
/* Description: Interface file for ِLCD Driver	  			  */
/**************************************************************/



/*Preprocessor Guard*/
#ifndef LCD_CONFIG_H 
#define LCD_CONFIG_H 
#include"Std_Types.h"
#include"LCD_Private.h"
/*
Macro for setting the initialized commands for Function Set
Range:
      LCD_u8_FUN_SET_8BIT_1LINE_5X8Font
      LCD_u8_FUN_SET_8BIT_2LINES_5X8Font
      LCD_u8_FUN_SET_8BIT_1LINE_5X11Font
      LCD_u8_FUN_SET_8BIT_2LINES_5X11Font
 */
#define LCD_u8_INIT_FUNCTION_SET    		  LCD_u8_FUN_SET_8BIT_2LINES_5X8Font


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
#define LCD_u8_INIT_DISPLAY_CONTROL          LCD_u8_DISPLAY_ON_CURSOR_OFF_BlinkOFF


/*Defining the pins of the LCD control pins*/
#define LCD_u8_RS_PIN			DIO_u8_PORTB_PIN0
#define LCD_u8_RW_PIN			DIO_u8_PORTB_PIN1
#define LCD_u8_E_PIN			DIO_u8_PORTB_PIN2

/*Defining the pins of the LCD data pins*/
#define LCD_u8_D0_PIN			DIO_u8_PORTA_PIN0
#define LCD_u8_D1_PIN			DIO_u8_PORTA_PIN1
#define LCD_u8_D2_PIN			DIO_u8_PORTA_PIN2
#define LCD_u8_D3_PIN			DIO_u8_PORTA_PIN3
#define LCD_u8_D4_PIN			DIO_u8_PORTA_PIN4
#define LCD_u8_D5_PIN			DIO_u8_PORTA_PIN5
#define LCD_u8_D6_PIN			DIO_u8_PORTA_PIN6
#define LCD_u8_D7_PIN			DIO_u8_PORTA_PIN7



const u8 LCD_arPins[LCD_NumberOfPins];


#endif