

#ifndef SPI_PRIVATE_H
#define SPI_PRIVATE_H

#include"SPI_Config.h"

#define SPI_INT_EN						0x80
#define SPI_EN							0x40
#define SPI_LSB_FIRST					0x20
#define SPI_MSB_FIRST					0x00
#define SPI_MASTER_MODE					0x10
#define SPI_CLK_RISING_FALLING			0x00
#define SPI_POLARITY_FALLING_RISING		0x08
#define SPI_PHASE_SAMPLE_SETUP			0x00
#define SPI_PHASE_SETUP_SAMPLE			0x04
#define SPI_INT_FLAG					0x80
#define SPI_WRITE_FLAG					0x40
#define SPI_TWO_X						0x01

#define SPICLK_RATE_MASK				0x30
#define SPI_BASE_ADDRESS				0x2D

typedef enum 
{
	OK,
	NOK
}ErrorStatus_t;

typedef enum
{
	FreqOver4=0,
	FreqOver16,
	FreqOver64,
	FreqOver128,
}SPI_CLK_Rate_t;

typedef enum
{
	Busy=0,
	Idle
}SPI_Status;





typedef struct
{
	u8 SPI_SPCR;
	u8 SPI_SPSR;
	u8 SPI_SPDR;
}volatile  * const SPI_RegHandler_t;


typedef struct
{
	u8 tail;
	u8 head;
	u8 size;
	SendMsg_t Msgs[BUFFER_SIZE];
	
}Q_Spi,*Q_SpiHandler;


void Q_Init(Q_SpiHandler Qhandler);
u8 IsEmpty(Q_SpiHandler Qhandler);
u8 IsFull(Q_SpiHandler Qhandler);
u8 EnQ(Q_SpiHandler Qhandler,SendMsgHandler_t MsgHandler);
u8 DeQ(Q_SpiHandler Qhandler ,SendMsgHandler_t CurrentMsg);


void __vector_12 (void) __attribute__((signal));

#endif