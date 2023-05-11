#ifndef DMA_INTERFACE_H
#define DMA_INTERFACE_H


enum 
{
	S0=0,
	S1,
	S2,
	S3,
	S4,
	S5,
	S6,
	S7,
	NumberOfStreams
}Streams_t;




void dmaStream_vInit(const StreamCfgHandler_t Self);

void dmaStreamEnable(u32 StreamAdd,u8 StreamNu);

void RegCbf(u8 StreamNu,void (*Ptr) (void));











#endif