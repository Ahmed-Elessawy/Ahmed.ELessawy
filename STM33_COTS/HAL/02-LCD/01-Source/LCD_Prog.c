//Author : Ahmed Elessawy  rem :you can write what you want to be written every time you create a file here



static LCD_enuInitState_t Lcd_InitState=LCD_enuInitConfig;
static LCD_enuWrite_t 	  Lcd_WriteState=LCD_enuWriteStart;	
static LCD_enuWrite_t     Lcd_WriteStr=LCD_enuWriteStart;
static LCD_enuRequest_t   Lcd_ReqState=LCD_enuReqIdle;

static u8 BusyFlag=0;




void Lcd_vInit(void)
{
	
	static StartUPCounter=0;
	switch(Lcd_InitState)
	{
		case LCD_enuInitConfig:
		/*Init Pin Config*/
		Lcd_InitState++;
		break;
		
		
		case LCD_enuInitStartUp:
		StartUPCounter++;
		if(StartUPCounter==25)
		{
			Lcd_InitState++;
			StartUPCounter=0;
		}
		else
		{
			
		}
		
		
		break;
		
		
		case LCD_enuInitFunSet:
		if(Lcd_WriteState!=LCD_enuWriteDone)
		{
			DIO_enuClearPin(LCD_u8_RS_PIN);
			Write (LCD_u8_INIT_FUNCTION_SET);
		}
		else
		{
			Write (LCD_u8_INIT_FUNCTION_SET);
			Lcd_InitState++;
		}
		break;
		
		
		
		case LCD_enuInitDisplayControl:
		if(Lcd_WriteState!=LCD_enuWriteDone)
		{
			DIO_enuClearPin(LCD_u8_RS_PIN);
			Write (LCD_u8_INIT_DISPLAY_CONTROL);
		}
		else
		{
			Write (LCD_u8_INIT_DISPLAY_CONTROL);
			Lcd_InitState++;
		}
		break;
		
		case LCD_enuInitClear:
		if(Lcd_WriteState!=LCD_enuWriteDone)
		{
			DIO_enuClearPin(LCD_u8_RS_PIN);
			Write (LCD_u8_CLEAR);
		}
		else
		{
			Write (LCD_u8_CLEAR);
			Lcd_InitState++;
		}
		break;
	}	
		

}






void Lcd_vTask(void)
{
	
	if(Lcd_InitState!=LCD_enuInitDone)
	{
		Lcd_vInit();
	}
	if(Lcd_ReqState==LCD_enuReqIdle)
	{
		BusyFlag=0;
	}
	
	else
	{
		BusyFlag=1;
	}
	
}


LCD_enuErrorStatus_t Lcd_WriteString(u8 *String,u8 Size,u8 PosX,u8 PosY)
{
	if(BusyFlag==0)
	{
	Lcd_ReqState=LCD_enuReqWrite;
	static u8 Loc_u8Iter=0;
	switch(Lcd_WriteStr)
	{
			case LCD_enuWriteStart:
			LCD_enuGotoXY(PosX,PosY);
			Lcd_WriteStr=LCD_enuWriteSetPosition;
			break;
			
			case LCD_enuWriteSetPosition:
			LCD_enuGotoXY(PosX,PosY);
			break;
			
			
			case LCD_enuWriteCharacter:
			if(Lcd_WriteState!=LCD_enuWriteDone)
			{
				DIO_enuSetPin(LCD_u8_RS_PIN);
				Write(String[Loc_u8Iter));
			}
			else
			{
				Write(String[Loc_u8Iter));
				Loc_u8Iter++;
			}
			if(Loc_u8Iter==Size-1)
			{
				Loc_u8Iter=0;
				Lcd_WriteStr=LCD_enuWriteDone;
			}
			break;
	}
	
	}
	
}




static void Write(u8 Cpy_u8Data)

{
	switch(Lcd_WriteState)
	{
		
	case LCD_enuWriteStart:	
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
	Lcd_WriteState++;
	break;
	
	case LCD_enuWriteDone:
	//_delay_ms(1);
	DIO_enuClearPin (LCD_u8_E_PIN);
	Lcd_WriteState=LCD_enuWriteStart;
	break;
	}	
}




LCD_enuErrorStatus_t LCD_enuGotoXY(u8 Copy_u8XPos, u8 Copy_u8YPos)
{
	if(Copy_u8XPos==1)
	{
		DIO_enuClearPin(LCD_u8_RS_PIN);
		Write(LCD_u8_FirstRow+Copy_u8YPos);
	}
	else
	{
		DIO_enuClearPin(LCD_u8_RS_PIN);
		Write(LCD_u8_SecondRow+Copy_u8YPos);
	}
	
	
}