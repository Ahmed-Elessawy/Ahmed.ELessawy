/**************************************************************/
/* Author: Ahmed Elessawy Rashid                              */
/* Date: 31-Jan-31                                            */
/* Version: 01                                                */
/* Description: Cnofig file for RCC Driver  			  */
/**************************************************************/

#include"../include/Std_Types.h"
#include"../include/Macros.h"
#include"../include/RCC_Config.h"
#include"../include/RCC_Private.h"

u32 PLL_ConfigurationValues=(RCC_InitPLLM_Value<<PLLM_OFFSET) | (RCC_InitPLLN_Value<<PLLN_OFFSET)| (RCC_InitPLLP_Value<<PLLP_OFFSET) | (RCC_InitPLLQ_Value<<PLLQ_OFFSET);;


							

u32 RCC_SWClockSource=(u32)(RCC_InitClockSource<<RCC_SW_MASK);


