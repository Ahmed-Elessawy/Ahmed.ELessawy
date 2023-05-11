//Author : Ahmed Elessawy 


#ifndef INTERRUPT_INTERFACE_H

#define INTERRUPT_INTERFACE_H







Interrupt_enuErrorStatus Interrupt_enuEnable(Interrupt_enuIndex enu_Index,u8 Copy_u8SenseControl);


Interrupt_enuErrorStatus Interrupt_enuDisable(Interrupt_enuIndex enu_Index);



Interrupt_enuErrorStatus Interrupt_enuSetCallBack(Interrupt_enuIndex enu_Index,void (*Copy_Ptr) (void));














#endif