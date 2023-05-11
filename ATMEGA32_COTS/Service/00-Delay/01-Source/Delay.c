/*
 * Delay.c
 *
 * Created: 10/01/2023 23:40:40
 * Author : 3essawy
 */ 
#include"../02-Include/Delay_Interface.h"
#include"../02-Include/Delay_config.h"



void Delay(unsigned  int MS)
{
	MS=(MS*(FCPU/1000)+1)/10;
	volatile unsigned  int i=0;
	for(i=0;i<MS;i++)
	{
		asm ("nop");
		asm ("nop");
		asm ("nop");
		asm ("nop");
		asm ("nop");
		asm ("nop");
		asm ("nop");
	}

}



