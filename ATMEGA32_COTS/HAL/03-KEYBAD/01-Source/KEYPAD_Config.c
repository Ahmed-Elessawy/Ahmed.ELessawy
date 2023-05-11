/**********************************************************/
/* Author: Ahmed Elessawy Rashid                          */
/* Date: 31-Jan-2023                                        */
/* Version: 01                                            */
/* Description: Configuration C file for KPD Driver    			  */
/**********************************************************/

#include"Std_Types.h"
#include"Macros.h"
#include"KEYPAD_Config.h"



const u8 KEYPAD_Rows_Config[KEYPAD_u8_ROW_NUM]=
{
	KEYPAD_ROW0_PIN,
    KEYPAD_ROW1_PIN,
    KEYPAD_ROW2_PIN,
    KEYPAD_ROW3_PIN
};


const u8 KEYPAD_Cols_Config[KEYPAD_u8_COL_NUM]=
{
	KEYPAD_COL0_PIN,
    KEYPAD_COL1_PIN,
    KEYPAD_COL2_PIN
};


const u8 KEYPAD_LookUpTabel[KEYPAD_u8_ROW_NUM][KEYPAD_u8_COL_NUM]=
{
	
	{7,8,9},
	{4,5,6},
	{1,2,3},
	{'*',0,'='}
};






