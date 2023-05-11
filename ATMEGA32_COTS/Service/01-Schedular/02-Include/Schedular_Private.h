


#ifndef SCHED_PRIVATE_H
#define SCHED_PRIVATE_H



typedef void (*TaskFun) (void);

typedef struct
{
	u16 u16Periodictity;
	u16 u16FirstDelay;
	TaskFun Fun;
}Task_t,*TaskHandler;

typedef Task_t Tasks[];


#endif