/**************************************************************/
/* Author: Ahmed Elessawy Rashid                              */
/* Date: 10-Feb-2023                                          */
/* Version: 01                                                */
/* Description: Private file for ِLCD Driver	  			  	  */
/**************************************************************/
#ifndef LCD_PRIVATE_H
#define LCD_PRIVATE_H
						/*LCD commands */
						
#define LCD_u8_FUN_SET_8BIT_1LINE_5X8Font        (u8)0x30
#define LCD_u8_FUN_SET_8BIT_2LINES_5X8Font        (u8)0x38
#define LCD_u8_FUN_SET_8BIT_1LINE_5X11Font       (u8)0x34
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


/*Configuaration Pins Numbers*/


#define DIO_u8_PORTA_PIN0				0
#define DIO_u8_PORTA_PIN1				1
#define DIO_u8_PORTA_PIN2				2
#define DIO_u8_PORTA_PIN3				3
#define DIO_u8_PORTA_PIN4				4
#define DIO_u8_PORTA_PIN5				5
#define DIO_u8_PORTA_PIN6				6	
#define DIO_u8_PORTA_PIN7				7

#define DIO_u8_PORTB_PIN1				9
#define DIO_u8_PORTB_PIN0				8




#define DIO_u8_PORTB_PIN2				10
#define DIO_u8_PORTB_PIN3				11	
#define DIO_u8_PORTB_PIN4				12	
#define DIO_u8_PORTB_PIN5				13
#define DIO_u8_PORTB_PIN6				14
#define DIO_u8_PORTB_PIN7				15


#define DIO_u8_PORTC_PIN0				16	
#define DIO_u8_PORTC_PIN1				17		
#define DIO_u8_PORTC_PIN2				18
#define DIO_u8_PORTC_PIN3				19
#define DIO_u8_PORTC_PIN4				20
#define DIO_u8_PORTC_PIN5				21
#define DIO_u8_PORTC_PIN6				22
#define DIO_u8_PORTC_PIN7				23

#define DIO_u8_PORTD_PIN0				24
#define DIO_u8_PORTD_PIN1				25
#define DIO_u8_PORTD_PIN2				26
#define DIO_u8_PORTD_PIN3				27
#define DIO_u8_PORTD_PIN4				28
#define DIO_u8_PORTD_PIN5				29
#define DIO_u8_PORTD_PIN6				30
#define DIO_u8_PORTD_PIN7				31



#define LCD_NumberOfPins 11


#endif