#include"Std_Types.h"

#include"SPI_Private.h"
#include"SPI_Interface.h"
#include"SPI_Config.h"

#define  NULL ((void *)0)





 void (*CBF_SendHandler)(void);

 void (*CBF_RecieveHandler)(void);

//MessageInfo_t MessageBuff[BUFFER_SIZE];
/*
u8 CurrentString=0;



u8 *MOSI_Buffer;
u8 MOSI_Index=0;
u8 MOSI_Size=0;
SPI_Status MOSI_Status=Idle;

u8 *MISO_Buffer;
*/


Q_Spi SpiRingBuffer;

Q_SpiHandler RingBufferHandler=&SpiRingBuffer;
u8 FirstTime=0;

static u8 Flag=0;

SPI_RegHandler_t Spi_Reg_t = ((SPI_RegHandler_t) SPI_BASE_ADDRESS);

 static   SendMsg_t Temp;
static   SendMsgHandler_t CurrentHandledMsg=&Temp;

volatile static  u8 CurrentChar=0;
void spi_vInit(SPI_CfgHandler_t SPI_CfgHandler)

{
	u8 Loc_u8Iter;
	u8 Loc_u8Temp=0;
	Loc_u8Temp=SPI_CfgHandler->SPI_INT_u8En|
			   SPI_CfgHandler->SPI_u8DataOrder|
               SPI_CfgHandler->SPI_u8Mode|
               SPI_CfgHandler->SPI_u8ClkPolarity|
               SPI_CfgHandler->SPI_u8ClkPhase|
               SPI_CfgHandler->SPI_u8ClkRate;
			   
	//Spi_Reg_t->SPI_SPCR&=0;
	Spi_Reg_t->SPI_SPCR|=Loc_u8Temp;
	
	Q_Init(RingBufferHandler);
	
}




void spi_Enable(void)

{
	Spi_Reg_t->SPI_SPCR|=SPI_EN;
}

void spi_Disable(void)

{
	Spi_Reg_t->SPI_SPCR&=(~SPI_EN);
}

ErrorStatus_t spi_DoubleSpeed(void)

{
	Spi_Reg_t->SPI_SPSR|=SPI_TWO_X;
}
	
ErrorStatus_t spi_NormalSpeed(void)

{
	Spi_Reg_t->SPI_SPSR&=(~SPI_TWO_X);
}

ErrorStatus_t spi_enuSend(SendMsgHandler_t Msg)

{
	
	ErrorStatus_t Status=OK;
	Spi_Reg_t->SPI_SPCR|=SPI_INT_EN;
	if(Msg->SE!=NULL)
	{
		if(EnQ(RingBufferHandler,Msg))
		{
			
		}
		else
		{
			Status=NOK;
		}
		
		if(Flag==0)
		{
			
			Spi_Reg_t->SPI_SPDR=Msg->SE[0];
			CurrentChar=0;
			FirstTime=1;
		}
		else
		{
			
			FirstTime=0;
		}
		
		
		
		
		
		
		
		
		
	}
	
	
	else
	{
		Status=NOK;
	}
	
	
	return Status;

}	

/*
ErrorStatus_t spi_enuRecieve(u8 *Pu8_DataBuff,u8 Cpy_u8Size)
{
	ErrorStatus_t Status=OK;
	if(Pu8_DataBuff!=NULL)
	{
		if(MISO_Status==Idle)
		
		{
			MISO_Status=Busy;
			MISO_Buffer=Pu8_DataBuff;
			MISO_Size=Cpy_u8Size;
			MISO_Index=0;

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
*/


ErrorStatus_t spi_enuSetSendCBF(void (*CBF_Handler)(void))
{
	
	ErrorStatus_t Status=OK;
	if(CBF_Handler!=NULL)
	{
		CBF_SendHandler=CBF_Handler;
	}
	else
	{
		Status=NOK;
	}
	
	return Status;
}

ErrorStatus_t spi_enuSendSynch(u8 *StreamSend,u8 Size,u8 *StreamRecieve)
{
	u8 Loc_u8Iter;
	ErrorStatus_t Status=OK;
	if(StreamSend!=NULL && StreamRecieve!=NULL)
	{
	
	for(Loc_u8Iter=0;Loc_u8Iter<Size;Loc_u8Iter++)
	{
		Spi_Reg_t->SPI_SPDR=StreamSend[Loc_u8Iter];
		while(!(Spi_Reg_t->SPI_SPSR&SPI_INT_FLAG));
		Spi_Reg_t->SPI_SPSR|=SPI_INT_FLAG;
		StreamRecieve[Loc_u8Iter]=Spi_Reg_t->SPI_SPDR;
	}
	}
	else
	{
		Status=NOK;
	}
	return Status;
}

ErrorStatus_t spi_enuSetRecieveCBF(void (*CBF_Handler)(void))

{
	ErrorStatus_t Status=OK;
	if(CBF_Handler!=NULL)
	{
		
		CBF_RecieveHandler=CBF_Handler;
	}
	else
	{
		
		Status=NOK;
	}
	return Status;
}

void __vector_12 (void)
{
	Flag=1;

	if(FirstTime)
	{
		DeQ(RingBufferHandler,CurrentHandledMsg);
		//CurrentChar++;
	}
	
	if(CurrentChar<(CurrentHandledMsg->Size))
		{	
			
			
			Spi_Reg_t->SPI_SPDR=CurrentHandledMsg->SE[CurrentChar];
			CurrentChar++;	
			
		}
	else
		{
			CurrentChar=0;
			
			if(CurrentHandledMsg->EndOfJob!=NULL)
			{
					CurrentHandledMsg->EndOfJob();
			}
				
			
			if(IsEmpty(RingBufferHandler))
			{
				Flag=0;
			}
			
			else
			{
				DeQ(RingBufferHandler,CurrentHandledMsg);
				Spi_Reg_t->SPI_SPDR=CurrentHandledMsg->SE[0];
				//CurrentChar++;
			}
		}
	
	/*
	if(MISO_Status==Busy)
	{
		if((Spi_Reg_t->SPI_SPSR)&SPI_INT_FLAG)
		{
			if(MISO_Index<MISO_Size)
			{
				MISO_Buffer[MISO_Index]=Spi_Reg_t->SPI_SPDR;
				MISO_Index++;
			}
			else
			{
				if(CBF_RecieveHandler!=NULL)
				{
					CBF_RecieveHandler();
				}
				else
				{
					
				}
			}
		}
	}
		else
		{
			
		}
		*/
			
}



void Q_Init(Q_SpiHandler Qhandler)
{
	Qhandler->size=0;
	Qhandler->tail=0;
	Qhandler->head=0;
	
	for(int i=0;i<BUFFER_SIZE;i++)
	{
		Qhandler->Msgs[i].Size=0;
		Qhandler->Msgs[i].SE=NULL;
		Qhandler->Msgs[i].EndOfJob=NULL;
	}
}


u8 IsEmpty(Q_SpiHandler Qhandler)
{
	return Qhandler->size==0;
}

u8 IsFull(Q_SpiHandler Qhandler)
{
	return Qhandler->size==BUFFER_SIZE;
}

u8 EnQ(Q_SpiHandler Qhandler,SendMsgHandler_t MsgHandler)
{
	
	if(IsFull(Qhandler))
	{
		return 0;
	}
	
	else
	{
		Qhandler->Msgs[Qhandler->head].SE=MsgHandler->SE;
		Qhandler->Msgs[Qhandler->head].Size=MsgHandler->Size;
		Qhandler->Msgs[Qhandler->head].EndOfJob=MsgHandler->EndOfJob;
		//Qhandler->[MsgHandler->head].
		Qhandler->head++;
		Qhandler->head%=BUFFER_SIZE;
		Qhandler->size++;
		return 1;
	}
	
}

u8 DeQ(Q_SpiHandler Qhandler ,SendMsgHandler_t CurrentMsg)
{
	if(!IsEmpty(Qhandler))
	{
	*CurrentMsg=(Qhandler->Msgs[Qhandler->tail]);
	Qhandler->Msgs[Qhandler->tail].SE=NULL;
	Qhandler->Msgs[Qhandler->tail].EndOfJob=NULL;
	Qhandler->Msgs[Qhandler->tail].Size=0;
	Qhandler->tail++;
	Qhandler->tail%=BUFFER_SIZE;
	Qhandler->size--;
	return 1;
	}
	else
	{
		return 0;
	}
}









