//Author : Ahmed Elessawy
#include"../../LIB/Std_Types.h"
#include"../LIB/Macros.h"
#include"../../MCAL/00-DIO/DIO_V1/DIO1_Interface.h"
#include"../02-Include/INTERRUPT_Private.h"
#include"../02-Include/INTERRUPT_Interface.h"
#include"../02-Include/INTERRUPT_Config.h"



static void (*CBF [3])(void)={NULL,NULL,NULL};


Interrupt_enuErrorStatus Interrupt_enuEnable(Interrupt_enuIndex enu_Index,u8 Copy_u8SenseControl)
{
	
	Interrupt_enuErrorStatus Local_ErrorStatus=INTERR_OK;
	u8 Local_RegSave=0;
	if(enu_Index>3)
	{
		Local_ErrorStatus=INTERR_NOK;
	}
	
	switch(enu_Index)
	{
		case EXTI_0:
		DIO_enuSetPinDirectionInput(EXTI0_PIN);
		if(EXTI0_INPUTSTATE==PULL_UP)
		{
			DIO_enuSetPin(EXTI0_PIN);
		}
		
		else
		{
			DIO_enuClearPin(EXTI0_PIN);
		}
		DIO_enuSetPin(EXTI0_PIN);
		SET_BIT(GICR_INT_Control,EXTI0_EnableBit);
		Local_RegSave=MCU_SenseControl;
		Local_RegSave&=EXTI0_CLEAR_MASK;
		Local_RegSave|=Copy_u8SenseControl;
		MCU_SenseControl=Local_RegSave;
		break;
		
		
		case EXTI_1:
		DIO_enuSetPinDirectionInput(EXTI1_PIN);
		if(EXTI2_INPUTSTATE==PULL_UP)
		{
			DIO_enuSetPin(EXTI1_PIN);
		}
		
		else
		{
			DIO_enuClearPin(EXTI1_PIN);
		}
		

		SET_BIT(GICR_INT_Control,EXTI1_EnableBit);
		Local_RegSave=MCU_SenseControl;
		Local_RegSave&=EXTI1_CLEAR_MASK;
		Local_RegSave|=(2<<Copy_u8SenseControl);
		MCU_SenseControl=Local_RegSave;
		
		break;
		
		
		case EXTI_2:
		SET_BIT(GICR_INT_Control,EXTI2_EnableBit);
		if(Copy_u8SenseControl==RISING_EDGE)
		{
			SET_BIT(MCU_StatusSense_Control,EXTI2_SENSE_BIT);
		}
		else
		{
			CLR_BIT(MCU_StatusSense_Control,EXTI2_SENSE_BIT);
		}
		break;
	}

return Local_ErrorStatus;
	
}



Interrupt_enuErrorStatus Interrupt_enuDisable(Interrupt_enuIndex enu_Index)
{
	
	Interrupt_enuErrorStatus Local_ErrorStatus=INTERR_OK;
	if(enu_Index>3)
	{
		Local_ErrorStatus=INTERR_NOK;
	}
	
	switch(enu_Index)
	{
		case EXTI_0:
		CLR_BIT(GICR_INT_Control,EXTI0_EnableBit);
		break;
		
		case EXTI_1:
		CLR_BIT(GICR_INT_Control,EXTI1_EnableBit);
		break;
		
		
		case EXTI_2:
		CLR_BIT(GICR_INT_Control,EXTI2_EnableBit);
		break;
	}
		
return Local_ErrorStatus;
	
}
	
	
	



Interrupt_enuErrorStatus Interrupt_enuSetCallBack(Interrupt_enuIndex enu_Index,void (*Copy_Ptr) (void))
{
	 CBF[enu_Index]=Copy_Ptr;
	return INTERR_OK;
}

void __vector_1 (void)
{
	
	if(CBF[EXTI_0]!=NULL)
	{
		CBF[EXTI_0]();
	}
		
	
}

void __vector_2 (void)
{
	if(CBF[EXTI_1]!=NULL)
	{
		CBF[EXTI_1]();
	}
}

void __vector_3 (void)
{
	if(CBF[EXTI_2]!=NULL)
	{
		CBF[EXTI_2]();
	}
}