//Author : Ahmed Elessawy 








typedef enum
{
	
	LCD_enuInitConfig=0,
	LCD_enuInitStartUp,
	LCD_enuInitFunSet,
	LCD_enuInitDisplayControl,
	LCD_enuInitClear,
	LCD_enuInitDone,
}LCD_enuInitState_t;

typedef enum{
    LCD_enuWriteStart,
	LCD_enuWriteDone,
    LCD_enuWriteSetPosition,
    LCD_enuWriteCharacter 
}LCD_enuWrite_t;


typedef enum{
    LCD_enuOK,
    LCD_enuErrorNULLPointer,
    LCD_enuErrorNOBuffer,
    LCD_enuErrorRowNumber,
    LCD_enuErrorColumnNumber
}LCD_enuErrorStatus_t;

typedef enum{
    LCD_enuReqIdle,
    LCD_enuReqWrite,
}LCD_enuRequest_t;

void Lcd_vInit(void);