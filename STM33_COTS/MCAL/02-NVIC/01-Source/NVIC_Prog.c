

#include"NVIC_Private.h"
#include"NVIC_Interface.h"



#define RegLength		32

Nvic_tstrRegister NVIC=((Nvic_tstrRegister)0xE000E100);





extern void Nvic_vidEnableIrq(u8 Copy_strIrq)
{
	NVIC->NVIC_ISER[Copy_strIrq/RegLength] |= 1 << (Copy_strIrq%RegLength);

}

extern void Nvic_vidDisableIrq(u8 Copy_strIrq)
{
	NVIC->NVIC_ICER[Copy_strIrq/RegLength] |= 1 << (Copy_strIrq%RegLength);
}


void Nvic_vidSetPendingIrq(u8 Copy_strIrq)
{
	NVIC->NVIC_ISPR[Copy_strIrq/RegLength] |= 1 << (Copy_strIrq%RegLength);
}


void Nvic_vidClearPendingIrq(u8 Copy_strIrq)
{
	NVIC->NVIC_ICPR[Copy_strIrq/RegLength] |= 1 << (Copy_strIrq%RegLength);
}

void Nvic_vidGetPendingIrq(u8 Copy_strIrq, pu8 Add_pu8PendingStatus)
{
	*Add_pu8PendingStatus = (NVIC->NVIC_IABR[Copy_strIrq/RegLength] >> (Copy_strIrq%RegLength)) & 0x01;
}


void Nvic_vidSetPriority(s8 Copy_strIrq, u8 Copy_u8GroupPrioty,  u8 Copy_u8SubGroupPrioty, u32 Copy_u32Group)
{
	u8 Loc_u8Priority =  (Copy_u8GroupPrioty | (Copy_u8SubGroupPrioty) << (Copy_u32Group - NVIC_VETKEY) / 256) ;
	/*check core or external peripheral*/
	if(Copy_strIrq < 0)
	{
		// Next version
	}

	if(Copy_strIrq >= 0)
	{
		NVIC->NVIC_IPR[Copy_strIrq] = Loc_u8Priority << ((Copy_strIrq) << 4);
	}
	ACIR = Copy_u32Group;
}

