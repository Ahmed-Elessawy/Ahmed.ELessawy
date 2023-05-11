//Author : Ahmed Elessawy 








#ifndef UART_PRIV_H
#define UART_PRIV_H
#include"Std_Types.h"

/*Status Reg*/

#define USART_SR_PARITY_ERROR         1U
#define USART_SR_FRAME_ERROR	      2U
#define USART_SR_NOISE_FLAG	      	  4U	
#define USART_SR_OVER_RUN_ERROR       8U
#define USART_SR_IDLE_LINE			  16U	
#define USART_SR_RX_READY			  32U	
#define USART_SR_TC_READY			  64U	
#define USART_SR_TX_READY			  128U	
#define USART_SR_LBD_FLAG			  256U	
#define USART_SR_CTS_FLAG			  512U	


/*Control Reg*/

#define USART_CR1_SEND_BREAK		  1U	
#define USART_CR1_RECIEVER_WAKEUP	  2U	
#define USART_CR1_RE	  	          4U
#define USART_CR1_TE				  8U	
#define USART_CR1_IDLE_INT_ENABLE	  16U	
#define USART_CR1_RX_INT_ENABLE		  32U	
#define USART_CR1_TC_INT_ENABLE		  64U	
#define USART_CR1_TX_INT_ENABLE		  128U	
#define USART_CR1_PARITY_INT_ENBALE	  256U 	
#define USART_CR1_EVEN_PARITY		  0U	
#define USART_CR1_ODD_PARITY		  512U	
#define USART_CR1_PARITY_ENABLE		  1024U	
#define USART_CR1_IDLE_WAKEUP		  0U
#define USART_CR1_ADRESS_WAKEUP		  2048U	
#define USART_CR1_8BIT_DATA			  0U	
#define USART_CR1_9BIT_DATA			  4096U  	
#define USART_CR1_UART_ENABLE		  8192U 	
#define USART_CR1_OVER_SAMPLEBY8	  16384U	
#define USART_CR1_OVER_SAMPLEBY16	  0U	


/*Control Reg 2*/

#define USART_CR2_LINE_BREAK_LEN	  16U 		  	
#define USART_CR2_LINE_BREAK_INT_EN	  32U	
#define USART_CR2_LAST_BIT_CLKPULSE	  256U	
#define USART_CR2_CLK_PHASE_FIRST	  0U
#define USART_CR2_CLK_PHASE_SECOND	  512U					  	
#define USART_CR2_CLK_POLARITY_LOW	  0U	
#define USART_CR2_CLK_POLARITY_HIGH	  1024U	
#define USART_CR2_CLK_EN			  2048U	
#define USART_CR2_CLK_DISABLE		  0U	
#define USART_CR2_ONE_BIT_STOP		  0U	
#define USART_CR2_TWO_BIT_STOP		  8192U	
#define USART_CR2_LIN_MODE_EN		  16384U						  	
#define USART_CR2_LIN_MODE_DISABLE	  0U	

/*Control Reg 3*/

#define USART_CR3_ERROR_INT_EN		  1U	
#define USART_CR3_IrDA_INT_EN		  2U	
#define USART_CR3_IrDA_LOW_POWER	  4U	
#define USART_CR3_HALF_DUPLEX_EN	  8U	
#define USART_CR3_SMART_CARD_EN		  16U
#define USART_CR3_SMART_CARD_MODE_EN  32U		
#define USART_CR3_DMA_EN_RX			  64U	
#define USART_CR3_DMA_EN_TX			  128U	
#define USART_CR3_RTS_INT_EN		  256U				  	
#define USART_CR3_CTS_EN			  512U	
#define USART_CR3_CTS_INT_EN		  1024U 	
#define USART_CR3_ONE_SAMPLE_BIT	  2048U	
#define USART_CR3_THREE_SAMPLE_BIT	  0U	













#define USART1     (0x40011000)
#define USART2	   (0x40004400)	
#define USART6	   (0x40001400)

typedef enum
{
	OK=0,
	NOK
}ErrorStatus_t;


typedef struct

{
	
	u32 USART_SR;
	u32 USART_DR;
	u32 USART_BRR;
	u32 USART_CR1;
	u32 USART_CR2;
	u32 USART_CR3;
	u32 USART_GPTR;
}volatile * const USART_Reg_t;

#endif