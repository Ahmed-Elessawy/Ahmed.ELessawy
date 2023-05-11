//Author : Ahmed Elessawy  



#ifndef INTERRUPT_CONFIG_H
#define INTERRUPT_CONFIG_H

/*   Sense Control  

		Low_Level
		
		Any_Logical_Cahnge
		
		Rising_Edge 

		Falling_Edge*/

		
//choose from above configuaration for //EXTI0_Sense Control and //EXTI1_Sense Control





//EXTI2_Sense Contro2
//note for external interrupt 2 , you can only choose between Rising_Edge and Falling Edge
typedef enum

{
	EXTI_0=0,
	EXTI_1,
	EXTI_2
}Interrupt_enuIndex;




#define PULL_UP 	0
#define PULL_DOWN 	1

#define EXTI0_INPUTSTATE  PULL_UP
#define EXTI1_INPUTSTATE  PULL_UP
#define EXTI2_INPUTSTATE  PULL_UP


#endif