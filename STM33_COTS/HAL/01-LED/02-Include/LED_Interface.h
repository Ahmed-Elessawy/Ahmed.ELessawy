//Author : Ahmed Elessawy 
#include"Std_Types.h"

typedef enum
{
	ActiveHigh=0,
	ActiveLow
}Led_ActiveState_t;

typedef enum
{
	Low=0,
	High
}Led_enuState_t;

typedef enum
{
	Led_Ok=0,
	Led_Nok
}ErrorStatus_t;




void Led_vInit(void);

ErrorStatus_t Led_SetState(u8 Cpy_u8LedNumber,Led_enuState_t State);
