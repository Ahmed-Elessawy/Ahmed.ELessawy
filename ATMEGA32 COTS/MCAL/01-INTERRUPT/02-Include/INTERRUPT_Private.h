//Author : Ahmed Elessawy 


#ifndef INTERRUPT_INTERFACE_H
#define INTERRUPT_INTERFACE_H

#define NULL ((void *)0)


#define EXTI0_PIN   26	
#define EXTI1_PIN	27
#define EXTI2_PIN	10


#define MCU_SenseControl 	   			*((volatile u8 * const)0x55)
#define MCU_StatusSense_Control 		*((volatile u8 * const)0x54)
#define GICR_INT_Control 				*((volatile u8 * const)0x5B)
#define GIFR_INT_Flag 					*((volatile u8 * const)0x5A)

#define EXTI0_EnableBit         6
#define EXTI1_EnableBit         7
#define EXTI2_EnableBit         5

//for EXIT0 and EXTI1
#define RISING_EDGE             3
#define FALLING_EDGE            2
#define ANY_LOGICAL           	1
#define LOW_LEVEL            	0

#define EXTI0_CLEAR_MASK		0xfc
#define EXTI1_CLEAR_MASK		0xf3

#define EXTI2_SENSE_BIT			6

//for EXTI2
//RISING_EDGE  1
//FALLING_EDGE 0


typedef enum 
{
	INTERR_OK=0,
	INTERR_NOK
	
	
}Interrupt_enuErrorStatus;



/*The ISR of the external interrupt INT0*/
void __vector_1 (void) __attribute__((signal));

/*The ISR of the external interrupt INT1*/
void __vector_2 (void) __attribute__((signal));

/*The ISR of the external interrupt INT2*/
void __vector_3 (void) __attribute__((signal));

#endif







