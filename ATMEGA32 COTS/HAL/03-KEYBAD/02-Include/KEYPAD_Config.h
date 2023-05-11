/**********************************************************/
/* Author: Ahmed Elessawy Rashid                          */
/* Date: 31-Jan-2023                                        */
/* Version: 01                                            */
/* Description: Configuration file for KPD Driver    			  */
/**********************************************************/


#ifndef KEYPAD_CONFIG_H_
#define KEYPAD_CONFIG_H_


#define PORTC_PIN0  16
#define PORTC_PIN1	17
#define PORTC_PIN2	18

#define PORTC_PIN4  20
#define PORTC_PIN5  21
#define PORTC_PIN6  22
#define PORTC_PIN7  23

#define KEYPAD_u8_COL_NUM     3
#define KEYPAD_COL0_PIN		PORTC_PIN0
#define KEYPAD_COL1_PIN		PORTC_PIN1
#define KEYPAD_COL2_PIN		PORTC_PIN2
//#define KEYPAD_COL3_PIN		PORTC_PIN3





#define KEYPAD_u8_ROW_NUM     4
#define KEYPAD_ROW0_PIN		PORTC_PIN4
#define KEYPAD_ROW1_PIN		PORTC_PIN5
#define KEYPAD_ROW2_PIN		PORTC_PIN6
#define KEYPAD_ROW3_PIN		PORTC_PIN7

//configure between pull up and pull down
#define PULL_UP			1
#define PULL_DOWN       0

#define KEYPAD_INPUT_STATE  	   PULL_UP

#define KEYPAD_u8_DEBOUNCING_MS    20

#define KEYPAD_KEY_NOT_PRESSED     0xFF



#endif

