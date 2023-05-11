/**************************************************************/
/* Author: Ahmed Elessawy Rashid                              */
/* Date: 10-Feb-2023                                          */
/* Version: 01                                                */
/* Description: Interface file for ِLCD Driver	  			  */
/**************************************************************/

#ifndef LCD_INTERFACE_H
#define LCD_INERFACAE_H
/*********************************Includes*******************************************/















/************************************************************************************/
/***********************************Defines******************************************/













/************************************************************************************/


/*********************************Defined Data types**********************************/

typedef enum 
{
	LCD_StateOK=0,
	LCD_StateNOK
	
}LCD_enuErrorStatus_t;











/*************************************************************************************/

/*********************************APIs************************************************/


/*********************************************************************************/
/* Function: lcd_vInit                        				    				  **/
/* I/P Parameters:Nothing														  **/
/* Returns:Nothing							                               	      **/
/* Desc:This Function inits the lcd_vInit										  **/
/***********************************************************************************/
void lcd_vInit();	
/*********************************************************************************/

/*********************************************************************************/
/* Function: lcd_enuWriteString                        				    		  **/
/* I/P Parameters:pointer to string 											  **/
/* Returns:error state							                               	  **/
/* Desc:This Function display a string on the lcd								  **/
/***********************************************************************************/
LCD_enuErrorStatus_t lcd_enuWriteString(u8 *Add_Pu8String);	
/*********************************************************************************/

/*********************************************************************************/
/* Function: lcd_vInit                        				    				  **/
/* I/P Parameters:Number to be displayed									      **/
/* Returns:error state							                               	  **/
/* Desc:This Function writeds a number on the lcd								  **/
/***********************************************************************************/
LCD_enuErrorStatus_t lcd_enuWriteNum(f32 Copy_u16Number);	
/*********************************************************************************/

/*********************************************************************************/
/* Function: LCD_enuWriteSpecialPattern                        			        **/
/* I/P Parameters: pointer to the Pattern,BlockNum,XPos,YPos					**/
/* Returns:error state							                               	    **/
/* Desc:This Function writes a special pattern								    **/
/***********************************************************************************/
LCD_enuErrorStatus_t LCD_enuWriteSpecialPattern  (u8* Add_pu8Pattern, u8 Copy_u8BlockNum, u8 Copy_u8XPos, u8 Copy_u8YPos);
/*************************************************************************************/


/*********************************************************************************/
/* Function: lcd_Send Data                        				    			  **/
/* I/P Parameters:Data to be send											      **/
/* Returns:error state							                               	  **/
/* Desc:This Function sends data to the lcd										  **/
/***********************************************************************************/
LCD_enuErrorStatus_t lcd_enuSendData     (u8 Copy_u8Data);	
/*********************************************************************************/


/*********************************************************************************/
/* Function: lcd_Send Command                        				    		  **/
/* I/P Parameters:Command to be send											  **/
/* Returns:error state							                               	  **/
/* Desc:This Function sends Command to the lcd									  **/
/***********************************************************************************/
LCD_enuErrorStatus_t LCD_enuSendCommand (u8 Copy_u8Command);	
/*********************************************************************************/


/*********************************************************************************/
/* Function: lcd_LCD_enuGotoXY                        				    		  **/
/* I/P Parameters:Xpos,YPos											  **/
/* Returns:error state							                               	  **/
/* Desc:This Function go to positin secified by x and y							  **/
/***********************************************************************************/
LCD_enuErrorStatus_t LCD_enuGotoXY      (u8 Copy_u8XPos, u8 Copy_u8YPos);
/*********************************************************************************/

#endif