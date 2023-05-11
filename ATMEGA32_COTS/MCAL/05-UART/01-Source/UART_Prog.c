
//#include"Std_Types.h"
#include"UART_Private.h"
#include"UART_Interface.h"
#include"UART_Config.h"

extern const UART_Config_t UART_Cfg_t;



UART_Reg_t UART_Regs={(volatile u8 * const  )UBRRL,(volatile u8 * const )UBRRH_UCSRC,(volatile u8 * const)UCSRA,(volatile u8 * const)UCSRB,(volatile u8 * const)UDR};

static void (*CBF_Ptr[3])(void)={NULL};

static void (*CBF_TxEOJ)(void);
static void (*CBF_RxEOJ)(void);


static u8 *TransmittedData;
static u8 *RecievedData;
static u8 RecivedDataSize;
static u8 SendDataIndex=0;
static u8 RecivedDataIndex=0;

static u8 PeriodicRxINT=0;
static u8 PeriodicEmpytyINT=0;
static u8 AsynchState=0;
void UART_vInit(void)
{
	
	*UART_Regs[UBRRH_UCSRC]|=UCSRC_ENABLE;
	*UART_Regs[UBRRH_UCSRC]|=((UART_Cfg_t.UART_u8CharSize&0x03)<<1)|(UART_Cfg_t.UART_u8StopBit)|(UART_Cfg_t.UART_u8ParityMode)
				|(UART_Cfg_t.UART_u8Mode)|(UART_Cfg_t.UART_Polarity);
				
				
	*UART_Regs[UBRRL]=UART_Cfg_t.UART_u16BaudeRate;
	
	*UART_Regs[UCSRB]|=RX_TX_ENABLE|((UART_Cfg_t.UART_u8CharSize&0x04)<<2);
}


void UART_enuSendByteSynch(u8 Cpy_u8Data)
{
	
	while(!(*UART_Regs[UCSRA]&(UDRE)));
	*UART_Regs[UDR]=Cpy_u8Data;
}


void UART_enuRecieveByteSynch(u8 *Cpy_pu8Data)
{
	
	while(!(*UART_Regs[UCSRA]&(RXC)));
	*Cpy_pu8Data=*UART_Regs[UDR];
	
}


void UART_enuSendStreamAsynch(u8 *Cpy_u8Data,void (*CBF_Tx)(void))
{
	if(Cpy_u8Data)
	{
		TransmittedData=Cpy_u8Data;
		SendDataIndex=0;
		*UART_Regs[UCSRB]|=UDRIE;
		if(CBF_Tx)
		{
		CBF_TxEOJ=CBF_Tx;
		}
	}
	else
	{
		
	}
}

void UART_enuRecieveStreamAsynch(u8 *Cpy_pu8Data,u8 Cpy_u8MsgSize,void (*CBF_Rx)(void))
{
	
	if(Cpy_pu8Data)
	{
		RecievedData=Cpy_pu8Data;
		RecivedDataIndex=0;
		RecivedDataSize=Cpy_u8MsgSize;
		*UART_Regs[UCSRB]|=UDRIE;
		
		if(CBF_Rx)
		{
			CBF_RxEOJ=CBF_Rx;
		}
		
	}
	else
	{
		
	}
	
}




void SetTxCBF (void (*CBF_Tx) (void))
{
	if(CBF_Tx)
	{
		CBF_Ptr[Tx]=CBF_Tx;
	}
}

void SetRxCBF (void (*CBF_Rx) (void))
{
	if(CBF_Rx)
	{
		CBF_Ptr[Rx]=CBF_Rx;
		PeriodicRxINT=1;
		
	}
	else
	{
		PeriodicRxINT=0;
	}
}
void SetEmptyCBF (void (*CBF_Empyty) (void))
{
	if(CBF_Empyty)
	{
		CBF_Ptr[Empty]=CBF_Empyty;
		PeriodicEmpytyINT=1;
	}
	else
	{
		PeriodicEmpytyINT=0;
	}
}



void __vector_13 (void)
{
	if(AsynchState)
	{
		if(TransmittedData[SendDataIndex]!='\0')
		{
		*UART_Regs[UDR]=TransmittedData[SendDataIndex];
		SendDataIndex++;
		}
		else
		{
			if(CBF_TxEOJ)
			{
				CBF_TxEOJ();
			}	
			SendDataIndex=0;
			AsynchState=0;
		}
	}
	
	if(PeriodicEmpytyINT)
	{
		CBF_Ptr[Empty]();
	}
		
}


void __vector_14 (void)
{
	
	if(RecivedDataIndex!=RecivedDataSize)
	{
		RecievedData[RecivedDataIndex]=*UART_Regs[UDR];
		RecivedDataIndex++;
	}
	else
	{
			if(CBF_RxEOJ)
			{
			   CBF_RxEOJ();
			}
			RecivedDataIndex=0;
			*UART_Regs[UCSRB]&=(~UDRIE);
	}
	
	if(PeriodicRxINT)
	{
		CBF_Ptr[Rx]();
	}
	
}