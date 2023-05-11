//Author : Ahmed Elessawy 



#ifndef LIN_Interface_H
#define LIN_Interface_H



void LinMasterTask();

void LinSlaveTask();





static void SendRoutine(u8 *Ptr,u8 Size);

static void RecieveRoutine(u8 *Ptr,Size);

static void SendBreak();

static void SendSynch();














#endif
