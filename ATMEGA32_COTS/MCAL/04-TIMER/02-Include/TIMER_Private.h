/** @file TimerPrivate.h
* @brief The Register definition for the Timer.
*
* This is the header file for the definition of register addresses 
on a standard microcontroller.
*/

#ifndef TIMER_PRIVATE_H
#define TIMER_PRIVATE_H

/**********************************************************************
* Includes
**********************************************************************/
#include"Std_Types.h"

/**********************************************************************
* Preprocessor Constants*/
#define TMR_u32_MAXVAL_TIMER1_REG		65535
#define TMR_u8_MAXVAL_TIMER02_REG		255

#define TMR_u8_TIMER1_TICKTIME		    1U

/**********************************************************************/
/**********************************************************************
* Configuration Constants*/

/**********TMR_0 Configuration ***************/
		
		/*Wave Generation Mode*/
			/*TWO BITS CFG*/
#define  TMR_CFG_CLEAR					0x00

#define  TMR_MODE_NORMAL				0x00
#define  TMR_MODE_PHASE_CORRECT_PWM		0x40
#define  TMR_MODE_CTC					0x08
#define  TMR_MODE_FASTPWM				0x48	 
			

#define TMR_PIN_DISCONNCTED				0U
		
		
		/* Compare Match Output Pin*/
/**********************************************/

			/*NON_PWM_MODE*/
			/*TWO BITS CFG*/

#define  TMR_COMP_PIN_DISCONNCTED		0x00
#define  TMR_COMP_PIN_TOGGLE			0x10
#define  TMR_COMP_PIN_CLEAR				0x20
#define  TMR_COMP_PIN_SET  				0x30      

	

/**********************************************/


		/*Presscaler Options*/
		/*THREE BITS CFG*/		
#define  CLK_DISABLE                    0xF8
#define	 CLK_NO_PRESCALING			    0x01              
#define	 CLK_OVR_8						0x02
#define	 CLK_OVR_64						0x03
#define	 CLK_OVR_256					0x04	
#define  CLK_OVR_1024					0x05
#define	 CLK_EXTERNAL_RISING			0x06
#define	 CLK_EXTERNAL_FALLING			0x07

/**********************************************/

	    /*Interrupt Options*/
		/*1 BIT CFG*/

#define TMR_INT_CLEAR					 0x3C

#define TMR0_OVRF_INT_ENABLE             0x01 
#define TMR0_COMP_INT_EBABLE			 0x02

#define TMR2_OVRF_INT_ENABLE			 0x40
#define TMR2_COMP_INT_ENABLE			 0x80

#define TMR_INT_DISABLE					 0x00

/**********************************************/
/***************TIMER1*******************************/

#define TIMER1_CFG_CLEAR							0x00C0


#define  TMR1_NORMAL							0U
#define  TMR1_PWM_PhaseCorrect_8BIT				1U
#define  TMR1_PWM_PhaseCorrect_9BIT				2U
#define  TMR1_PWM_PhaseCorrect_10BIT			3U
#define  TMR1_CTC_OCR1A							4U
#define  TMR1_FASTPWM_8BIT						5U
#define  TMR1_FASTPWM_9BIT						6U
#define  TMR1_FASTPWM_10BIT						7U
#define  TMR1_PWM_PHASE_FREQ_CORRECT_ICR1		8U
#define  TMR1_PWM_PHASE_FREQ_CORRECT_OCR1		9U
#define  TMR1_PWM_PHASE_CORRECT_ICR1			10U
#define  TMR1_PWM_PHASE_CORRECT_OCR1A			11U
#define  TMR1_CTC_ICR1							12U
#define  TMR1_FAST_PWM_ICR1						14U
#define  TMR1_FAST_PWM_OCR1 					15U
/**********************************************/

		/*Output Compare Pin*/
		
		/*NON PWM MODE*/
		
		/*Channel A*/	
#define		TMR_CH_A_COMP_PIN_DISCONNCTED		0U
#define		TMR_CH_A_COMP_PIN_TOGGLE			1U
#define		TMR_CH_A_COMP_PIN_CLEAR				2U
#define		TMR_CH_A_COMP_PIN_SET        		3U
		   
		/*Channel B	*/
#define		TMR_CH_B_COMP_PIN_DISCONNCTED		0U
#define		TMR_CH_B_COMP_PIN_TOGGLE			1U
#define		TMR_CH_B_COMP_PIN_CLEAR				2U
#define		TMR_CH_B_COMP_PIN_SET           	3U
		   
		   
		   
		/*FAST PWM MODE*/
		
		/*Channel A	*/
#define		TMR_CH_A_COMP_PIN_DISCONNCTED		0U
#define		TMR_CH_A_COMP_PIN_TOGGLE    		1U
#define		TMR_CH_A_COMP_PIN_CLEAR_SET_BOTTOM  2U
#define		TMR_CH_A_COMP_PIN_SET_CLEAR_BOTTOM	3U			        
		   
		/*Channel B*/	
		
#define     TMR_CH_B_COMP_PIN_DISCONNCTED		0U
#define     TMR_CH_A_COMP_PIN_CLEAR_SET_BOTTOM  2U
#define     TMR_CH_A_COMP_PIN_SET_CLEAR_BOTTOM  3U     
                                                
		/*PWM Phase and Frequency Correct*/
		
		/*Channel A*/	
#define 	TMR_CH_A_COMP_PIN_DISCONNCTED		0U
#define 	TMR_CH_A_COMP_PIN_TOGGLE            1U
#define 	TMR_CH_A_COMP_PIN_CLEAR_SET_BOTTOM  2U
#define 	TMR_CH_A_COMP_PIN_SET_CLEAR_BOTTOM	3U			        
 		/*Channel B	*/
		
#define 	TMR_CH_B_COMP_PIN_DISCONNCTED		0U
#define 	TMR_CH_A_COMP_PIN_CLEAR_SET_BOTTOM  2U
#define 	TMR_CH_A_COMP_PIN_SET_CLEAR_BOTTOM  3U    
			
/**********************************************************************/		   
			
		/**************Interrupt Options*****************/

			/*TMR COMP INT*/
			  
			  /*Channel A	*/
#define		TMR_CH_A_INT_ENABLE	   1U
#define		TMR_CH_A_DISABLE	   0U
			  
			  /*Channel B */
#define 	TMR_CH_B_INT_ENABLE	   1U 	
#define 	TMR_CH_B_INT_DISABLE   0U





/****************Registers********************/

/*Timer0*/
#define TMR_TCCR0      (0x53)
#define TMR_TCNT0      (0x52)
#define TMR_OCR0       (0x5C)


/*Timer2*/
#define TMR_TCCR2      (0x45)
#define TMR_TCNT2      (0x44)
#define TMR_OCR2       (0x43)


/*Timer1*/

/*u8 access*/
#define TMR_TCCR1B	   (0x4E)  

/*u16 access*/
#define TMR_TCCR1      (0x4E)
#define TMR_TCNT1	   (0x4C)
#define TMR_OCRA1	   (0x4A)
#define TMR_OCRB1      (0x48)
#define TMR_ICR1	   (0x46)  	
#define TMR_TIMSK 	   *((volatile u8* const) 0x59)

/**********************************************************************
* ****************Typedefs*********************/
/**********************************************************************/

typedef volatile u8   * const TMR_REG_t[];

typedef volatile u16  * const TMR1_REG_t[];

typedef void (*TMR_CBF_t[3])(void); 

/**********************************************************************
* Variables
**********************************************************************/
/**********************************************************************
* Function Prototypes
**********************************************************************/



/************************************************************/
/*      ISRs of Overflow timer interrupts                   */
/************************************************************/
/*The ISR of Timer/Counter0 Overflow interrupt*/
void __vector_11 (void) __attribute__((signal));

/*The ISR of Timer/Counter1 Overflow interrupt*/
void __vector_9 (void) __attribute__((signal));

/*The ISR of Timer/Counter2 Overflow interrupt*/
void __vector_5 (void) __attribute__((signal));

/************************************************************/
/*      ISRs of Compare Match timer interrupts              */
/************************************************************/
/*The ISR of Timer/Counter0 Compare Match interrupt*/
void __vector_10 (void) __attribute__((signal));

/*The ISR of Timer/Counter1 Compare Match A interrupt*/
void __vector_7 (void) __attribute__((signal));

/*The ISR of Timer/Counter1 Compare Match B interrupt*/
void __vector_8 (void) __attribute__((signal));

/*The ISR of Timer/Counter2 Compare Match interrupt*/
void __vector_4 (void) __attribute__((signal));

/*ISRs of Input Capture interrupts */
void __vector_6 (void) __attribute__((signal));

/*************************************************************************************/
/*Static Functions to set the desired time needed in case of normal mode or CTC mode */
/*************************************************************************************/
static void TMR_vSetOVRF_Time(u8 Copy_u8TimerNb,f32 Copy_f32TimerCtr);
static void TMR_vSetTIMERCTCTime (u8 Copy_u8TimerNb,f32 Copy_f32TimerCtr);

/*
static void TMR_vSetTIMER0CTCTime (f32 Copy_f32TimerCtr);
static void TMR_vSetTIMER1CTCTime (f32 Copy_f32TimerCtr);
static void TMR_vSetTIMER2CTCTime (f32 Copy_f32TimerCtr);
*/


#endif




