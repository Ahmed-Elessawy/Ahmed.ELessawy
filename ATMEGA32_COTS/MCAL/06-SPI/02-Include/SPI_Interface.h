
#ifndef SPI_INTERFCAE_H
#define SPI_INTERFACE_H

#include"SPI_Config.h"




void spi_vInit(SPI_CfgHandler_t SPI_CfgHandler);

void spi_Enable(void);

ErrorStatus_t spi_DoubleSpeed(void);

ErrorStatus_t spi_enuSend(SendMsgHandler_t Msg);

ErrorStatus_t spi_enuSendSynch(u8 *StreamSend,u8 Size,u8 *StreamRecieve);

ErrorStatus_t spi_enuRecieve(u8 *Pu8_Data,u8 Cpy_u8Size);




ErrorStatus_t spi_enuSetSendCBF(void (*CBF_Handler)(void));

ErrorStatus_t spi_enuSetRecieveCBF(void (*CBF_Handler)(void));





#endif 
