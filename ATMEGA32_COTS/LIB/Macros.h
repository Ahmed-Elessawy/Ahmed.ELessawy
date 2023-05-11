//Author : Ahmed Elessawy 
//Date 16/01/2023

#ifndef MACROS_H_
#define MACROS_H_


#define SET_BIT(REG , BITNUM) REG |= 1<<BITNUM
#define CLR_BIT(REG , BITNUM) REG &= ~(1<<BITNUM)
#define TOG_BIT(REG , BITNUM) REG ^= 1<<BITNUM
#define GET_BIT(REG , BITNUM) ( (REG >> BITNUM) & 1 )
// Set The Register [1s]
#define SET_REG(REG)			REG=-1			

// Clear the Register [0s]
#define CLR_REG(REG)			REG=0


#endif /* MACROS_H_ */
