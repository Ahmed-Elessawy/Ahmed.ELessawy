
#include"SYSTICK_Interface.h"
#include"SCHED_Config.h"
#include"SCHED_Interface.h"


extern const RunnableInfo_t  RunnableSInfo_t[NumberOfTasks];

typedef struct 
{
	u32 RemaningTimeMS;
	RunnableInfoHandler_t RunnableInfo_t;
}RunnableState_t,*RunnableStateHandler_t;

static const RunnableState_t RunnableSState_t [NumberOfTasks];


static void SCHED(void);


u8 SCHED_ThreadFlag=0;


void SCHED_Init(void)

{
	sysTick_SetTime(TICK_TIME_MS);
	sysTick_EnableException();
	sysTick_SetCBF(SCHED_CBF);
	u8 Loc_u8Iter;
	for(Loc_u8Iter=0;Loc_u8Iter<NumberOfTasks;Loc_u8Iter++)
	{
		RunnableSState_t[Loc_u8Iter].RemaningTimeMS=RunnableSInfo_t[Loc_u8Iter].Runable_FirstDelayMS;
		RunnableSState_t[Loc_u8Iter].RunnableInfoHandler_t=&RunnableSInfo_t[Loc_u8Iter];
	}
}


void SCHED_CBF(void)
{
	if(SCHED_ThreadFlag==0)
	{
	   SCHED_ThreadFlag=1;
	}
	else
	{
		
	}
}


void SCHED_Start(void)
{
	sysTick_Enable();
	if(SCHED_ThreadFlag)
	{
		SCHED();
		SCHED_ThreadFlag=0;
	}
	else
	{
		
	}
}


static void SCHED(void)

{
	u8 Loc_u8Iter;
	for(Loc_u8Iter=0;Loc_u8Iter<NumberOfTasks;Loc_u8Iter++)
	{
		if(RunnableSState_t.RemaningTimeMS==0)
		{
			RunnableSState_t.RunnableInfoHandler_t->Task_EOJ();
		}
		else
		{
			
			RunnableSState_t.RemaningTimeMS-=TICK_TIME_MS;
		}
	}
}