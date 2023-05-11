 



#ifndef SCHED_CONFIG_H
#define SCHED_CONFIG_H



typedef void (*EOJ_t) (void);
 
typedef const struct 
{
	u32 Runable_PeriodMS;
	u32 Runable_FirstDelayMS;
	char *TaskName;
	EOJ_t Task_EOJ;
}RunnableInfo_t,*RunnableInfoHandler_t;

#endif