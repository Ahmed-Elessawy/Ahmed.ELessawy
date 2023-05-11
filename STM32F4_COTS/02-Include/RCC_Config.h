/**************************************************************/
/* Author: Ahmed Elessawy Rashid                              */
/* Date: 31-Jan-31                                            */
/* Version: 01                                                */
/* Description: Cnofig file for RCC Driver  			  */
/**************************************************************/

/*Preprocessor Guard*/
#ifndef RCC_CONFIG_H 
#define RCC_CONFIG_H

/*available clock source 

HSI :High speed internal 
HSE :Hihg speed external
PLL that takes source from HSI or HSE.*/

		/*
		RCC_HSI   	
		RCC_HSE   	
		RCC_PLL   
		*/
		
//select option from the above options 
/*********************************************/
#define RCC_InitClockSource 	RCC_PLL 
/*********************************************/


/*if PLL is selected it must have source HSI or HSE*/

/*selct PLL Source : HSI
					 HSE*/
/**********************************************/					 					 
#define PLL_SOURCE_CLOCK		RCC_HSE
/*********************************************/
/*************************************************************************/


		/*Values of M,Q,P and N must be configured according to these equations to get the desired frequency
		
		f(VCO clock) = f(PLL clock input) × (PLLN / PLLM)
		
		f(PLL general clock output) = f(VCO clock) / PLLP
		
		(USB OTG FS, SDIO, RNG clock output) = f(VCO clock) / PLLQ
		
		*/


		//Caution:
		/*The USB OTG FS requires a 48 MHz clock to work correctly. The SDIO and the
		random number generator need a frequency lower than or equal to 48 MHz to work
		correctly.*/
		

/* RCC PLL configuration factors */

//Vlaue of M must be from 2 to 63     2<=M<=63

/*********************************************/
#define RCC_InitPLLM_Value      10	
/*********************************************/


/*Value of P must be from 2,4,6 and 8*/
			/*
			PLLP  vlaue 2 maps to 00=0
			PLLP  vlaue 4 maps to 01=1
			PLLP  vlaue 6 maps to 10=2
			PLLP  vlaue 8 maps to 11=3
			*/
/*********************************************/
#define RCC_InitPLLP_Value		3			
/*********************************************/



/*Value of Q must be from 2 to 15     2<=Q<=15*/
/*********************************************/
#define RCC_InitPLLQ_Value		10			
/*********************************************/



/*Value of N must be from 192 to 432  192<=N<=432*/

/*********************************************/
#define RCC_InitPLLN_Value		200			
/*********************************************/
/****************************************************************************/

#endif
