

#include"LIN_Config.h"

LinSignal_t Sig1=
{
	.u8 Idx=0,
	.u8 Len=2,
	.u8 *DatAdd=&A,
};
LinSignal_t Sig2=
{
	.u8 Idx=1,
	.u8 Len=3,
	.u8 *DatAdd=&B,
	
};
	
/*
LinSignal_t Sig2[NumOfSigPerFrame]=
{
	[0].u8 Idx=0,
	[0].u8 Len=2,
	[0].u8 *DatAdd=&C,
	
	[1].u8 Idx=1,
	[1].u8 Len=3,
	[1].u8 *DatAdd=&D,
	
}	
*/
LinFrame_t F1[NumberOfSignals]=
{
	[0].Id=0x01,
	[0].Size=8,
	[0].SigCnt=3,
	[0].Signals={&Sig1,&Sig2},
	[0].Dir=Send,
	
	[1].Id=0x01,
    [1].Size=8,
    [1].SigCnt=3,
    [1].Signals={&Sig1,&Sig2},
    [1].Dir=Recieve,
};

LinFrame_t F2[NumberOfSignals]=
{
	[0].Id=0x01,
	[0].Size=8,
	[0].SigCnt=3,
	[0].Signals={&Sig1,&Sig2},
	[0].Dir=Send,
	[0].SlotTime=10,
	
	[1].Id=0x01,
    [1].Size=8,
    [1].SigCnt=3,
    [1].Signals={&Sig1,&Sig2},
    [1].Dir=Recieve,
	[1].SlotTime=20,
};


const SchedTable Sched[NumOfScheds]
{
	[Diag].Frames={&F1,&F2},
	[Diag].FrameCurrIdx=0,
	
	[Window].Frames={&F1,&F2},
	[Window].FrameCurrIdx=1,
}