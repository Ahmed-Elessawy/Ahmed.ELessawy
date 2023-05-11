//Author : Ahmed Elessawy 


#include"../../LIB/Std_Types.h"
#include"../../LIB/Macros.h"
#include"../02-include/GLOBAL_INTERR_Private.h"
#include"../02-include/GLOBAL_INTERR_Interface.h"

void GlobalINT_enuEnable(void)
{
	
	SET_BIT(SREG,GLOBAL_INTERR_ENABLE_BIT);
	
}


void GlobalINT_enuDisable(void)
{
	
	CLR_BIT(SREG,GLOBAL_INTERR_ENABLE_BIT);
	
}