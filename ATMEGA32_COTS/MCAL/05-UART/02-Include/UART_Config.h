



#ifndef UART_CONFIG_H
#define UART_CONFIG_H



typedef struct 
{
	u16 UART_u16BaudeRate;
	u8  UART_u8CharSize;
	u8  UART_u8StopBit;
	u8  UART_u8ParityMode;
	u8  UART_u8Mode;
	u8  UART_Polarity;

}UART_Config_t,*UART_ConfigHandler_t;



#endif