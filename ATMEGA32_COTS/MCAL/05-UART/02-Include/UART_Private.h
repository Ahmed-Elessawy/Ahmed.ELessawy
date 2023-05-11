




#ifndef UART_PRIVATE_H
#define UART_PRIVATE_H
#include "Std_Types.h"

#define NULL ((void*)0)

#define Tx     0
#define Rx	   1
#define Empty  2

#define     CLEAR_ZERO    0
#define     NumberOfRegs  5   

#define		UART_BR_NINE  6
#define		UART_BR_FOUR  12 	
#define		UART_BR_TWO   25
			

#define 	UART_CS_CLEAR 0xF9
#define     UART_UCSZTWO    2



#define		UART_CS_FIVEBIT    0	   	
#define		UART_CS_SIXBIT     1 
#define		UART_CS_SEVENBIT   2 
#define		UART_CS_EIGHTBIT   3
#define		UART_CS_NINEBIT    8
			
			/*StopBit*/
#define     UART_SB_ONEBIT  0x00
#define     UART_SB_TWOBIT  0x08 
			
			/*ParityMode*/

#define     UART_PM_CLEAR		0xCF			
#define     UART_PM_DISABLED	0x00
#define     UART_PM_EVEN		0x20	
#define     UART_PM_ODD			0x30 	
			
			/*UART Mode Operation*/
#define 	UART_ASYNCH			0x00 
#define 	UART_SYNCH			0x40 	



/*Transmission*/

#define UDRE            0x20


/*Recive*/

#define RXC				0x80

/*Enable*/

#define RX_TX_ENABLE	0x18

#define UDRIE           0x20

/*Registers*/
#define UCSRC_ENABLE		0x80

#define UBRRH_UCSRC     0x40

#define UDR				0x2C

#define UCSRA			0x2B				

#define UCSRB			0x2A

#define UBRRL           0x29 


#define UART_POLARITY_RISING_FALLING 0

typedef volatile u8 * const UART_Reg_t[];




#endif