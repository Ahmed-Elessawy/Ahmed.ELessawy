

#include"UART_Private.h"
#include"UART_Config.h"


/*************UART Config****************/

			/*Baude Rate
			UART_BR_9600
			UART_BR_4800
			UART_BR_2400*/ //for 1MHZ Freq
			
			/*Char Size
			UART_CS_5BIT
			UART_CS_6BIT
			UART_CS_7BIT
			UART_CS_8BIT
			UART_CS_9BIT*/
			
			/*StopBit
			UART_SB_1BIT
			UART_SB_2BIT*/
			
			/*ParityMode
			UART_PM_DISABLED
			UART_PM_EVEN
			UART_PM_ODD*/
			
			/*UART Mode Operation
			UART_ASYNCH
			UART_SYNCH*/
			
			/*UART Polarity Bit 
			UART_POLARITY_RISING_FALLING
			UART_POLARITY_FALLING_RISING*/

const UART_Config_t UART_Cfg_t={UART_BR_NINE,UART_CS_FIVEBIT,UART_SB_ONEBIT,UART_PM_DISABLED,
								UART_ASYNCH,UART_POLARITY_RISING_FALLING};