// Online C compiler to run C program online
#include <stdio.h>

//arrange priority of tasks from lowest value to higher
//lowets value to be the higher priority
#define NumberOfTasks 3
#define TickTime   (unsigned long int)1000000000
#define T1_Period  (unsigned long int)2000000000
#define T2_Period  (unsigned long int)4000000000
#define T3_Period  (unsigned long int)1000000000

//container for task info
typedef struct Task
{
    int Period;            //periodic time of eahc task
    void (*Ptr_Func)(void);//ptr to function to be called
    int Wait_Time;         //the time the task wits to be called
}Task;


//functions called by each task
void Ftask1(void)
{
    printf("Hi from task1\n");
}

void Ftask2(void)
{
    printf("Hi from task2\n");
}

void Ftask3(void)
{
    printf("Hi from task3\n");
}




void systick_handler(void);
typedef Task (*systickcbf_t[NumberOfTasks]);//array of pointers to structure to hold the tasks info
systickcbf_t ApplicationCBF ;



void systick_regCbf (systickcbf_t cbf) {
    
    for(int i=0;i<NumberOfTasks;i++)
    {
        ApplicationCBF[i] = cbf[i] ;//assigning the task to the handler
    }
        systick_handler();
}



//function that makes the tasks handler comes every fixed time 
unsigned long int tickTime=TickTime;
void systick_setTimeMs (unsigned long int Ms){
    tickTime = Ms;
}



void systick_handler();
void systick_start() {
    while(tickTime--); // while(ticktime--){}
    systick_handler();
}



int main()
{
    //Tasks initilaization
    Task Task1={T1_Period,Ftask1,(unsigned long int)T1_Period};
    Task Task2={T2_Period,Ftask2,(unsigned long int)T2_Period};
    Task Task3={T3_Period,Ftask3,(unsigned long int )T3_Period};


     //array of pointer to tasks
     Task (*Ptr[3])={&Task1,&Task2,&Task3};
    
	
    systick_regCbf(Ptr);//calling the call back function
    while(1){
        systick_start();
        
    }
    
    return 0;
}


void systick_handler() {
    tickTime=TickTime;
    for(int i=0;i<NumberOfTasks;i++)
    {
        if (ApplicationCBF[i]->Wait_Time==tickTime)
        {
            ApplicationCBF[i]->Ptr_Func();//calling the function of the task
            ApplicationCBF[i]->Wait_Time=(ApplicationCBF[i]->Period);// assigning the wait time to be equal to the period time again
        }
        else
        {
           
            ApplicationCBF[i]->Wait_Time-=tickTime;//decrementing the wait time until it equals the tick time
        }
    }


    systick_setTimeMs(tickTime);
    //printf("tick time %ld\n",tickTime);
}