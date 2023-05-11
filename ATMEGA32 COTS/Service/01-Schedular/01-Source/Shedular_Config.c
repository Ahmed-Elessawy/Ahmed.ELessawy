
#include""Schedular_Private.h"
#include""Schedular_Interface.h"
#include""Schedular_Config.h"


#define NumberOfTasks    3
#define TickTime		100	
#define Task1			 0
#define Task2			 1
#define Task3		     2
				

void Task1(void)
{
	/*user should fil the logic of the task here and include required libraries for the implementation*/
}

void Task2(void)
{
	/*user should fil the logic of the task here and include required libraries for the implementation*/
}
void Task3(void)
{
	/*user should fil the logic of the task here and include required libraries for the implementation*/
}
const Tasks AppTask[NumberOfTasks]
{
	[Task1].u16Periodictity=1000,
	[Task1].u16FirstDelay=0,
	[Task1].Fun=Task1,
	
	[Task2].u16Periodictity=500,
	[Task2].u16FirstDelay=300,
	[Task2].Fun=Task2,
	
	[Task3].u16Periodictity=200,
	[Task3].u16FirstDelay=0,
	[Task3].Fun=Task3
};