/**********************************************************/
/* Author: Ahmed Elessawy Rashid                          */
/* Date: 31-Jan-2023                                        */
/* Version: 01                                            */
/* Description: Interface file for KPD Driver   		  */
/**********************************************************/

/*Preprocessor Guard*/
#ifndef KEYPAD_INTERFACE_H 
#define KEYPAD_INTERFACE_H 

typedef enum
{
	KEYPAD_OK=0,
	KEYPAD_NOK
	
}KEYPAD_tenuErrorStatus;

void KPD_voidInit(void);
KEYPAD_tenuErrorStatus  KPD_u8GetPressedKey (u8 *PAu8KpdValue);

//u8 KPD_u8GetPressedKeys(u8 (*PAu8KpdState)[KPD_u8_NO_OF_ROWS]);

#endif /* KPD_INTERFACE_H */ 