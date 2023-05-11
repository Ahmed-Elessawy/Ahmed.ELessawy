#include"Std_Types.h"
#include"Macros.h"
#include"RCC_Interface.h"



RCC_tstrPtr RCC_tstrMapPtr = ((RCC_tstrPtr)0x40023800);


/*Function: RCC_Selcet Source Clock                         				    **/
/* I/P Parameters: Prehperal Name (HSI,HSE,PLL)					  	    		**/
/* Returns:it returns error status                               			    **/
/* Desc:This Function selects system clock	 								    **/
/*********************************************************************************/
RCC_enuErrorStatus rcc_enuSelectSrcClk(u32 Cpy_u32SrcClk)
{
	RCC_enuErrorStatus Error=RCC_OK;
	u16 Loc_TimeOut=0xFFFF
	SET_BIT(RCC_tstrMapPtr->RCC_CR,HSI_ON_BIT);
	while(GET_BIT(RCC_tstrMapPtr->RCC_CR,HSI_RDY_BIT)==CLOCK_NRDY && Loc_TimeOut);
	
	if(Loc_TimeOut==0)
	{
		Error=RCC_NOK;
	}
	else
	{
		
	}
	return Error;
}




/********************************************************************************/
/* Function: RCC_Selcet PLL Source Clock                         				**/
/* I/P Parameters: Prehperal Name (HSI,HSE)					  	    		**/
/* Returns:it returns error status                               			    **/
/* Desc:This Function selects PLL source clock	 							    **/
/*********************************************************************************/
RCC_enuErrorStatus rcc_enuSelectPLLSrc(u32 Cpy_u32PLLSrc);