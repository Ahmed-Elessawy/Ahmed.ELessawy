

#ifndef LIN_CONFIG_H
#define LIN_CONFIG_H




typedef struct
{
	u8 Idx;
	u8 Len;
	u8 *DatAdd;
}const LinSignal_t,* const LinSignalHandler_t;


typedef struct
{
	u8 Id;
	u8 Size;
	u8 SignalCount;
	LinSignalHandler_t Signals[NumberOfSignals];
	u8 Dir;
	u8 SlotTIme;
}const LinFrame_t,* const LinFrameHandler_t;


typedef struct 
{
	LinFrameHandler_t Frames[NumberOfFrames];
	u8 FrameCurrIdx;
}const SchedTable,* const SchedTableHandler_t;





















#endif 
