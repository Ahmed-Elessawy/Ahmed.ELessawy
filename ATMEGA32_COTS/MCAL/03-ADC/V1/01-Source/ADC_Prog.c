

#include"ADC_Private.h"
#include"ADC_Interface.h"



ADC_strREG_t ADC_strReg=(ADC_strREG_t) (0x24);


void(*Glob_PVCallBack)(int)=NULL;









/*********************************************************************************/
/* Function: ADC_Enable                        				    				**/
/* I/P Parameters: it takes nothing 	    									**/
/* Returns:it returns error status(OK,NOK                               	    **/
/* Desc:This Function enable ADC prpheral															**/
/*********************************************************************************/
ADC_enuErrorStatus_t adc_enuEnable(void)
{
	ADC_strReg->ADC_ADCSRA|=ADC_ENABLE_MASK;
}
/*********************************************************************************/

/*********************************************************************************/
/* Function: ADC_Disable                        				    		    **/
/* I/P Parameters: it takes nothing 	    									**/
/* Returns:it returns error status(OK,NOK                               	    **/
/* Desc:This Function Disable ADC prpheral															**/
/*********************************************************************************/
ADC_enuErrorStatus_t adc_enuDisable(void)
{
	ADC_strReg->ADC_ADCSRA&=~(ADC_ENABLE_MASK);
}
/*********************************************************************************/

/*********************************************************************************/
/* Function: ADC_StartConv                        				    			**/
/* I/P Parameters: it takes nothing 	    									**/
/* Returns:it returns error status(OK,NOK                               	    **/
/* Desc:This Function start conversion of analog to digital													**/
/*********************************************************************************/
ADC_enuErrorStatus_t adc_enuStartConv(void)
{
	ADC_enuErrorStatus_t Error=Ret_OK;
	if((ADC_strReg->ADC_ADCSRA&=START_CONV_MASK)==START_CONV_MASK)
	{
		Error=Ret_NOK;
	}
	else
	{
		ADC_strReg->ADC_ADCSRA|=START_CONV_MASK;
	}
	return Error;
}	
/*********************************************************************************/

/*********************************************************************************/
/* Function: ADC_TrigEnable                        				    		    **/
/* I/P Parameters: it takes nothing 	    									**/
/* Returns:it returns error status(OK,NOK                               	    **/
/* Desc:This Function enable Auto trigeer of ADC prpheral															**/
/*********************************************************************************/
ADC_enuErrorStatus_t adc_enuEnableTrig(void)
{
	ADC_strReg->ADC_ADCSRA|=Auto_Trigger_MASK;
}	
/*********************************************************************************/

/*********************************************************************************/
/* Function: ADC_TrigDisabel                        				    		**/
/* I/P Parameters: it takes nothing 	    									**/
/* Returns:it returns error status(OK,NOK                               	    **/
/* Desc:This Function enable Auto trigeer of ADC prpheral															**/
/*********************************************************************************/
ADC_enuErrorStatus_t adc_enuDisbleTrig(void)
{
	ADC_strReg->ADC_ADCSRA&=~(Auto_Trigger_MASK);
}	
/*********************************************************************************/


/*********************************************************************************/
/* Function: ADC_EnableINT                        				    			**/
/* I/P Parameters: it takes nothing 	    									**/
/* Returns:it returns error status(OK,NOK                               	    **/
/* Desc:This Function enable ADC prpheral INT									**/						**/
/*********************************************************************************/
ADC_enuErrorStatus_t adc_enuEnableINT(void)
{
	ADC_strReg->ADC_ADCSRA|=(Interrupt_Enable_MASK);
}	
/*********************************************************************************/


/*********************************************************************************/
/* Function: ADC_Enable                        				    				**/
/* I/P Parameters: it takes nothing 	    									**/
/* Returns:it returns error status(OK,NOK                               	    **/
/* Desc:This Function disable ADC prpheral INT									**/					**/
/*********************************************************************************/
ADC_enuErrorStatus_t adc_enuDisableINT(void)
{
	ADC_strReg->ADC_ADCSRA&=~(Interrupt_Enable_MASK);
}	
/*********************************************************************************/


/*********************************************************************************/
/* Function: ADC_clear interrupt flag                        				    **/
/* I/P Parameters: it takes nothing 	    									**/
/* Returns:it returns error status(OK,NOK                               	    **/
/* Desc:This Function clear ADC prpheral INT								    **/					**/
/*********************************************************************************/
ADC_enuErrorStatus_t adc_enuClearINTFlag(void)
{
	ADC_strReg->ADC_ADCSRA|=(Interrupt_Flag_MASK);
}	
/*********************************************************************************/




/************************************************************************************/
/* Function: ADC_SetPrescaler                        				    		   **/
/* I/P Parameters: it takes Prescaler division factor(Div_2,Div_4,Div_8,Div_2Div_16**/
/*				Div_32,Div_64,Div_128)                                             **/
/* Returns:it returns error status(OK,NOK)                     ,          	       **/
/* Desc:This Function selects prescaler option 									   **/
/***************************************************************************************/

ADC_enuErrorStatus_t adc_enuSetPreScaler(u8 Cpy_u8PreScalerOption)
{
	u8 Loc_RegCpy;
	Loc_RegCpy=ADC_strReg->ADC_ADCSRA;
	Loc_RegCpy&=PRESCALER_CLEAR;
	Loc_RegCpy|=Cpy_u8PreScalerOption;
	ADC_strReg->ADC_ADCSRA=Loc_RegCpy;
}	
/*********************************************************************************/



/*********************************************************************************/
/* Function: ADC_read data synchrounous                       				    		    **/
/* I/P Parameters: it takes apointer to data to be read					    	**/
/* Returns:it returns error status(OK,NOK                               	    **/
/* Desc:This Function read the converted value									**/
/*********************************************************************************/
ADC_enuErrorStatus_t adc_enuReadDataSync(u8 Cpy_u8ChnlN,u16 *Cpy_Pu16Data)
{
	u8 Loc_RegCpy;
	Loc_RegCpy=ADC_strReg->ADC_ADMUX;
	Loc_RegCpy&=ACHANEL_GSELECTION_CLEAR;
	Loc_RegCpy|=Cpy_u8ChnlN;
	ADC_strReg->ADC_ADMUX=Loc_RegCpy;
	
	while((ADC_strReg->ADC_ADCSRA&=Interrupt_Flag_MASK)!=Interrupt_Flag_MASK);
	ADC_strReg->ADC_ADCSRA|=Interrupt_Flag_MASK;
	*Cpy_Pu16Data=ADC_strREG_t->ADC_DATA;
	
}
/***************************************************************************************/

/*********************************************************************************/
/* Function: ADC_read data Asynchrounous                        				   **/
/* I/P Parameters: it takes apointer to data to be read	,channel number from 0 to 7**/
/* Returns:it returns error status(OK,NOK                               	    **/
/* Desc:This Function read the converted value									**/
/*********************************************************************************/
ADC_enuErrorStatus_t adc_enuReadDataASync(u8 Cpy_u8ChnlN,u16 *Cpy_Pu16Data)
{
	u8 Loc_RegCpy;
	Loc_RegCpy=ADC_strReg->ADC_ADMUX;
	Loc_RegCpy&=ACHANEL_GSELECTION_CLEAR;
	Loc_RegCpy|=Cpy_u8ChnlN;
	ADC_strReg->ADC_ADMUX=Loc_RegCpy;
	adc_enuEnableINT();
	
	
}
/***************************************************************************************/


/*********************************************************************************/
/* Function: ADC_Enable                        				    				  **/
/* I/P Parameters:TrigSrc options(TRIG_FREE_RUNNING ,TRIG_Analog_Comparator,
   TRIG_EXTI_Interrupt_0,TRIG_Timer0_COMP,TRIG_Timer1COMP_B,TRIG_Timer0_Overflow  **/
/* TRIG_Timer1COMP_B,TRIG_Timer1_Overflow,TRIG_Timer1_Event)
/* Returns:it returns error status	(OK,NOK                               	      **/
/* Desc:This Function selects the 	auto triggering source						  **/
/***********************************************************************************/
ADC_enuErrorStatus_t adc_enuSelectTrigSrc(u8 Cpy_u8TrigSrc)
{
	u8 Loc_RegCpy;
	Loc_RegCpy=ADC_strReg->ADC_ADMUX;
	Loc_RegCpy&=TRIG_CLEAR_MASK;
	Loc_RegCpy|=Cpy_u8TrigSrc;
	ADC_strReg->ADC_ADMUX=Loc_RegCpy;

}	
/***********************************************************************************/


/*********************************************************************************/
/* Function: ADC_SetCallBack                        				    				  **/
/* I/P Parameters:TrigSrc options(TRIG_FREE_RUNNING ,TRIG_Analog_Comparator,
   TRIG_EXTI_Interrupt_0,TRIG_Timer0_COMP,TRIG_Timer1COMP_B,TRIG_Timer0_Overflow  **/
/* TRIG_Timer1COMP_B,TRIG_Timer1_Overflow,TRIG_Timer1_Event)
/* Returns:it returns error status	(OK,NOK                               	      **/
/* Desc:This Function selects the 	auto triggering source						  **/
/***********************************************************************************/
ADC_enuErrorStatus_t ADC_u8SetCallBack (void(*Copy_PVCallBack)(int ))
{
	Glob_PVCallBack=Copy_PVCallBack;
	
}	
/*********************************************************************************/


/*********************************************************************************/
/* Function: ADC_SetCallBack                        				    				  **/
/* I/P Parameters:TrigSrc options(TRIG_FREE_RUNNING ,TRIG_Analog_Comparator,
   TRIG_EXTI_Interrupt_0,TRIG_Timer0_COMP,TRIG_Timer1COMP_B,TRIG_Timer0_Overflow  **/
/* TRIG_Timer1COMP_B,TRIG_Timer1_Overflow,TRIG_Timer1_Event)
/* Returns:it returns error status	(OK,NOK                               	      **/
/* Desc:This Function selects the 	auto triggering source						  **/
/***********************************************************************************/
void __vector_16(void)
{
	if(Glob_PVCallBack!=NULL)
	{
	Glob_PVCallBack(ADC_strREG_t->ADC_DATA);
	}
}



