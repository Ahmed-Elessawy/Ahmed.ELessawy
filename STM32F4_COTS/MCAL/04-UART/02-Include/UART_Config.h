//Author : Ahmed Elessawy  

#ifndef UART_CONFIG_H
#define UART_CONFIG_H
typedef struct
{
	u16 USART_EN;
	u16 USART_DataLen;
	u16 USART_BaudeRate;
	u16 USART_Parity_EN;
	u16 USART_ParityOption;
	u16 USART_StopBitOption;
	u16 TX_EN;
	u16 RX_EN;
	u16 OverSampleOption;
}UASRT_Cfg_t,*USART_CfgHandler_t;


#endif