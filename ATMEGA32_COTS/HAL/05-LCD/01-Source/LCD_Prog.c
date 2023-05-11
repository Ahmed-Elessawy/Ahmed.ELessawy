/*******************************5*******************************/
/* Author: Ahmed Elessawy Rashid                              */
/* Date: 10-Feb-2023                                          */
/* Version: 01                                                */
/* Description: Prog file for ِLCD Driver	  			  	  */
/**************************************************************/

#include"Std_Types.h"
#include"Macros.h"
#include<util/delay.h>
#include"LCD_Private.h"
#include"LCD_Interface.h"
#include"LCD_Config.h"


extern const u8 LCD_arPins[LCD_NumberOfPins];

static void Write(u8 Cpy_u8Data);

/*********************************************************************************/
/* Function: lcd_vInit                        				    				  **/
/* I/P Parameters:Nothing														  **/
/* Returns:Nothing							                               	      **/
/* Desc:This Function inits the lcd_vInit										  **/
/***********************************************************************************/
void lcd_vInit()
{

	u8 Loc_Iter=0;
	for(Loc_Iter=0;Loc_Iter<LCD_NumberOfPins ;Loc_Iter++)
	{
		DIO_enuSetPinDirectionOutput(LCD_arPins[Loc_Iter]);
	}

	_delay_ms(50);
	LCD_enuSendCommand (LCD_u8_INIT_FUNCTION_SET);
	_delay_ms(2);
	LCD_enuSendCommand (LCD_u8_INIT_DISPLAY_CONTROL);
	_delay_ms (2);
	LCD_enuSendCommand (LCD_u8_CLEAR);
	_delay_ms (2);
	
}
/*********************************************************************************/


/*********************************************************************************/
/* Function: lcd_Send Command                        				    		  **/
/* I/P Parameters:Command to be send											  **/
/* Returns:error state							                               	  **/
/* Desc:This Function sends Command to the lcd									  **/
/***********************************************************************************/
LCD_enuErrorStatus_t LCD_enuSendCommand (u8 Copy_u8Command)
{
	
	DIO_enuClearPin(LCD_u8_RS_PIN);
	Write(Copy_u8Command);
	
}	
/*********************************************************************************/



/*********************************************************************************/
/* Function: lcd_Send Data                        				    			  **/
/* I/P Parameters:Data to be send											      **/
/* Returns:error state							                               	  **/
/* Desc:This Function sends data to the lcd										  **/
/***********************************************************************************/
LCD_enuErrorStatus_t lcd_enuSendData  (u8 Copy_u8Data)
{
	
	DIO_enuSetPin(LCD_u8_RS_PIN);
	Write(Copy_u8Data);
	


}	
/*********************************************************************************/


/*********************************************************************************/
/* Function: lcd_enuWriteString                        				    		  **/
/* I/P Parameters:pointer to string 											  **/
/* Returns:error state							                               	  **/
/* Desc:This Function display a string on the lcd								  **/
/***********************************************************************************/
LCD_enuErrorStatus_t lcd_enuWriteString(u8 *Add_Pu8String)
{
	u8 Loc_Iter=0;
	DIO_enuSetPin(LCD_u8_RS_PIN);
	while(Add_Pu8String[Loc_Iter]!='\0')
	{
		Write(Add_Pu8String[Loc_Iter]);
		Loc_Iter++;
	}
	
}
/*********************************************************************************/




/*********************************************************************************/
/* Function: lcd_enuWriteNum                        				    		  **/
/* I/P Parameters:Number to be displayed									      **/
/* Returns:error state							                               	  **/
/* Desc:This Function writes a number on the lcd								  **/
/***********************************************************************************/
LCD_enuErrorStatus_t lcd_enuWriteNum(f32 Copy_f32Number)
{
		u32 Loc_Float=((f32)Copy_f32Number-(u32)Copy_f32Number)*100;
		u32 Loc_Int=Copy_f32Number/1;
		
		u32 Copy_Number=Loc_Int/10;
		u32 Loc_Divisor=1;
		
		DIO_enuSetPin(LCD_u8_RS_PIN);
		
	if(Loc_Int==0)
	{
		Write('0');
	}
	
	

	
	
	
	
	else
	{
		
		while(Copy_Number)
		{
			Loc_Divisor*=10;
			Copy_Number/=10;
		}

		while(Loc_Divisor)
		{
			Write((Loc_Int/Loc_Divisor)+'0');
			Loc_Int%=Loc_Divisor;
			Loc_Divisor/=10;
		}
	}
		Write(46);
		Copy_Number=Loc_Float/10;
		Loc_Divisor=1;
		while(Copy_Number)
		{
			Loc_Divisor*=10;
			Copy_Number/=10;
		}

		while(Loc_Divisor)
		{
			Write((Loc_Float/Loc_Divisor)+'0');
			Loc_Float%=Loc_Divisor;
			Loc_Divisor/=10;
		}
		

}
/*********************************************************************************/


/*********************************************************************************/
/* Function: lcd_LCD_enuGotoXY                        				    		  **/
/* I/P Parameters:Xpos(1,2),YPos(0....15)											  **/
/* Returns:error state							                               	  **/
/* Desc:This Function go to positin secified by x and y							  **/
/***********************************************************************************/
LCD_enuErrorStatus_t LCD_enuGotoXY(u8 Copy_u8XPos, u8 Copy_u8YPos)
{
	if(Copy_u8XPos==1)
	{
		LCD_enuSendCommand(LCD_u8_FirstRow+Copy_u8YPos);
	}
	else
	{
		LCD_enuSendCommand(LCD_u8_SecondRow+Copy_u8YPos);
	}
	
	
}
/*********************************************************************************/

/*********************************************************************************/
/* Function: LCD_enuWriteSpecialPattern                        			        **/
/* I/P Parameters: pointer to the Pattern,BlockNum,XPos,YPos					**/
/* Returns:error state							                               	    **/
/* Desc:This Function writes a special pattern								    **/
/***********************************************************************************/
LCD_enuErrorStatus_t LCD_enuWriteSpecialPattern  (u8* Add_pu8Pattern, u8 Copy_u8BlockNum, u8 Copy_u8XPos, u8 Copy_u8YPos)
{
	u8 Loc_u8Iter=0;
	u8 Loc_Address=Copy_u8BlockNum*8;
	LCD_enuSendCommand(Loc_Address+64);
	
	
	for(Loc_u8Iter=0;Loc_u8Iter<8;Loc_u8Iter++)
	{
		lcd_enuSendData(Add_pu8Pattern[Loc_u8Iter]);
	}
	LCD_enuGotoXY(Copy_u8XPos,Copy_u8YPos);

	lcd_enuSendData(Add_pu8Pattern[Copy_u8BlockNum]);	
}
/*************************************************************************************/




static void Write(u8 Cpy_u8Data)

{

	DIO_enuClearPin(LCD_u8_RW_PIN);
	DIO_enuClearPin(LCD_u8_E_PIN);
	
	DIO_enuSetPinValue(LCD_u8_D0_PIN,(Cpy_u8Data>>0)&0x01);
	DIO_enuSetPinValue(LCD_u8_D1_PIN,(Cpy_u8Data>>1)&0x01);
	DIO_enuSetPinValue(LCD_u8_D2_PIN,(Cpy_u8Data>>2)&0x01);
	DIO_enuSetPinValue(LCD_u8_D3_PIN,(Cpy_u8Data>>3)&0x01);
	DIO_enuSetPinValue(LCD_u8_D4_PIN,(Cpy_u8Data>>4)&0x01);
	DIO_enuSetPinValue(LCD_u8_D5_PIN,(Cpy_u8Data>>5)&0x01);
	DIO_enuSetPinValue(LCD_u8_D6_PIN,(Cpy_u8Data>>6)&0x01);
	DIO_enuSetPinValue(LCD_u8_D7_PIN,(Cpy_u8Data>>7)&0x01);
	
	DIO_enuSetPin(LCD_u8_E_PIN);
	_delay_ms(1);
	DIO_enuClearPin (LCD_u8_E_PIN);
	
	
}