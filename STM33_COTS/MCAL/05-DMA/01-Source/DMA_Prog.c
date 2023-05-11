

DMA_RegHandler_t   DMA_FlagsReg_t=((DMA_RegHandler_t)DMA_ONE_BASE_ADD);

//DMA_StreamCfgHandler_t DMA_StreamCgfReg=DMA_StreamCfgHandler_t)




void (*CBF[NumberOfStreams])(void)={NULL};



void dmaStream_vInit(const StreamCfgHandler_t Self)
{
	u32 Loc_u32Temp=0;
	Loc_u32Temp=Self->Channel|Self->Channel|Self->MemDataSize|Self->MemInc|Self->PrehDataSize|Self->PrehInc
	|Self->PrephIncSize|Self->DataDir|Self->PrehFlowCtrl|Self->PriorityLevel|Self->Circ|Self->DoubleBuffer
	|Self->Mburst|Self->Pburst|Self->H_Transfer|Self->C_Transfer|Self->FifoLevel;
	
	if( (((DMA_StreamCfgHandler_t)Self->Stream)->DMA_SCR) & DMA_CR_EN)
	{Self->
		
	}
	else
	{
		(((DMA_StreamCfgHandler_t)Self->Stream)->DMA_SCR)=Loc_u32Temp;
		
	}
	
	(((DMA_StreamCfgHandler_t)Self->Stream)->DMA_SDTR)=Self->NuOfDataSend;
	
	(((DMA_StreamCfgHandler_t)Self->Stream)->DMA_SPAR)=(u32)Self->PrephAdd;
	
	(((DMA_StreamCfgHandler_t)Self->Stream)->DMA_SPAR)=(u32)Self->MemAdd;
	
}


void dmaStreamEnable(u32 StreamAdd,u8 StreamNu)
{
	u32 Loc_u32Temp=0;
	
	if ( ( ((DMA_StreamCfgHandler_t)StreamNumber)->DMA_SCR) & DMA_CR_EN)
	{
		
	}
	else
	{
		
		if(StreamNu>NumberOfStreams)
		{
			
		}
		else
		{
			if(StreamNu>S3)
			{
				switch(StreamNu)
				{
					case S4:
					DMA_FlagsReg_t->DMA_HIFCR|=DMA_ISR0_CLEAR_LH;
					
					break;
					
					case S5:
					DMA_FlagsReg_t->DMA_HIFCR|=DMA_ISR1_CLEAR_LH;
					
					break;
					
					case S6:
					DMA_FlagsReg_t->DMA_HIFCR|=DMA_ISR2_CLEAR_LH;
					
					break;
					
					case S7:
					DMA_FlagsReg_t->DMA_HIFCR|=DMA_ISR3_CLEAR_LH;
					
					break;
					
				}
		}
		
		else
		{
				switch(StreamNu)
				{
					case S0:
					
					DMA_FlagsReg_t->DMA_LIFCR|=DMA_ISR0_CLEAR_LH;
					
					break;
					
					case S1:
					DMA_FlagsReg_t->DMA_LIFCR|=DMA_ISR1_CLEAR_LH;
					
					break;
					
					case S2:
					DMA_FlagsReg_t->DMA_LIFCR|=DMA_ISR2_CLEAR_LH;
					
					break;
					
					case S3:
					DMA_FlagsReg_t->DMA_LIFCR|=DMA_ISR3_CLEAR_LH;
					
					break;
					
				}
			
		}
			
		}
	
		( ((DMA_StreamCfgHandler_t)StreamNumber)->DMA_SCR) |= DMA_CR_EN;
	}
}


void RegCbf(u8 StreamNu,void (*Ptr) (void))
{
	if(Ptr!=NULL)
	{
		CBF[StreamNu]=Ptr;
	}
	else
	{
		
	}
}

DMA1_Stream0_IRQHandler(void)
{
	if(
}


