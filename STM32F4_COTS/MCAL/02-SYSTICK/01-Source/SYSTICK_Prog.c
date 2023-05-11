


#include"SYSTICK_Private.h"
#include"SYSTICK_Interface.h"

#define CLK        25000000
#define TimeToMs   1000
#define Max		   0x00FFFFFF



	
StkReg_t sysTickReg_t=((StkReg_t)0xE000E010);
sysTick_CBF sysTickPvNotfication=NULL;
void sysTick_Enable(void)
{
	sysTickReg_t->STK_CTRL|=SYSTICK_ENABLE;
}


void sysTick_Disable(void)
{
	sysTickReg_t->STK_CTRL&=(~SYSTICK_ENABLE);
}

ErrorStatus_t sysTick_SelectSrcClk(u8 Cpy_u8SrcClk)
{
	ErrorStatus_t Status=SysTick_OK;
	if(Cpy_u8SrcClk==SYSTICK_CLK_SRC_AHB)
	{
		sysTickReg_t->STK_CTRL|=SYSTICK_CLK_SRC_AHB;
	}
	else if(Cpy_u8SrcClk==SYSTICK_CLK_SRC_AHB/8)
	{
		sysTickReg_t->STK_CTRL&=(~SYSTICK_CLK_SRC_AHB);
	}
	else
	{
		Status=SysTick_NOK;
	}
	return Status;	
}

void sysTick_EnableException(void)
{
	sysTickReg_t->STK_CTRL|=SYSTICK_EXC_ENABLE;
}

void sysTick_DisableException(void)
{
	sysTickReg_t->STK_CTRL&=(~SYSTICK_EXC_ENABLE);
	
}


ErrorStatus_t sysTick_SetTime(u32 Cpy_u32TimeMs)
{
	ErrorStatus_t Status=SysTick_OK;
	 u32 Temp=(CLK/TimeToMs)*Cpy_u32TimeMs;
	 
	 if(Temp>Max)
	 {
		 Status=SysTick_NOK;
	 }
	 else
	 {
		if(sysTickReg_t->STK_CTRL&=SYSTICK_CLK_SRC_AHB_BIT)
		{
			sysTickReg_t->STK_LOAD=Temp-1;
		}
		else
		{
			sysTickReg_t->STK_LOAD=(Temp/8)-1;
		}
	 }
	 return Status;
}

ErrorStatus_t sysTick_SetCBF(sysTick_CBF CBF_Handler_t)
{
	ErrorStatus_t Status=SysTick_OK;
	if(CBF_Handler_t)
	{
		sysTickPvNotfication=CBF_Handler_t;
	}
	else
	{
		Status=SysTick_NOK;
	}
	
	return Status;
		
}


void SysTick_Handler (void)
{
	/*if static receive address of function enter the condition*/
	if (sysTickPvNotfication)
	{
		/*Call the function in the application*/
		sysTickPvNotfication();

	}/*end of if condition*/

	else
	{
		/*Do nothing*/

	}/*end of else*/

}/*end of Systick_handler*/