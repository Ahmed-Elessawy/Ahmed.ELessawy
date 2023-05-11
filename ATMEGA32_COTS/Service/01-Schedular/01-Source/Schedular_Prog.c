
#include"TMR_Interface.h"
#include"Schedular_Private.h"
#include"Schedular_Interface.h"
#include"Schedular_Config.h"

TMR_CBF Sched[3]={SCHED_enuStart,NULL,NULL}:


extern  const Tasks AppTask[NumberOfTasks];

void SCHED_vInit(void)
{
	
	TMR_vInit();
	TMR_enuSetTickTime(TMR_u8_TIMER0,TickTime,CTC);
	TMR_enuRegisterCallBack_COMP(Sched);
}

void SCHED_vStart(void)
{
	
	u8 Loc_u8Iter;
	TMR_enuEnableTimer(TMR_u8_TIMER0);
	for(Loc_u8Iter=0;Loc_u8Iter<NumberOfTasks;Loc_u8Iter++)
	{
		Tasks.FirstDelay==0
		{
			Tasks.Fun();
			Tasks.FirstDelay=Tasks.Periodicty-1;
		}
		else
		{
			Tasks.FirstDelay--;
		}
			
	}
	
	
}
	