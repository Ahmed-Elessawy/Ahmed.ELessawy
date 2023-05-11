
#include"TIMER_Private.h"
#include"TIMER_Config.h"

/*********************************************/

/*********************************************/


/**********TMR_0&TIMER_2 Configuration ***************/
		
		/*Wave Generation Mode*/
		
		/*   TMR_MODE_NORMAL
			 TMR_MODE_PHASE_CORRECT_PWM
			 TMR_MODE_CTC
			 TMR_MODE_FASTPWM*/	 
			
			
		/* Compare Match Output Pin*/
/**********************************************/

			/*NON_PWM_MODE*/

		/* TMR_COMP_PIN_DISCONNCTED
		   TMR_COMP_PIN_TOGGLE
		   TMR_COMP_PIN_CLEAR
		   TMR_COMP_PIN_SET        */
/**********************************************/

			/*FAST_PWM_MODE*/

		/* TMR_COMP_PIN_DISCONNCTED
		   TMR_COMP_PIN_CLEAR
		   TMR_COMP_PIN_SET       */
/**********************************************/

			/*PHASE_CORRECT_PWM_MODE*/

		/* TMR_COMP_PIN_DISCONNCTED
		   TMR_COMP_PIN_CLEAR
		   TMR_COMP_PIN_SET       */

/**************Interrupt Options*****************/

		    /*TMR OVRF INT
			  TMR_INT_ENABLE	
			  TMR_INT_DISABLE*/
			
			/*TMR COMP INT
			  TMR_INT_ENABLE	
			  TMR_INT_DISABLE*/

/****************************************************/



/**********Timer 1 Configuartion************************/

		/*Wave Generation Mode*/
		
		/*	Normal
			TMR1_PWM_PhaseCorrect_8BIT
			TMR1_PWM_PhaseCorrect_9BIT
			TMR1_PWM_PhaseCorrect_10BIT
			TMR1_CTC_OCR1A
			TMR1_FASTPWM_8BIT
			TMR1_FASTPWM_9BIT
			TMR1_FASTPWM_10BIT
			TMR1_PWM_PHASE_FREQ_CORRECT_ICR1
			TMR1_PWM_PHASE_FREQ_CORRECT_OCR1
			TMR1_PWM_PHASE_CORRECT_ICR1
			TMR1_PWM_PHASE_CORRECT_OCR1A
			TMR1_CTC_ICR1
			TMR1_FAST_PWM_ICR1
			TMR1_FAST_PWM_OCR1 				*/
/**********************************************/

		/*Output Compare Pin*/
		
		/*NON PWM MODE*/
		
		/*Channel A	
		/* TMR_CH_A_COMP_PIN_DISCONNCTED
		   TMR_CH_A_COMP_PIN_TOGGLE
		   TMR_CH_A_COMP_PIN_CLEAR
		   TMR_CH_A_COMP_PIN_SET        */
		   
		/*Channel B	
		/* TMR_CH_B_COMP_PIN_DISCONNCTED
		   TMR_CH_B_COMP_PIN_TOGGLE
		   TMR_CH_B_COMP_PIN_CLEAR
		   TMR_CH_B_COMP_PIN_SET        */   
		   
		   
		   
		/*FAST PWM MODE*/
		
		/*Channel A	
		/* TMR_CH_A_COMP_PIN_DISCONNCTED
		   TMR_CH_A_COMP_PIN_TOGGLE  (in case FAST_PWM_OCR1 mode only)  
		   TMR_CH_A_COMP_PIN_CLEAR_SET_BOTTOM
		   TMR_CH_A_COMP_PIN_SET_CLEAR_BOTTOM				        */
		   
		/*Channel B	
		/* TMR_CH_B_COMP_PIN_DISCONNCTED
		   TMR_CH_A_COMP_PIN_CLEAR_SET_BOTTOM
		   TMR_CH_A_COMP_PIN_SET_CLEAR_BOTTOM      */ 

		/*PWM Phase and Frequency Correct*/
		
		/*Channel A	
		/* TMR_CH_A_COMP_PIN_DISCONNCTED
		   TMR_CH_A_COMP_PIN_TOGGLE  (in case from TMR1_PWM_PHASE_FREQ_CORRECT_ICR1 to TMR1_FAST_PWM_ICR1 mode)  
		   TMR_CH_A_COMP_PIN_CLEAR_SET_BOTTOM
		   TMR_CH_A_COMP_PIN_SET_CLEAR_BOTTOM				        */
		   
		/*Channel B	
		/* TMR_CH_B_COMP_PIN_DISCONNCTED
		   TMR_CH_A_COMP_PIN_CLEAR_SET_BOTTOM
		   TMR_CH_A_COMP_PIN_SET_CLEAR_BOTTOM      */ 
			
/**********************************************************************/		   
			
		/**************Interrupt Options*****************/

		    /*TMR OVRF INT
			  TMR_INT_ENABLE	
			  TMR_INT_DISABLE*/
			
			/*TMR COMP INT
			  
			  Channel A	
			  TMR_CH_A_INT_ENABLE	
			  TMR_CH_A_DISABLE
			  
			  Channel B
			  TMR_CH_B_INT_ENABLE	
			  TMR_CH_B_INT_DISABLE*/

/****************************************************/	
	
	
	
/**********************************************/


		/*Presscaler Options*/

			/*CLK_NO_PRESCALING
			  CLK_OVR_8
			  CLK_OVR_64
			  CLK_OVR_256	
              CLK_OVR_1024
			  CLK_EXTERNAL_RISING
			  CLK_EXTERNAL_FALLING*/

/************************************************/	

const TMR_Cfg_t TMR_Cfg[NUMBER_OF_TIMERS]=
{
	[0].TMR_WAVEGM	 =TMR_MODE_FASTPWM,
	[0].TMR_COMP_PIN=TMR_PIN_DISCONNCTED,
	[0].TMR_PreSclr =CLK_OVR_64,
	[0].TMR_OVRF_INT=TMR_INT_DISABLE,
	[0].TMR_COMP_INT=TMR_INT_DISABLE,
	

	[1].TMR_WAVEGM	 =TMR_MODE_FASTPWM,
	[1].TMR_COMP_PIN=TMR_PIN_DISCONNCTED,
	[1].TMR_PreSclr =CLK_OVR_64,
	[1].TMR_OVRF_INT=TMR_INT_DISABLE,
	[1].TMR_COMP_INT=TMR_INT_DISABLE,
	
	
	[2].TMR_WAVEGM	 =TMR_MODE_NORMAL,
	[2].TMR_COMP_PIN=(TMR_CH_A_COMP_PIN_DISCONNCTED<<2)|(TMR_CH_B_COMP_PIN_DISCONNCTED),
	[2].TMR_PreSclr =CLK_OVR_1024,
	[2].TMR_OVRF_INT=TMR_INT_DISABLE,
	[2].TMR_COMP_INT=(TMR_CH_A_DISABLE<<1)|(TMR_CH_B_INT_DISABLE)
};