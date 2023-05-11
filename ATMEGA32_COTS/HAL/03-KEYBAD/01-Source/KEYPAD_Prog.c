/**************************************************************/
/* Author: Ahmed Elessawy Rashid                              */
/* Date: 31-Jan-2023                                          */
/* Version: 01                                                */
/* Description: Program file for KPD Driver                   */
/**************************************************************/




 
 
#include"Std_Types.h"
#include"Macros.h"
#include"DIO1_Interface.h"
//#include"DIO1_Config.h"
#include"KEYPAD_Interface.h"
#include"KEYPAD_Config.h"
#include"KEYPAD_Private.h"



extern const u8 KEYPAD_LookUpTabel[KEYPAD_u8_ROW_NUM][KEYPAD_u8_COL_NUM];
extern const u8 KEYPAD_Rows_Config[KEYPAD_u8_ROW_NUM];
extern const u8 KEYPAD_Cols_Config[KEYPAD_u8_COL_NUM];



/*********************************************************************************/
/* Function: KPD_voidInit			                        				    **/
/* I/P Parameters: Nothing									          		    **/
/* Returns:it returns No thing                                				    **/
/* Desc:This Function initialize KEYPAD								       	    **/
/*********************************************************************************/


void KPD_voidInit(void)
{
	u8 Local_u8Iterator=0;
	for(Local_u8Iterator=0;Local_u8Iterator<KEYPAD_u8_ROW_NUM;Local_u8Iterator++)
	{
		DIO_enuSetPinDirectionInput(KEYPAD_Rows_Config[Local_u8Iterator]);
	}
	
	for(Local_u8Iterator=0;Local_u8Iterator<KEYPAD_u8_COL_NUM;Local_u8Iterator++)
	{
		DIO_enuSetPinDirectionOutput(KEYPAD_Cols_Config[Local_u8Iterator]);
	}
	
	
	if(KEYPAD_INPUT_STATE==PULL_UP)
		{
				for(Local_u8Iterator=0;Local_u8Iterator<KEYPAD_u8_ROW_NUM;Local_u8Iterator++)
				{
					DIO_enuSetPin(KEYPAD_Rows_Config[Local_u8Iterator]);
				}
				
				for(Local_u8Iterator=0;Local_u8Iterator<KEYPAD_u8_COL_NUM;Local_u8Iterator++)
				{
					DIO_enuSetPin(KEYPAD_Cols_Config[Local_u8Iterator]);
				}
		}
				
	else{
				for(Local_u8Iterator=0;Local_u8Iterator<KEYPAD_u8_ROW_NUM;Local_u8Iterator++)
				{
					DIO_enuClearPin(KEYPAD_Rows_Config[Local_u8Iterator]);
				}
				
				for(Local_u8Iterator=0;Local_u8Iterator<KEYPAD_u8_COL_NUM;Local_u8Iterator++)
				{
					DIO_enuClearPin(KEYPAD_Cols_Config[Local_u8Iterator]);
				}
		
		
	
		}
}

/*********************************************************************************/
/* Function: KPD_u8GetPressedKey	                        				    **/
/* I/P Parameters: Nothing									          		    **/
/* Returns:it returns u8	                                				    **/
/* Desc:This Function used to get the value of the pressed key		       	    **/
/*********************************************************************************/
KEYPAD_tenuErrorStatus KPD_u8GetPressedKey (u8 *PAu8KpdValue )
{
	u8  Local_u8ColIterator,
		Local_u8RowIterator,
		Key_Flag=Key_Not_Pressed;
	*PAu8KpdValue=0xFF;
	u8 *Local_PtrPinValue;

	KEYPAD_tenuErrorStatus Error=KEYPAD_OK;
	
	if(PAu8KpdValue==NULL)
	{
		Error=KEYPAD_NOK;
		
	}

	if(KEYPAD_INPUT_STATE==PULL_UP)
	{
		
		for(Local_u8ColIterator=0;Local_u8ColIterator<KEYPAD_u8_COL_NUM;Local_u8ColIterator++)
		{
			DIO_enuClearPin(KEYPAD_Cols_Config[Local_u8ColIterator]);
			
			for(Local_u8RowIterator=0;Local_u8RowIterator<KEYPAD_u8_ROW_NUM;Local_u8RowIterator++)
			{
				DIO_enuGetPin(KEYPAD_Rows_Config[Local_u8RowIterator],Local_PtrPinValue);
				if(*Local_PtrPinValue==DIO_enuLow)
				{
					DIO_enuGetPin(KEYPAD_Rows_Config[Local_u8RowIterator],Local_PtrPinValue);
					while(*Local_PtrPinValue==DIO_enuLow)
					{
						DIO_enuGetPin(KEYPAD_Rows_Config[Local_u8RowIterator],Local_PtrPinValue);
						
					}
					
					*PAu8KpdValue=KEYPAD_LookUpTabel[Local_u8RowIterator][Local_u8ColIterator];
					Key_Flag=Key_Pressed;
					break;
					
				}
			}
			
			
			DIO_enuSetPin(KEYPAD_Cols_Config[Local_u8ColIterator]);
			if(	Key_Flag==Key_Pressed)
			{
				break;
			}
		}
		
	}
	
	
	else
	{
		for(Local_u8ColIterator=0;Local_u8ColIterator<KEYPAD_u8_COL_NUM;Local_u8ColIterator++)
		{
			DIO_enuSetPin(KEYPAD_Cols_Config[Local_u8ColIterator]);
			
			for(Local_u8RowIterator=0;Local_u8RowIterator<KEYPAD_u8_ROW_NUM;Local_u8RowIterator++)
			{
				DIO_enuGetPin(KEYPAD_Rows_Config[Local_u8RowIterator],Local_PtrPinValue);
				if(*Local_PtrPinValue==DIO_enuHigh)
				{
					DIO_enuGetPin(KEYPAD_Rows_Config[Local_u8RowIterator],Local_PtrPinValue);
					while(*Local_PtrPinValue==DIO_enuHigh)
					{
						DIO_enuGetPin(KEYPAD_Rows_Config[Local_u8RowIterator],Local_PtrPinValue);
						
					}
					
					*PAu8KpdValue=KEYPAD_LookUpTabel[Local_u8RowIterator][Local_u8ColIterator];
					Key_Flag=Key_Pressed;
					break;
					
				}
			}
			
			
			DIO_enuClearPin(KEYPAD_Cols_Config[Local_u8ColIterator]);
			if(	Key_Flag==Key_Pressed)
			{
				break;
			}
		}
		
	
	
	}
	
	return Error;
}