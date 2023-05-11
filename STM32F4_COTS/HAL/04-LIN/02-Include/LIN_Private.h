//Author : Ahmed Elessawy 


#ifndef LIN_PRIVATE_H
#define LIN_PRIVATE_H





typedef enum 
{
	WaitingSynch,
	SynchValidating,
	PID_Decoding,
	DataProcessing,
}SlaveTaskStates;


typedef enum 
{
	Sending,
	Done
}SendingState;


typedef enum 
{
	Recieving,
	HandlingData,
	Done
}RecievingState;








#endif