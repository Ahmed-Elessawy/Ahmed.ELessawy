/**************************************************************/
/* Author: Ahmed Elessawy Rashid                              */
/* Date: 31-Jan-31                                            */
/* Version: 01                                                */
/* Description: Interface file for RCC Driver  			  */
/**************************************************************/

/*Preprocessor Guard*/
#ifndef RCC_INTERFACE_H 
#define RCC_INTERFACE_H



typedef enum 
{
	RCC_OK=0,
	RCC_NOK
}RCC_enuErrorStatus;


/*********************************************************************************/
/* Function: RCC_voidInit                        				    			**/
/* I/P Parameters: No input							                            **/
/* Returns:it returns No thing                                				    **/
/* Desc:This Function initilaize the clock configuration according to initial 
	    configurations 															**/
/*********************************************************************************/

void RCC_vidInit(void);
/*********************************************************************************/


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


#endif//RCC_Interface
