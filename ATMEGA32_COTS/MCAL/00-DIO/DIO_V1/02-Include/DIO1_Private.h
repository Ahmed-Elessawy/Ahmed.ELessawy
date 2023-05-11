//Author : Ahmed Elessawy 
//Date :16/01/2023





#ifndef DIO1_PRIVATE_H
#define DIO1_PRIVATE_H


typedef struct 
{
  volatile u8 PIN;
  volatile u8 DDR;
  volatile u8 PORT;
  
}DIO;


#define DIOA ((volatile DIO*)0x39)
  
#define DIOB ((volatile DIO*)0x36)

#define DIOC ((volatile DIO*)0x33)

#define DIOD ((volatile DIO*)0x30)



#endif