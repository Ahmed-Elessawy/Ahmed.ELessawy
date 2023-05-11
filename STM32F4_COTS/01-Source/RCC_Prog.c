/**************************************************************/
/* Author: Ahmed Elessawy Rashid                              */
/* Date: 31-Jan-31                                            */
/* Version: 01                                                */
/* Description: Prog file for RCC Driver  			  */
/**************************************************************/



#include"../include/Std_Types.h"
#include"../include/Macros.h"
#include"../include/RCC_Private.h"
#include"../include/RCC_Interface.h"
#include"../include/RCC_Config.h"

//extern u32 PLL_ConfigurationValues;
//extern u32 RCC_SWClockSource;
void RCC_vidInit(void)
{
	
	if(RCC_InitClockSource==RCC_HSI)
	{

			SET_BIT(RCC_tstrMapPtr->RCC_CR,HSI_ON_BIT);
			RCC_tstrMapPtr->RCC_CFGR = (((RCC_tstrMapPtr->RCC_CFGR)>>RCC_SW_OFFSET)&RCC_SWS_MASK);
			CLR_BIT(RCC_tstrMapPtr->RCC_CR,HSE_ON_BIT);
			CLR_BIT(RCC_tstrMapPtr->RCC_CR,PLL_ON_BIT);
			
			
	}
	else if(RCC_InitClockSource==RCC_HSE)
	{
		
			SET_BIT(RCC_tstrMapPtr->RCC_CR,HSE_ON_BIT);
			RCC_tstrMapPtr->RCC_CFGR = (((RCC_tstrMapPtr->RCC_CFGR)>>RCC_SW_OFFSET)&RCC_SWS_MASK);
			RCC_tstrMapPtr->RCC_CFGR|=(HSE_SOURCE_CLOCK<<RCC_SW_OFFSET);
			CLR_BIT(RCC_tstrMapPtr->RCC_CR,HSI_ON_BIT);
			CLR_BIT(RCC_tstrMapPtr->RCC_CR,PLL_ON_BIT);
			
		
	}
	
	else
	{
			if(PLL_SOURCE_CLOCK==RCC_HSE)
			{
				SET_BIT(RCC_tstrMapPtr->RCC_CR,HSE_ON_BIT);
				RCC_tstrMapPtr->RCC_CFGR = (((RCC_tstrMapPtr->RCC_CFGR)>>RCC_SW_OFFSET)&RCC_SWS_MASK);
				RCC_tstrMapPtr->RCC_CFGR|=(HSE_SOURCE_CLOCK<<RCC_SW_OFFSET);
			}
			else
			{
				SET_BIT(RCC_tstrMapPtr->RCC_CR,HSI_ON_BIT);
				RCC_tstrMapPtr->RCC_CFGR = (((RCC_tstrMapPtr->RCC_CFGR)>>RCC_SW_OFFSET)&RCC_SWS_MASK);
				RCC_tstrMapPtr->RCC_CFGR|=(HSI_SOURCE_CLOCK<<RCC_SW_OFFSET);
			}
		
			while(GET_BIT(RCC_tstrMapPtr->RCC_CR,HSI_RDY_BIT)== CLOCK_NRDY 
			|| GET_BIT(RCC_tstrMapPtr->RCC_CR,HSE_RDY_BIT)==CLOCK_NRDY);
			
			(RCC_tstrMapPtr->RCC_PLLCFGR)|= 2|(200<<6)|(3<<15)|(10<<23);
			
			SET_BIT(RCC_tstrMapPtr->RCC_CR,PLL_ON_BIT);
			
			while(GET_BIT(RCC_tstrMapPtr->RCC_CR,PLL_RDY_BIT) == CLOCK_NRDY);
			
			RCC_tstrMapPtr->RCC_CFGR&=0xFFFFFFFC;
			RCC_tstrMapPtr->RCC_CFGR|=2;
			
			
			while( (( (RCC_tstrMapPtr->RCC_CFGR)>>RCC_SWS_OFFSET)&RCC_SWS_MASK) != RCC_PLL);
	}
	
	
}



RCC_enuErrorStatus RCC_ChangePLLFactor(u32 Copy_u32PLLSource,u32 Copy_u32PLLM_Value,u32 Copy_u32PLLN_Value,u32 Copy_u32PLLP_Value,u32 Copy_u32PLLQ_Value)
{
	u32 LocalConfigContainer=0;
	

		if(Copy_u32PLLSource==HSI_SOURCE_CLOCK)
		{
			SET_BIT(RCC_tstrMapPtr->RCC_CR,HSI_ON_BIT);
			while(GET_BIT(RCC_tstrMapPtr->RCC_CR,HSI_RDY_BIT)==CLOCK_NRDY);
			
			RCC_tstrMapPtr->RCC_CFGR&=0xFFFFFFFC;
			RCC_tstrMapPtr->RCC_CFGR|=(HSI_SOURCE_CLOCK<<RCC_SW_OFFSET);
			while((((RCC_tstrMapPtr->RCC_CFGR)>>RCC_SWS_OFFSET)&RCC_SWS_MASK) != RCC_HSI);
		}
		else
		{
			SET_BIT(RCC_tstrMapPtr->RCC_CR,HSE_ON_BIT);
			while(GET_BIT(RCC_tstrMapPtr->RCC_CR,HSE_RDY_BIT)==CLOCK_NRDY);
			
			RCC_tstrMapPtr->RCC_CFGR&=0xFFFFFFFC;
			RCC_tstrMapPtr->RCC_CFGR|=(HSE_SOURCE_CLOCK<<RCC_SW_OFFSET);
			while((((RCC_tstrMapPtr->RCC_CFGR)>>RCC_SWS_OFFSET)&RCC_SWS_MASK) != RCC_HSE);
			
		}
		
			

			CLR_BIT(RCC_tstrMapPtr->RCC_CR,PLL_ON_BIT);
			
			LocalConfigContainer|=(Copy_u32PLLM_Value<<PLLM_OFFSET) | (Copy_u32PLLN_Value<<PLLN_OFFSET)
							| (Copy_u32PLLP_Value<<PLLP_OFFSET) | (Copy_u32PLLQ_Value<<PLLQ_OFFSET);
			
			RCC_tstrMapPtr->RCC_PLLCFGR=LocalConfigContainer;
			
			
			SET_BIT(RCC_tstrMapPtr->RCC_CR,PLL_ON_BIT);
			
			
			while(GET_BIT(RCC_tstrMapPtr->RCC_CR,(PLL_RDY_BIT-1))!=CLOCK_RDY);
			
			RCC_tstrMapPtr->RCC_CFGR&=0xFFFFFFFC;

			RCC_tstrMapPtr->RCC_CFGR|=RCC_PLL;
			while( (( (RCC_tstrMapPtr->RCC_CFGR)>>RCC_SWS_OFFSET)& RCC_SWS_MASK ) != RCC_PLL);
		
}




















RCC_enuErrorStatus RCC_enuEnablePeripheral(u8 PrepheralNumber)
{
	
	RCC_enuErrorStatus Error=RCC_OK;


	 u8 LocalBusNumber=PrepheralNumber/32;
	 u8 LocalPrehNumber=PrepheralNumber%32;
	
	if(LocalBusNumber>2)
	{
		Error=RCC_NOK;
	}
	switch(LocalBusNumber)
	{
		case AHB1:
		SET_BIT(AHB1EN,LocalPrehNumber);

		break;
		
		case APB1:
		//SET_BIT(RCC_tstrMapPtr->RCC_APB1ENR,LocalPrehNumber);
		break;
		
		case APB2:
		//SET_BIT(RCC_tstrMapPtr->RCC_APB2ENR,LocalPrehNumber);
		break;
	}
	
	return Error;
	
}


RCC_enuErrorStatus RCC_enuDisablePeripheral(u8  PrepheralNumber)
{
	
	RCC_enuErrorStatus Error=RCC_OK;

	u8 LocalBusNumber = PrepheralNumber/32;
	u8 LocalPrehNumber= PrepheralNumber%32;
	
	if(LocalBusNumber>2)
	{
		Error=RCC_NOK;
	}
	switch(LocalBusNumber)
	{
		case AHB1:
		CLR_BIT(AHB1EN,LocalPrehNumber);
		break;
		
		case APB1:
		//CLR_BIT(RCC_tstrMapPtr->RCC_APB1ENR,LocalPrehNumber);
		break;
		
		case APB2:
		//CLR_BIT(RCC_tstrMapPtr->RCC_APB2ENR,LocalPrehNumber);
		break;
	}
	
	return Error;
	
}
