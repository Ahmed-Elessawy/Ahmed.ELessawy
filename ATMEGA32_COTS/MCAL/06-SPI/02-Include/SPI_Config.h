
#ifndef SPI_CONFIG_H
#define SPI_CONFIG_H

#define BUFFER_SIZE		10

typedef struct
{
	u8 SPI_INT_u8En;
	u8 SPI_u8DataOrder;
	u8 SPI_u8Mode;
	u8 SPI_u8ClkPolarity;
	u8 SPI_u8ClkPhase;
	u8 SPI_u8ClkRate;
}SPI_Cfg_t,*SPI_CfgHandler_t;

typedef struct
{
	u8 *SE;
	u8 Size;
	void (*EndOfJob) (void);
}SendMsg_t,*SendMsgHandler_t;
#endif 
