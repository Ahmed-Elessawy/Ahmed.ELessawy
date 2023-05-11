



#ifndef SYSTICK_PRIVATE_H
#define SYSTICK_PRIVATE_H

#include "Std_Types.h"

#define SYSTICK_ENABLE 	       		1U
#define SYSTICK_EXC_ENABLE     		2U
#define SYSTICK_CLK_SRC_AHB_BIT     2U	    	
#define SYSTICK_CLK_SRC_AHB         4U
#define SYSTICK_CNT_FLAG_BIT        16U	 


typedef struct 
{
	u32 STK_CTRL;
	u32 STK_LOAD;
	u32 STK_VAL;
}volatile StkReg_t * const;


typedef enum{
	
	SysTick_OK;
	SysTick_NOK;
	
}ErrorStatus_t;

typedef void(*sysTick_CBF)(void);




#endif