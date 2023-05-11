/**************************************************************/
/* Author: Ahmed Elessawy Rashid                              */
/* Date: 31-Jan-31                                            */
/* Version: 01                                                */
/* Description: Private file for ِADC Driver  			  */
/**************************************************************/

#ifndef ADC_PRIVATE_H
#define ADC_PRIVATE_H


						/*ADMUX Register Options*/
/***************************************************************/
/***************************************/

/*Voltage Reference Selection Bits*/
#define VREF_CLEAR  0x3F
 
/*Options*/    
#define AREF 		0x00    
#define AVCC 		0x40 
#define INTERNAL	0xC0
/***************************************/

/*Data Adjustment*/
#define ADLAR_BIT   5
/**************************************/

/*Analog Channel and Gain Selection Bits*/

#define ACHANEL_GSELECTION_CLEAR   0x70
/*Single Ended*/
#define SINGLE_ENDED_ADC0	0
#define SINGLE_ENDED_ADC1	1
#define SINGLE_ENDED_ADC2	2
#define SINGLE_ENDED_ADC3	3
#define SINGLE_ENDED_ADC4	4
#define SINGLE_ENDED_ADC5	5
#define SINGLE_ENDED_ADC6	6
#define SINGLE_ENDED_ADC7	7
/**************************************/
/***************************************************************/



						/*ADC Control and Status Reg*/
/***************************************************************/
/**************************************/

/*ADC Prescaler Select Bits*/
#define PRESCALER_CLEAR       0xF8

#define PRESCALER_DIV_2		  2
#define PRESCALER_DIV_4		  4	
#define PRESCALER_DIV_8		  8	
#define PRESCALER_DIV_16      16
#define PRESCALER_DIV_32	  32	
#define PRESCALER_DIV_64	  64
#define PRESCALER_DIV_128     128	
/**************************************/

/*ADC Control Enable BITS*/
#define Interrupt_Enable_MASK  0x08  
#define Interrupt_Flag_MASK	   0x10
#define Auto_Trigger_MASK	   0x20	
#define START_CONV_MASK		   0x40	
#define ADC_ENABLE_MASK		   0x80	
/**************************************/
/**************************************************************/


						/*ADC Special function Reg*/
/***************************************************************/
/******************************************/
/*Auto Trigger Sources*/
#define TRIG_CLEAR_MASK				    0x1F	

#define TRIG_FREE_RUNNING 				0
#define	TRIG_Analog_Comparator			1
#define	TRIG_EXTI_Interrupt_0			2
#define	TRIG_Timer0_COMP				3
#define TRIG_Timer0_Overflow			4
#define TRIG_Timer1COMP_B				5
#define TRIG_Timer1_Overflow			6
#define TRIG_Timer1_Event				7
/******************************************/
/*****************************************************************/

/*Error Status*/
typedef enum
{
	Ret_OK=0,
	Ret_NOK,
	Ret_NULL
}ADC_enuErrorStatus_t;
/******************************************/

/*ADC register accessing pointers Data*/ 
typedef struct {
	
	u16 ADC_DATA;
	u8  ADC_ADCSRA;
	u8  ADC_ADMUX;


}volatile * const ADC_strREG_t; 



#define	SFIO *((volatile u8 * const )0x50)
/*******************************************/

/*ISR Handling Func*/
void __vector_16 (void) __attribute__((signal));

#endif