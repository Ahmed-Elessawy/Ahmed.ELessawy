



#ifndef SYSTICK_INTERFACE_H
#define SYSTICK_INTERFACE_H



void sysTick_Enable(void);
void sysTick_Disable(void);

ErrorStatus_t sysTick_SelectSrcClk(u8 Cpy_u8SrcClk);

void sysTick_EnableException(void);
void sysTick_DisableException(void);

ErrorStatus_t sysTick_SetTime(u32 Cpy_u32TimeMs);


ErrorStatus_t sysTick_SetCBF(sysTick_CBF CBF_Handler_t);




#endif 







