/**************************************************************/
/* Author: Ahmed Elessawy Rashid                              */
/* Date: 31-Jan-31                                            */
/* Version: 01                                                */
/* Description: Private file for RCC Driver  			  	  */
/**************************************************************/

/*Preprocessor Guard*/
#ifndef RCC_PRIVATE_H 
#define RCC_PRIVATE_H

/***************************************************************/

//RCC clock an dcontrol register Bits numbers 
#define	HSI_ON_BIT   		0
#define HSI_RDY_BIT  		1
#define HSE_ON_BIT	 		16	
#define HSE_RDY_BIT  		17
#define HSE_BYP_BIT	 		18	
#define CSS_ON_BIT			19
#define PLL_ON_BIT			24
#define PLL_RDY_BIT			25
#define PLLI2S_ON_BIT       26
#define PLLI2S_ON_BIT       27
/******************************************/


//RCC options Masks





//Clock Bits Reday Flags
#define  CLOCK_RDY  1     //to check that the choosded clock is ready or not ready
#define  CLOCK_NRDY 0     //



/*RCC PLL configuration register bits Masks.*/

#define PLLM_MASK   0x0F437FC0   //M fcator mask|- 
#define PLLN_MASK   0x0F43003F   //N factor mask| --factors are arranged in register wiht the same arrangement 
#define PLLP_MASK	0x0F407FFF	 //P factor mask| --
#define PLLQ_MASK   0x00437FFF   //Q factor mask|-
/****************************************************************/

/*RCC PLL configuration register bits offset*/
#define PLLM_OFFSET 0				
#define PLLN_OFFSET	6
#define PLLP_OFFSET 15
#define PLLQ_OFFSET 23
/*********************************************/


#define PLL_SCR_BIT 22


/********************************************/


/*RCC clock CFGR Register for clock source selection bits(SW0,SW1) written by software to choose source clock
  (SWS0,SWS1) written by hardware -> we that the choosen source clock is already choosen by reading them*/

//SW BITS
/***************************************************/
#define RCC_SW_MASK    			0xFFFFFCFC
#define RCC_SW_OFFSET  			0
/***************************************************/

//SWS BITS
/***************************************************/
#define RCC_SWS_MASK    		0x3
#define RCC_SWS_OFFSET  		2
/***************************************************/



/*HSI is the initial source clock as soon as the system start up  
in config file the user should select between these options which clock to b the system clock.*/
/*Source clocks options*/ 
/***************************************************/  
#define HSI_SOURCE_CLOCK		0
#define HSE_SOURCE_CLOCK		1
#define PLL_SOURCE_CLOCK		2
/***************************************************/


//AHB BUS Prescaler 

/***************************************************/
#define RCC_AHB_PRESCLR_MASK 	0xFFFFFC03
#define RCC_AHB_OFFSET 			4
/***************************************************/

//APB2 BUS prescaler 
/***************************************************/
#define RCC_APB2_PRESCLR_MASK	0xFFFF1CF3
#define RCC_APB2_OFFSET			12
/***************************************************/




//Buses Interfcaes Index

/***************************************************/
#define AHB1   0
#define APB1   1
#define APB2   2	
/***************************************************/




/*every prehperal has an enable bit in RCC registers (AHB1_ENRRCC_AHB1RSTR ,RCC_APB1RSTR,RCC_APB2RSTR)
/*Each bus is connected to some prehperals*/
/*they are mapped here from number 0 to (4*32)  including reserved bits*/

/*Prepheral Enable Bits Numbers*/                             

/***************************************************/                                                             
typedef enum                                                 
{
	//AHB1 prepherals 
	GPIOA=0,
	GPIOB,
	GPIOC,
	GPIOD,
	GPIOE,
	GPIOH=7,
	CRCEN=12,
	DMA1=21,
	DMA2,
/*****************/

//APB1 Prepheral Enable

/*************************/
	TIM2=32,
	TIM3,
	TIM4,
	TIM5,
	WWDG=43,
	SPI2=46,
	SPI3,
	UART2=48,
	I2C1=53,
	I2C2,
	I2C3,
	PWR=60,	
/*************************/


//APB2 Prehperals Enable

/*************************/ 
	TIM1=64,
	USART1=68,
	USART6,
	ADC1=72,
	SDIO=75,
	SPI1,
	SPI4,
	SYSCFG,
	TIM9=80,
	TIM10,
	TIM11,
/*************************/


}RCC_enuPrepheralsNumber;
/*****************************************************/

typedef struct 
{
	
	u32 RCC_CR;      		// rcc clock control register that contains enbale bits of clocks in the system
	u32 RCC_PLLCFGR;		// rcc PLL configuration value that calculate the freq output from main PLL
	u32 RCC_CFGR;			// rcc clock configuration that selects the source clock of the system  
	u32 RCC_CIR;			// rcc clock interupt enable 
	
	u32 RCC_AHB1RSTR; 		// AHB1 bus prehperals Restart  
	u32 RCC_AHB2RSTR;		// AHB2 bus prehperals Restart
	
	u32 Reserved0; 			/*there are reserved addresses between the registers ,so it's mapped here to access 
							  corrrect addresses*/
	u32 Reserved1;
	
	u32 RCC_APB1RSTR;	    // APB1 bus prehperals Restart	
	u32 RCC_APB2RSTR;		// APB2 bus prehperals Restart
	
	u32 Reserved2; 			
	u32 Reserved3;
	
	
	
	u32 RCC_AHB1ENR;		// AHB1 bus prehperals Enable
	u32 RCC_AHB2ENR;        // AHB2 bus prehperals Enable
	                        
	u32 Reserved4;          
	u32 Reserved5;          
	                        
	                        
	u32 RCC_APB1ENR;        // APB1 bus prehperals Enable
	u32 RCC_APB2ENR;        // APB2 bus prehperals Enable
	
	u32 Reserved6;
	u32 Reserved7;
	
	
	u32 RCC_AHB1LPENR;		// AHB1 bus prehperals low power Enable
	u32 RCC_AHB2LPENR;      // AHB2 bus prehperals low power Enable
	
	u32 Reserved8;
	u32 Reserved9;
	
	u32 RCC_APB1LPENR;		// APB1 bus prehperals low power Enable
	u32 RCC_APB2LPENR;      // APB2 bus prehperals low power Enable
	
	
	u32 Reserved10;			
	u32 Reserved11; 
	
	
	
	u32 RCC_BCDR;
	u32 RCC_CSR;
	
	u32 Reserved12;			 							
	u32 Reserved13;			
	
	
	u32 RCC_SSCGR;
	u32 RCC_PLLI2SCFGR;
	
	u32 Reserved14;
	
	u32 RCC_DCKCFGR;
	
}volatile  * const RCC_tstrPtr;


RCC_tstrPtr RCC_tstrMapPtr = ((RCC_tstrPtr)0x40023800);  	//declaring a pointer to RCC Reisters starts at the 
															//base address of RCC preheral		

typedef enum 
{
	RCC_OK=0,
	RCC_NOK
}RCC_enuErrorStatus;



/*********************************************************************************/
/* Function: RCC_Selcet Source Clock                         				    **/
/* I/P Parameters: Prehperal Name (HSI,HSE,PLL)					  	    		**/
/* Returns:it returns error status                               			    **/
/* Desc:This Function selects system clock	 								    **/
/*********************************************************************************/
RCC_enuErrorStatus rcc_enuSelectSrcClk(u32 Cpy_u32SrcClk);


/*********************************************************************************/
/* Function: RCC_Selcet PLL Source Clock                         				**/
/* I/P Parameters: Prehperal Name (HSI,HSE)					  	    		**/
/* Returns:it returns error status                               			    **/
/* Desc:This Function selects PLL source clock	 							    **/
/*********************************************************************************/
RCC_enuErrorStatus rcc_enuSelectPLLSrc(u32 Cpy_u32PLLSrc);

/*********************************************************************************/
/* Function: RCC_enable security system                        				**/
/* I/P Parameters: Prehperal Name (HSI,HSE,PLL)					  	    		**/
/* Returns:it returns error status                               			    **/
/* Desc:This Function selects PLL source clock	 							    **/
/*********************************************************************************/
RCC_enuErrorStatus rcc_enuEnableClkSecurity(void);


/*********************************************************************************/
/* Function: RCC_Selcet MCO2 src clock                         				**/
/* I/P Parameters: Prehperal Name (HSI,HSE,PLL)					  	    		**/
/* Returns:it returns error status                               			    **/
/* Desc:This Function selects PLL source clock	 							    **/
/*********************************************************************************/
RCC_enuErrorStatus rcc_enuSelectMCO2Src(u32 Cpy_u32MCO2Src);


/*********************************************************************************/
/* Function: RCC_Selcet MCO1 src clock                        				**/
/* I/P Parameters: Prehperal Name (HSI,HSE,PLL)					  	    		**/
/* Returns:it returns error status                               			    **/
/* Desc:This Function selects PLL source clock	 							    **/
/*********************************************************************************/
RCC_enuErrorStatus rcc_enuSelectMCO1Src(u32 Cpy_u32MCO1Src);

/*********************************************************************************/
/* Function: RCC_Selcet MCO2 prescaler                        				**/
/* I/P Parameters: Prehperal Name (HSI,HSE,PLL)					  	    		**/
/* Returns:it returns error status                               			    **/
/* Desc:This Function selects PLL source clock	 							    **/
/*********************************************************************************/
RCC_enuErrorStatus rcc_enuSelectMCO2Prescaler(u32 Cpy_u32MCO2Pre);


/*********************************************************************************/
/* Function: RCC_Selcet MCO1 prescaler                           				**/
/* I/P Parameters: Prehperal Name (HSI,HSE,PLL)					  	    		**/
/* Returns:it returns error status                               			    **/
/* Desc:This Function selects PLL source clock	 							    **/
/*********************************************************************************/
RCC_enuErrorStatus rcc_enuSelectMCO1Prescaler(u32 Cpy_u32MCO1Pre);

/*********************************************************************************/
/* Function: RCC_Selcet I2S Clock                           				**/
/* I/P Parameters: Prehperal Name (HSI,HSE,PLL)					  	    		**/
/* Returns:it returns error status                               			    **/
/* Desc:This Function selects PLL source clock	 							    **/
/*********************************************************************************/
RCC_enuErrorStatus rcc_enuSelectI2SSrcClk(u32 I2S_Src);

/*********************************************************************************/
/* Function: RCC_Selcet I2S Clock                           				**/
/* I/P Parameters: Prehperal Name (HSI,HSE,PLL)					  	    		**/
/* Returns:it returns error status                               			    **/
/* Desc:This Function selects PLL source clock	 							    **/
/*********************************************************************************/
RCC_enuErrorStatus rcc_enuSelectRTC_Div(u32 RTC_Div);

/*********************************************************************************/
/* Function: RCC_Selcet I2S Clock                           				**/
/* I/P Parameters: Prehperal Name (HSI,HSE,PLL)					  	    		**/
/* Returns:it returns error status                               			    **/
/* Desc:This Function selects PLL source clock	 							    **/
/*********************************************************************************/
RCC_enuErrorStatus rcc_enuSelectAPB2_Div(u32 APB2_Div);


/*********************************************************************************/
/* Function: RCC_Selcet I2S Clock                           				**/
/* I/P Parameters: Prehperal Name (HSI,HSE,PLL)					  	    		**/
/* Returns:it returns error status                               			    **/
/* Desc:This Function selects PLL source clock	 							    **/
/*********************************************************************************/
RCC_enuErrorStatus rcc_enuSelectAPB1_Div(u32 APB1_Div);


/*********************************************************************************/
/* Function: RCC_Selcet I2S Clock                           				**/
/* I/P Parameters: Prehperal Name (HSI,HSE,PLL)					  	    		**/
/* Returns:it returns error status                               			    **/
/* Desc:This Function selects PLL source clock	 							    **/
/*********************************************************************************/
RCC_enuErrorStatus rcc_enuSelectAHB_Div(u32 APB1_Div);

/*********************************************************************************/
/* Function: RCC_Selcet I2S Clock                           				**/
/* I/P Parameters: Prehperal Name (HSI,HSE,PLL)					  	    		**/
/* Returns:it returns error status                               			    **/
/* Desc:This Function selects PLL source clock	 							    **/
/*********************************************************************************/
RCC_enuErrorStatus rcc_enuSwitchSysClk(u32 Sys_Clk);





/*********************************************************************************/
/* Function: RCC_ChangePLLFactor                        				    	**/
/* I/P Parameters: PLL Clock Source , (PLLM , PLLN , PLLP, PLLQ) values 	    **/
/* Returns:it returns error status                               			    **/
/* Desc:This Function changes the clcock frequency according to passed factors
			(M,N,P,Q)															**/
/*********************************************************************************/
RCC_enuErrorStatus RCC_enuChangePLLFactor (u32 Copy_u32PLLSource,u32 Copy_u32PLLM_Value,u32 Copy_u32PLLN_Value, 
										   u32 Copy_u32PLLP_Value,u32 Copy_u32PLLQ_Value);
/*********************************************************************************/
 

/*********************************************************************************/
/* Function: RCC_Reset Peripheral                         				    	**/
/* I/P Parameters: Prehperal Name (GPIOA,GPIOB,GPIOC,TIMER,...)  	    		**/
/* Returns:it returns error status                               			    **/
/* Desc:This Function enables prepheral clock 								    **/
/*********************************************************************************/
RCC_enuErrorStatus RCC_enuResetPeripheral(u8 PrepheralNumber);



/*********************************************************************************/
/* Function: RCC_Enable Peripheral                         				    	**/
/* I/P Parameters: Prehperal Name (GPIOA,GPIOB,GPIOC,TIMER,...)  	    		**/
/* Returns:it returns error status                               			    **/
/* Desc:This Function enables prepheral clock 								    **/
/*********************************************************************************/
RCC_enuErrorStatus RCC_enuEnablePeripheral(u8 PrepheralNumber);




/*********************************************************************************/
/* Function: RCC_Disable Peripheral                         				    **/
/* I/P Parameters: Prehperal Name (GPIOA,GPIOB,GPIOC,TIMER,...)  	    		**/
/* Returns:it returns error status                               			    **/
/* Desc:This Function Disables prepheral clock 								    **/
/*********************************************************************************/
RCC_enuErrorStatus RCC_enuDisablePeripheral(u8 PrepheralNumber);










#endif