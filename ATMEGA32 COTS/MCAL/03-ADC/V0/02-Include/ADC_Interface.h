/**************************************************************/
/* Author: Ahmed Elessawy Rashid                              */
/* Date: 31-Jan-31                                            */
/* Version: 01                                                */
/* Description: Interface file for ِADC Driver  			  */
/**************************************************************/


#ifndef ADC_INTERFACE_H
#define ADC_INTERFACE_H

//#include"ADC_Private.h"
/*********************************************************************************/
/* Function: ADC_Enable                        				    				**/
/* I/P Parameters: it takes nothing 	    									**/
/* Returns:it returns error status(OK,NOK                               	    **/
/* Desc:This Function enable ADC prpheral															**/
/*********************************************************************************/
ADC_enuErrorStatus_t adc_enuEnable(void); 
/*********************************************************************************/

/*********************************************************************************/
/* Function: ADC_Disable                        				    		    **/
/* I/P Parameters: it takes nothing 	    									**/
/* Returns:it returns error status(OK,NOK                               	    **/
/* Desc:This Function Disable ADC prpheral															**/
/*********************************************************************************/
ADC_enuErrorStatus_t adc_enuDisable(void); 
/*********************************************************************************/

/*********************************************************************************/
/* Function: ADC_StartConv                        				    			**/
/* I/P Parameters: it takes nothing 	    									**/
/* Returns:it returns error status(OK,NOK                               	    **/
/* Desc:This Function start conversion of analog to digital													**/
/*********************************************************************************/
ADC_enuErrorStatus_t adc_enuStartConv(void); 
/*********************************************************************************/

/*********************************************************************************/
/* Function: ADC_TrigEnable                        				    				**/
/* I/P Parameters: it takes nothing 	    									**/
/* Returns:it returns error status(OK,NOK                               	    **/
/* Desc:This Function enable Auto trigeer of ADC prpheral															**/
/*********************************************************************************/
ADC_enuErrorStatus_t adc_enuEnableTrig(void); 
/*********************************************************************************/

/*********************************************************************************/
/* Function: ADC_TrigDisabel                        				    		**/
/* I/P Parameters: it takes nothing 	    									**/
/* Returns:it returns error status(OK,NOK                               	    **/
/* Desc:This Function enable Auto trigeer of ADC prpheral															**/
/*********************************************************************************/
ADC_enuErrorStatus_t adc_enuDisbleTrig(void);
/*********************************************************************************/

/*********************************************************************************/
/* Function: ADC_EnableINT                        				    				**/
/* I/P Parameters: it takes nothing 	    									**/
/* Returns:it returns error status(OK,NOK                               	    **/
/* Desc:This Function enable ADC prpheral INT									**/						
/*********************************************************************************/
ADC_enuErrorStatus_t adc_enuEnableINT(void); 
/*********************************************************************************/


/*********************************************************************************/
/* Function: ADC_Enable                        				    				**/
/* I/P Parameters: it takes nothing 	    									**/
/* Returns:it returns error status(OK,NOK                               	    **/
/* Desc:This Function disable ADC prpheral INT									**/					
/*********************************************************************************/
ADC_enuErrorStatus_t adc_enuDisableINT(void); 
/*********************************************************************************/


/*********************************************************************************/
/* Function: ADC_clear interrupt flag                        				    **/
/* I/P Parameters: it takes nothing 	    									**/
/* Returns:it returns error status(OK,NOK                               	    **/
/* Desc:This Function clear ADC prpheral INT								    **/					
/*********************************************************************************/
ADC_enuErrorStatus_t adc_enuClearINTFlag(void); 
/*********************************************************************************/

/************************************************************************************/
/* Function: ADC_SetPrescaler                        				    		   **/
/* I/P Parameters: it takes Prescaler division factor(Div_2,Div_4,Div_8,Div_2Div_16**/
/*				Div_32,Div_64,Div_128)                                             **/
/* Returns:it returns error status(OK,NOK)                     ,          	       **/
/* Desc:This Function selects prescaler option 									   **/
/***************************************************************************************/
ADC_enuErrorStatus_t adc_enuSetPreScaler(u8 Cpy_u8PreScalerOption); 
/*********************************************************************************/

/*********************************************************************************/
/* Function: ADC_read data                        				    		    **/
/* I/P Parameters: it takes apointer to data to be read					    	**/
/* Returns:it returns error status(OK,NOK                               	    **/
/* Desc:This Function read the converted value									**/
/*********************************************************************************/
ADC_enuErrorStatus_t adc_enuReadDataSync(u8 Cpy_u8ChnlN,u16 *Cpy_Pu16Data); 
/***************************************************************************************/

/*********************************************************************************/
/* Function: ADC_read data                        				    		    **/
/* I/P Parameters: it takes apointer to data to be read					    	**/
/* Returns:it returns error status(OK,NOK                               	    **/
/* Desc:This Function read the converted value									**/
/*********************************************************************************/
ADC_enuErrorStatus_t adc_enuReadDataASync(u16 *Cpy_Pu16Data);
/***************************************************************************************/


/*********************************************************************************/
/* Function: ADC_Enable                        				    				  **/
/* I/P Parameters:TrigSrc options(TRIG_FREE_RUNNING ,TRIG_Analog_Comparator,
   TRIG_EXTI_Interrupt_0,TRIG_Timer0_COMP,TRIG_Timer1COMP_B,TRIG_Timer0_Overflow  **/
/* TRIG_Timer1COMP_B,TRIG_Timer1_Overflow,TRIG_Timer1_Event)
/* Returns:it returns error status	(OK,NOK                               	      **/
/* Desc:This Function selects the 	auto triggering source						  **/
/***********************************************************************************/
ADC_enuErrorStatus_t adc_enuSelectTrigSrc(u8 Cpy_u8TrigSrc); 
/***********************************************************************************/

/*********************************************************************************/
/* Function: ADC_Enable                        				    				  **/
/* I/P Parameters:TrigSrc options(TRIG_FREE_RUNNING ,TRIG_Analog_Comparator,
   TRIG_EXTI_Interrupt_0,TRIG_Timer0_COMP,TRIG_Timer1COMP_B,TRIG_Timer0_Overflow  **/
/* TRIG_Timer1COMP_B,TRIG_Timer1_Overflow,TRIG_Timer1_Event)
/* Returns:it returns error status	(OK,NOK                               	      **/
/* Desc:This Function selects the 	auto triggering source						  **/
/***********************************************************************************/
ADC_enuErrorStatus_t adc_enuSelectVoltRef(u8 Cpy_u8VoltRef); 
/***********************************************************************************/

/*********************************************************************************/
/* Function: ADC_Enable                        				    				  **/
/* I/P Parameters:TrigSrc options(TRIG_FREE_RUNNING ,TRIG_Analog_Comparator,
   TRIG_EXTI_Interrupt_0,TRIG_Timer0_COMP,TRIG_Timer1COMP_B,TRIG_Timer0_Overflow  **/
/* TRIG_Timer1COMP_B,TRIG_Timer1_Overflow,TRIG_Timer1_Event)
/* Returns:it returns error status	(OK,NOK                               	      **/
/* Desc:This Function selects the 	auto triggering source						  **/
/***********************************************************************************/
ADC_enuErrorStatus_t adc_u8SelectChannel (u8 Cpy_u8Channel);		
/*********************************************************************************/





/*********************************************************************************/
/* Function: ADC_Enable                        				    				  **/
/* I/P Parameters:TrigSrc options(TRIG_FREE_RUNNING ,TRIG_Analog_Comparator,
   TRIG_EXTI_Interrupt_0,TRIG_Timer0_COMP,TRIG_Timer1COMP_B,TRIG_Timer0_Overflow  **/
/* TRIG_Timer1COMP_B,TRIG_Timer1_Overflow,TRIG_Timer1_Event)
/* Returns:it returns error status	(OK,NOK                               	      **/
/* Desc:This Function selects the 	auto triggering source						  **/
/***********************************************************************************/
ADC_enuErrorStatus_t ADC_u8SetCallBack (void(*Copy_PVCallBack)(int));		
/*********************************************************************************/

#endif