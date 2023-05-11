/** @file dio.h
* @brief The interface definition for the dio.
*
* This is the header file for the definition of the interface for a digital
* input/output peripheral on a standard microcontroller.
*/



/**********************************************************************
* Includes
**********************************************************************/
#include"Std_Types.h"
/**********************************************************************
* Preprocessor Constants
**********************************************************************/
/**********************************************************************
* Configuration Constants
**********************************************************************/
/**********************************************************************
* Macros
**********************************************************************/
/**********************************************************************
* Typedefs
**********************************************************************/



/**********************************************************************
* Variables
**********************************************************************/
/**********************************************************************
* Function Prototypes
**********************************************************************/


/*IRQ Options

NVIC_WINDOW_WATCHDOG_TIMER	
NIVC_EXTERNAL_LINE16		
NIVC_EXTERNAL_LINE21		
NIVC_EXTERNAL_LINE22		
NIVC_FLASH_INTERRUPT		
NVIC_RCC_INTERRUPT			
NVIC_EXT0_INTERRRUPT		
NVIC_EXT1_INTERRRUPT		
NVIC_EXT2_INTERRRUPT		
NVIC_EXT3_INTERRRUPT		
NVIC_EXT4_INTERRRUPT		
NVIC_DMA1_STREAM0			
NVIC_DMA1_STREAM1			
NVIC_DMA1_STREAM2			
NVIC_DMA1_STREAM3			
NVIC_DMA1_STREAM4			
NVIC_DMA1_STREAM5			
NVIC_DMA1_STREAM6          
NVIC_ADC_INTERRUPT         
NVIC_EXT9_INTERRUPT        
NVIC_TIM1_BRK_INTERRUPT    
NVIC_TIM1_UP_INTERRUPT     
NVIC_TIMI1_TRG_INTERRUPT   
NVIC_TIMI1_CC_INTERRUPT    
NVIC_TIMI2_INTERRUPT       
NVIC_TIMI3_INTERRUPT       
NVIC_TIMI4_INTERRUPT       
NVIC_I2C1_EV_INTERRUPT     
NVIC_I2C1_ER_INTERRUPT     
NVIC_I2C2_EV_INTERRUPT     
NVIC_I2C2_ER_INTERRUPT     
NVIC_SPI1_INTERRUPT        
NVIC_SPI2_INTERRUPT        
NVIC_USART1_INTERRUPT      
NVIC_USART2_INTERRUPT      
NVIC_EXTI15_INTERRUPT      
NVIC_EXTI17_INTERRUPT      
NVIC_EXTI18_INTERRUPT      
NVIC_DMA1_INTERRUPT        
NVIC_SDIO_INTERRUPT        
NVIC_TIM5_INTERRUPT        
NVIC_SPI3_INTERRUPT        
NVIC_DMA2_STREAM0_INTERRUPT
NVIC_DMA2_STREAM1_INTERRUPT
NVIC_DMA2_STREAM2_INTERRUPT
NVIC_DMA2_STREAM3_INTERRUPT
NVIC_DMA2_STREAM4_INTERRUPT
NVIC_OTG_FS_INTERRUPT      
NVIC_DMA2_STREAM5_INTERRUPT
NVIC_DMA2_STREAM6_INTERRUPT
NVIC_DMA2_STREAM7_INTERRUPT
NVIC_USART6_INTERRUPT      
NVIC_I2C3_EV_INTERRUPT     
NVIC_I2C3_ER_INTERRUPT     
NVIC_FPU_INTERRUPT         
NVIC_SPI4_INTERRUPT*/   



/*Group Options

Group3			// 4 bits => for group Priority && 0 bits for sub group
Group4          // 3 bits => for group Priority && 1 bits for sub group
Group5          // 2 bits => for group Priority && 2 bits for sub group
Group6          // 1 bits => for group Priority && 3 bits for sub group
Group7*/        // 0 bits => for group Priority && 4 bits for sub group



extern void Nvic_vidEnableIrq(u8 Copy_strIrq);
extern void Nvic_vidDisableIrq(u8 Copy_strIrq);
extern void Nvic_vidSetPendingIrq(u8 Copy_strIrq);
extern void Nvic_vidClearPendingIrq(u8 Copy_strIrq);
extern void Nvic_vidGetPendingIrq(u8 Copy_strIrq, u8 *Add_pu8PendingStatus);
extern void Nvic_vidGetPriority(u8 Copy_strIrq, u8 *Add_pu8Prioty);
extern void Nvic_vidSetPriority(s8 Copy_strIrq, u8 Copy_u8GroupPrioty,  u8 Copy_u8SubGroupPrioty, u32 Copy_u32Group);
