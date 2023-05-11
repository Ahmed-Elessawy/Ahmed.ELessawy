//Author : Ahmed Elessawy  rem :you can write what you want to be written every time you create a file here


#include"USART_Private.h"
#include"USART_Interface.h"

extern const UASRT_Cfg_t  UASRT_CfgAr[NUMBER_OF_USART];

USART_Reg_t *Usart_Reg_t[NUMBER_OF_USART]={(USART_Reg_t)USART1,(USART_Reg_t)USART2,(USART_Reg_t)USART6};

u16 *TxBuffer;
u16 TxSize=0;
u16 TxIndex=0;
u8  TxStatus=Idle; 


u16 *RxBuffer;
u16 RxSize=0;
u16 RxIndex=0;
u8  RxStatus=Idle;

void (*TxCbf)(void);
void (*RxCbf)(void);






void USART_vInit(void)
{
	u8 Loc_u8Iter;
	u32 Loc_u32Temp;
	for(Loc_u8Iter=0;Loc_u8Iter<NUMBER_OF_USART;Loc_u8Iter++)
		{
		Loc_u32Temp=UASRT_CfgAr[Loc_u8Iter].USART_EN|UASRT_CfgAr[Loc_u8Iter].USART_DataLen|
		UASRT_CfgAr[Loc_u8Iter].USART_Parity_EN|UASRT_CfgAr[Loc_u8Iter].USART_ParityOption|
		UASRT_CfgAr[Loc_u8Iter].TX_EN|UASRT_CfgAr[Loc_u8Iter].RX_EN|UASRT_CfgAr[Loc_u8Iter].OverSampleOption;
		Usart_Reg_t[Loc_u8Iter]->USART_CR1&=0;
		Usart_Reg_t[Loc_u8Iter]->USART_CR1=Loc_u32Temp;
		
		Loc_u32Temp=UASRT_CfgAr[Loc_u8Iter].USART_StopBitOption;
		Usart_Reg_t[Loc_u8Iter]->USART_CR2&=0;
		Usart_Reg_t[Loc_u8Iter]->USART_CR2=Loc_u32Temp;
		}
}
	

ErrorStatus_t USART_SendSynch(u16 cpy_u16Data,u32 cpy_u32UsartNu)
{
	ErrorStatus_t Status=OK;
	if(cpy_u32UsartNu!=0)
	{
		if(USART_SR_TX_READY)
		{
			(USART_Reg_t)cpy_u32UsartNu->USART_DR=cpy_u16Data;
		}
		else
		{
			Status=NOK;
		}
	}
	else
	{
		Status=NOK;
	}
	return Status;
}

ErrorStatus_t USART_RecieveSynch(u16 *cpy_u16Data,u32 cpy_u32UsartNu)
{
	ErrorStatus_t Status=OK;
	if(cpy_u32UsartNu!=0)
	{
		if(USART_SR_RX_READY)
		{
			*cpy_u16Data=(USART_Reg_t)cpy_u32UsartNu->USART_DR;
		}
		else
		{
			Status=NOK;
		}
	}
	else
	{
		Status=NOK;
	}
	return Status;
}


ErrorStatus_t USART_SendAsynch(u16 *ZeroCpy_u16Data,u32 UsartNu,u16 cpy_u16Size)

{
	
	ErrorStatus_t Status=OK;;
	if(UsartNu!=0)
	{
		if(TxStatus==Idle)
		{
			TxStatus=Busy;	
			TxBuffer=ZeroCpy_u16Data;
			TxSize=cpy_u16Size;
			TxIndex=0;
			(USART_Reg_t)cpy_u32UsartNu->USART_DR=TxBuffer[TxIndex];
			(USART_Reg_t)cpy_u32UsartNu->USART_CR1|=USART_CR1_TX_INT_ENABLE;
		}
		else
		{
			Status=NOK;
			
		}
	}
	else
	{
		
		Status=NOK;
	}
		
	return Status;
	
}


ErrorStatus_t UART_RecieveAsynch(u16 *ZeroCpy_u16Data,u32 UsartNu,u16 cpy_u16Size)

{
	ErrorStatus_t Status=OK;
	if(ZeroCpy_u16Data!=0)
	{
		if(RxStatus==Idle)
		{
			RxStatus=Busy;
			RxBuffer=ZeroCpy_u16Data;
			RxSize=cpy_u16Size;
			RxIndex=0;
			(USART_Reg_t)(UsartNu->USART_SR)&=~(USART_SR_RX_READY);
			(USART_Reg_t)cpy_u32UsartNu->USART_CR1|=USART_CR1_RX_INT_ENABLE;
		}
		else
		{
			Status=NOK;
		}
	}
	else
	{
		
		Status=NOK;
	}
}

ErrorStatus_t USART_SetTxCBF(void (*TxCbfHandler)(void))
{
	ErrorStatus_t Status=OK;
	if(TxCbfHandler!=0)
	{
		TxCbf=TxCbfHandler;
	}
	else
	{
		Status=NOK;
	}
	return Status;
}

ErrorStatus_t USART_SetRxCBF(void (*RxCbfHandler)(void))
{
	ErrorStatus_t Status=OK;
	if(RxCbfHandler!=0)
	{
		RxCbf=RxCbfHandler;
	}
	else
	{
		Status=NOK;
	}
	return Status;
}


UART_HAndler()
{
	if(USART_SR_TX_READY)
	{
	if(TxIndex<TxSize)
	{
		TxIndex++;
		(USART_Reg_t)cpy_u32UsartNu->USART_DR=TxBuffer[TxIndex];
	}
	else
	{
		TxIndex=0;
		TxStatus=Idle
		(USART_Reg_t)cpy_u32UsartNu->USART_CR1&=(~USART_CR1_TX_INT_ENABLE);
		TxCbf();
	}
	}
	else
	{
		
	}
	
	
	if(RxIndex && RxStatus==Busy)
	{
		if(RxIndex<RxSize)
		{
			RxIndex++;
			RxBuffer[RxIndex]=(USART_Reg_t)cpy_u32UsartNu->USART_DR;
		}
		else
		{
			RxIndex=0;
			RxStatus=Idle;
			(USART_Reg_t)cpy_u32UsartNu->USART_CR1&=(~USART_CR1_RX_INT_ENABLE);
			TxCbf();
		}
	}
	
	else
	{
		
	}
	
		
}