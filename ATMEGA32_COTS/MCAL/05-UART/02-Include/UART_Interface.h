


#ifndef UART_INTERFACE_H
#define UART_INTERFACE_H




void UART_vInit(void);


void UART_enuSendByteSynch(u8 Cpy_u8Data);


void UART_enuSendStreamAsynch(u8 *Cpy_u8Data,void (*CBF_Tx)(void));



void UART_enuRecieveByteSynch(u8 *Cpy_pu8Data);



void UART_enuRecieveStreamAsynch(u8 *Cpy_pu8Data,u8 Cpy_u8MsgSize,void (*CBF_Rx)(void));


#endif
