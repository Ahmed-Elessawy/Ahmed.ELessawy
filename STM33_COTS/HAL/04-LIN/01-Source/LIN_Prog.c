

#include"LIN_Interface.h"
#include"LIN_Config.c"

static SlaveTaskStates=WaitingSynch;
static u8 RemaningTime=0;
static u8 CurrFrame=0;

static u8 *SendBuffer;

static u8 *RecieveBuffer;

static u8 SynchByte;
static u8 PID;

SendingState SendState=Sending;

RecievingState RecieveState=Recieving;

extern const SchedTable Sched[NumOfScheds];

void LinMasterTask()
{
	
	switch (MasterState)
	{
		case Idle:
		
	
				if(RemaningTime==0)
				{
					MasterState=SendBreak;
					
				}
				else
				{
					RemaningTime-=TickTime;
				}
				
		case SendBreak:
		
				CurrFrame++;
				CurrFrame%=NumberOfFrames;
				RemaningTime=Sched[ActiveSched].Frames[CurrFrame]->SlotTime;
				MasterState=SendSynch;
				SendBreak();
				
		case SendSynch:
			 SendSynch();
			 MasterState=SendPID;
			 break;
			 
		case SendPID:
			SendRoutine(Sched[ActiveSched].Frames[CurrFrame]->Id,1);
			MasterState=Idle;
			break;
	}
		
}
void LinSlaveTask()
{
	static u8 CurrByte=0;
	u8 Iter=0;
	u8 IterSignal=0;
	switch(SlaveTaskStates)
	{
		case WaitingSynch:
		RecieveRoutine(&SynchByte);
		SlaveTaskStates++;
		break;
		
		case SynchValidating:
		if(SynchByte==0x55)
		{
			SlaveTaskStates++;
			RecieveRoutine(&PID);
		}
		else
		{
			SlaveTaskStates=WaitingSynch;
			return Error;
		}
		break;
		
		case PID_Decoding:
		if(PID==Sched[ActiveSched].Frames[CurrFrame]->Id)
		{
			if(Sched[ActiveSched].Frames[CurrFrame]->Dir==Send)
			{
				switch(SendState)
				{
					case Sending:
					for(Iter=0;Iter<Sched[ActiveSched].Frames[CurrFrame]->SigCount)
					{
						for(IterSignal=0;IterSignal<Sched[ActiveSched].Frames[CurrFrame]->Signals[Iter]->Len;IterSignal++)
						{
							SendBuffer[IterSignal]=Sched[ActiveSched].Frames[CurrFrame]->Signals[Iter]->DataAdd[IterSignal];
						}
					}
					
					SendRoutine(SendBuffer,Sched[ActiveSched].Frames[CurrFrame]->Size);
					SendState=Done;
					break;
					
					case Done :
					SendState=Sending;
					SlaveTaskStates=WaitingSynch;
					break;
				}
					
				
			}
			else if(Sched[ActiveSched].Frames[CurrFrame]->Dir==Recieve)
			{
				switch (RecieveState)
				{
					case Recieving:
					RecieveRoutine(RecieveBuffer,Sched[ActiveSched].Frames[CurrFrame]->Size);
					RecieveState=HandlingData;
					break;
					
					case HandlingData:
					for(Iter=0;Iter<Sched[ActiveSched].Frames[CurrFrame]->SigCount;Iter++)
					{
					
						for(IterSignal=0;IterSignal<Sched[ActiveSched].Frames[CurrFrame]->Signals[Iter]->Len;IterSignal++)
						{
							Sched[ActiveSched].Frames[CurrFrame]->Signals[Iter]->DataAdd[IterSignal]=SendBuffer[CurrByte];
							CurrByte++;
						}
					}
					CurrByte=0;
					RecieveState=Recieving;
					SlaveTaskStates=WaitingSynch;
					break;
					
				}
			}
			else
			{
				SlaveTaskStates=WaitingSynch;
				return Error;
			}
		}
		
		else
		{
			SlaveTaskStates=WaitingSynch;
			return Error;
		}
		
		break;
	
}
