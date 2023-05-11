#include"GPIO_Interface.h"
#include"LCDv1_Private.h"
#include"LCDv1_Interface.h"
#include"LCDv1_Config.h"

#define WAITINGTIME_MS   45


extern const LCD_cfg_t LcdCfg_t[NumberOfLcds];
extern const Lcd_Operation_Cfg_t LcdOpCfg_t[NumberOfLcds];

LCD_enuInit_t Lcd_InitState  =LCD_enuInitPins;
LcdEN_Pin     Lcd_EN_PinState=LCD_EN_PIN_ON;
LcdEN_Pin	  Lcd_WritingEN_State=LCD_EN_PIN_ON;
	
LcdStatus_t LcdWriteStatus=LCD_Idle;

Lcd_WritingStatus_t LcdWritingState=Lcd_SetPosition;	

typedef struct
{
	Lcd_StringHandler_t Lcd_StringInfo;
	u8 State;
}Lcd_StringInfo_t;

Lcd_StringInfo_t LcdStringsInfoBuffer[BufferSize];

u8 Static CurrentString=0;

/*********************************************************************************/
/* Function: lcd_vInit                        				    				  **/
/* I/P Parameters:Nothing														  **/
/* Returns:Nothing							                               	      **/
/* Desc:This Function inits the lcd_vInit										  **/
/***********************************************************************************/
void lcd_vInit()
{
	
	u8 Loc_u8LcdIter;
	u8 Loc_u8DataIter;
    gpio_cfg_t Loc_Temp;
	static u8 Loc_u8InitCounter=0;
	
	
	
	
	switch(Lcd_InitState)
	{
		
			case LCD_enuInitPins:
			for(Loc_u8LcdIter=0;Loc_u8LcdIter<NumberOfLcds;Loc_u8LcdIter++)
			{
			Loc_Temp.pin_Port =LcdCfg_t[Loc_u8LcdIter].Lcd_RS_Pin.pin_Port; 
			Loc_Temp.pin_Num  =LcdCfg_t[Loc_u8LcdIter].Lcd_RS_Pin.pin_Num  ;
			Loc_Temp.pin_Speed=LcdCfg_t[Loc_u8LcdIter].Lcd_RS_Pin.pin_Speed;
			Loc_Temp.pin_Mode =LcdCfg_t[Loc_u8LcdIter].Lcd_RS_Pin.pin_Mode ;
			
			gpio_vInit(&Loc_Temp);
			
			
			Loc_Temp.pin_Port =LcdCfg_t[Loc_u8LcdIter].Lcd_EN_Pin.pin_Port;
			Loc_Temp.pin_Num  =LcdCfg_t[Loc_u8LcdIter].Lcd_EN_Pin.pin_Num  ;
			Loc_Temp.pin_Speed=LcdCfg_t[Loc_u8LcdIter].Lcd_EN_Pin.pin_Speed;
			Loc_Temp.pin_Mode =LcdCfg_t[Loc_u8LcdIter].Lcd_EN_Pin.pin_Mode ;
			
			gpio_vInit(&Loc_Temp);
			
			Loc_Temp.pin_Port =LcdCfg_t[Loc_u8LcdIter].Lcd_RW_Pin.pin_Port ; 
			Loc_Temp.pin_Num  =LcdCfg_t[Loc_u8LcdIter].Lcd_RW_Pin.pin_Num  ;
			Loc_Temp.pin_Speed=LcdCfg_t[Loc_u8LcdIter].Lcd_RW_Pin.pin_Speed;
			Loc_Temp.pin_Mode =LcdCfg_t[Loc_u8LcdIter].Lcd_RW_Pin.pin_Mode ;
			
			gpio_vInit(&Loc_Temp);
			
			
			for(Loc_u8DataIter=0;Loc_u8DataIter<8;Loc_u8DataIter++)
			{
				Loc_Temp.pin_Port =LcdCfg_t[Loc_u8Iter].LCD_DataPins[Loc_u8DataIter].pin_Port; 
				Loc_Temp.pin_Num  =LcdCfg_t[Loc_u8Iter].LCD_DataPins[Loc_u8DataIter].pin_Num  ;
				Loc_Temp.pin_Speed=LcdCfg_t[Loc_u8Iter].LCD_DataPins[Loc_u8DataIter].pin_Speed;
				Loc_Temp.pin_Mode =LcdCfg_t[Loc_u8Iter].LCD_DataPins[Loc_u8DataIter].pin_Mode ;
				
				gpio_vInit(&Loc_Temp);
				
			}
			
			}
			Lcd_InitState++;
			break;
		
		case LCD_enuWaitingPower:
		
			if(Loc_u8InitCounter==45WAITINGTIME_MS)
			{
				Loc_u8InitCounter=0;
				Lcd_InitState++;
			}
			else
			{
				Loc_u8InitCounter++;
			}
			break;
			
		case LCD_enuInitStart:
			
			if(Lcd_EN_PinState==LCD_EN_PIN_ON)
			{
				LCD_enuSendCommand(LcdOpCfg_t[LCD0].LCD_u8_INIT_FUNCTION_SET);
				gpio_WritePinValue(LcdCfg_t[LCD0].Lcd_EN_Pin.pin_Port,LcdCfg_t[LCD0].Lcd_EN_Pin.pin_Num,HIGH);
				Lcd_EN_PinState=LCD_EN_PIN_OFF;
			}
			else
			{
				gpio_WritePinValue(LcdCfg_t[LCD0].Lcd_EN_Pin.pin_Port,LcdCfg_t[LCD0].Lcd_EN_Pin.pin_Num,LOW);
				Lcd_InitState++;
				Lcd_EN_PinState=LCD_EN_PIN_ON;
			}
			
			break;
		case LCD_enuInitFunctionSet:
			
			if(Lcd_EN_PinState==LCD_EN_PIN_ON)
			{
				LCD_enuSendCommand(LcdOpCfg_t[LCD0].LCD_u8_INIT_DISPLAY_CONTROL);
				gpio_WritePinValue(LcdCfg_t[LCD0].Lcd_EN_Pin.pin_Port,LcdCfg_t[LCD0].Lcd_EN_Pin.pin_Num,HIGH);
				Lcd_EN_PinState=LCD_EN_PIN_OFF;
			}
			else
			{
				gpio_WritePinValue(LcdCfg_t[LCD0].Lcd_EN_Pin.pin_Port,LcdCfg_t[LCD0].Lcd_EN_Pin.pin_Num,LOW);
				Lcd_InitState++;
				Lcd_EN_PinState=LCD_EN_PIN_ON;
			}
			
			break;
			
		case LCD_u8_INIT_DISPLAY_CONTROL:
			
			if(Lcd_EN_PinState==LCD_EN_PIN_ON)
			{
				LCD_enuSendCommand(LCD_u8_CLEAR);
				gpio_WritePinValue(LcdCfg_t[LCD0].Lcd_EN_Pin.pin_Port,LcdCfg_t[LCD0].Lcd_EN_Pin.pin_Num,HIGH);
				Lcd_EN_PinState=LCD_EN_PIN_OFF;
			}
			else
			{
				gpio_WritePinValue(LcdCfg_t[LCD0].Lcd_EN_Pin.pin_Port,LcdCfg_t[LCD0].Lcd_EN_Pin.pin_Num,LOW);
				Lcd_InitState++;
				Lcd_EN_PinState=LCD_EN_PIN_ON;
			}
			
			break;
	}
	
}
			

ErrorStatus_t lcd_DisplayString(const Lcd_StringHandler_t LcdStringHandler)
{
	u8 Loc_u8Iter;
	ErrorStatus_t Status=OK;
	for(Loc_u8Iter=0;Loc_u8Iter<BufferSize;Loc_u8Iter++)
	{
		if(LcdStringsInfoBuffer[Loc_u8Iter].State==Idle)
		{
			LcdStringsInfoBuffer[Loc_u8Iter].State=Busy;
			LcdStringsInfoBuffer[Loc_u8Iter].Lcd_StringInfo=LcdStringHandler;
		}
		else
		{
			Status=NOK;
		}
	}
	
	return Status;
	
}
	
void lcd_vTask(void)

{
	u8 Static CurrentString=0;
	u8 Static CurrentChar=0;
	if(Lcd_InitState!=Done)
	{
		lcd_vInit();
	}
	else
	{
		if(LcdStringsInfoBuffer[CurrentString].State==Busy)
		{
			switch (LcdWritingState)
			{
				case Lcd_SetPosition:
					if(Lcd_WritingEN_State==LCD_EN_PIN_ON)
					{
						LCD_enuGotoXY(LcdStringsInfoBuffer[CurrentString].Lcd_StringInfo->X_u8Pos,
						LcdStringsInfoBuffer[CurrentString].Lcd_StringInfo->Y_u8Pos);
						gpio_WritePinValue(LcdCfg_t[LCD0].Lcd_EN_Pin.pin_Port,LcdCfg_t[LCD0].Lcd_EN_Pin.pin_Num,HIGH);
						Lcd_EN_PinState=LCD_EN_PIN_OFF;
					}
					else
					{
						gpio_WritePinValue(LcdCfg_t[LCD0].Lcd_EN_Pin.pin_Port,LcdCfg_t[LCD0].Lcd_EN_Pin.pin_Num,LOW);
						LcdWritingState++;
						Lcd_WritingEN_State=LCD_EN_PIN_ON;
						
						/*set RS Pin once before writing*/
						gpio_WritePinValue(LcdCfg_t[LCD0].Lcd_RS_Pin.pin_Port,LcdCfg_t[LCD0].Lcd_RS_Pin.pin_Num,HIGH);
					}
					break;
				
				case Lcd_Writing:				
			
					if(CurrentChar<LcdStringsInfoBuffer[CurrentString].Lcd_StringInfo->Size)
					{
						if(Lcd_WritingEN_State==LCD_EN_PIN_ON)
						{
							lcd_enuSendData(LcdStringsInfoBuffer[CurrentString].Lcd_StringInfo->Str[CurrentChar];
							gpio_WritePinValue(LcdCfg_t[LCD0].Lcd_EN_Pin.pin_Port,LcdCfg_t[LCD0].Lcd_EN_Pin.pin_Num,HIGH);
							Lcd_EN_PinState=LCD_EN_PIN_OFF;
						}
						else
						{
							gpio_WritePinValue(LcdCfg_t[LCD0].Lcd_EN_Pin.pin_Port,LcdCfg_t[LCD0].Lcd_EN_Pin.pin_Num,LOW);
							Lcd_WritingEN_State=LCD_EN_PIN_ON;
							CurrentChar++;
						}
					
					}
					else
					{
						CurrentChar=0;
						LcdWritingState=Lcd_SetPosition;
						LcdStringsInfoBuffer[CurrentString].State=Idle;
						CurrentString++;
						CurrentString%=BufferSize;
					}
					
					break;
					
			
					
			}
					
			
		}
		else
		{
			/*Idle No Requests*/
		}
	}
}	
	



LCD_enuErrorStatus_t lcd_enuSendData(u8 Copy_u8Data)
{
	
	gpio_WritePinValue(LcdCfg_t[LCD0].Lcd_RS_Pin.pin_Port,LcdCfg_t[LCD0].Lcd_RS_Pin.pin_Num,HIGH);
	Write(Copy_u8Data);

}	

LCD_enuErrorStatus_t LCD_enuSendCommand (u8 Copy_u8Command)
{
	
	gpio_WritePinValue(LcdCfg_t[LCD0].Lcd_RS_Pin.pin_Port,LcdCfg_t[LCD0].Lcd_RS_Pin.pin_Num,LOW);
	Write(Copy_u8Command);
	
}	



static void Write(u8 Cpy_u8Data)

{
	u8 Loc_u8Iter;

	gpio_WritePinValue(LcdCfg_t[LCD0].Lcd_RW_Pin.pin_Port,LcdCfg_t[LCD0].Lcd_RW_Pin.pin_Num,LOW);
	gpio_WritePinValue(LcdCfg_t[LCD0].Lcd_EN_Pin.pin_Port,LcdCfg_t[LCD0].Lcd_EN_Pin.pin_Num,LOW);
	
	for(Loc_u8Iter=0;Loc_u8Iter<8;Loc_u8Iter++)
	{
		gpio_WritePinValue(LcdCfg_t[LCD0].LCD_DataPins[Loc_u8Iter].pin_Port,
		LcdCfg_t[LCD0].LCD_DataPins[Loc_u8Iter].pin_Num,
		(Cpy_u8Data>>Loc_u8Iter)&0x01);
	}		

}

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