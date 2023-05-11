//Author : Ahmed Elessawy 
#include"UART_Private.h"
#include"UART_Interface.h"
#include"UART_Config.h"





void USART_vInit(void);

ErrorStatus_t USART_SendSynch(u16 cpy_u16Data,u32 cpy_u32UsartNu);
ErrorStatus_t USART_RecieveSynch(u16 *cpy_u16Data,u32 cpy_u32UsartNu);


ErrorStatus_t USART_SendAsynch(u16 *ZeroCpy_u16Data,u32 UsartNu,u16 cpy_u16Size);
ErrorStatus_t UART_RecieveAsynch(u16 *ZeroCpy_u16Data,u32 UsartNu,u16 cpy_u16Size);

ErrorStatus_t USART_SetTxCBF(void (*TxCbfHandler)(void));
ErrorStatus_t USART_SetRxCBF(void (*RxCbfHandler)(void));