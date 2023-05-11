

#include"Std_Types.h"
#include"Macros.h"
#include"TIMER_Private.h"
#include"TIMER_Interface.h"
#include"TIMER_Config.h"

#define NULL  ((void *)0)

#define TMR1_NUM_OF_REG		5	

#define TMR0		        0
#define TMR2				1
#define TMR1				2

#define CTC					0

#define TMR1_TCCR			0
#define TMR1_TCNT			1
#define TMR1_OCRA			2  
#define TMR1_OCRB			3
#define TMR1_ICR			4
extern const TMR_Cfg_t TMR_Cfg[NUMBER_OF_TIMERS];

static TMR_REG_t   TMR_CTRL_t={(volatile u8* const)TMR_TCCR0,(volatile u8* const)TMR_TCCR2,(volatile u8* const)TMR_TCCR1B};
static TMR_REG_t   TMR_TCNT_t={(volatile u8* const)TMR_TCNT0,(volatile u8* const)TMR_TCNT2};
static TMR_REG_t   TMR_OCR_t={(volatile u8* const)TMR_OCR0,(volatile u8* const)TMR_OCR2};


static TMR1_REG_t TMR1_u16Reg={(volatile u16* const)TMR_TCCR1,(volatile u16* const)TMR_TCNT1,
	(volatile u16* const)TMR_OCRA1,(volatile u16* const)TMR_OCRB1,(volatile u16* const) TMR_ICR1};


static u8 TMR_PreSclr[NUMBER_OF_TIMERS]={0};
static TMR_CBF_t   TMR_CBF_OVRF={NULL,NULL,NULL};
static TMR_CBF_t   TMR_CBF_COMP={NULL,NULL,NULL};

static u32 TMR_ISR_Counter[NUMBER_OF_TIMERS]={0};
static u32 TMR_OVRF_Ctr[NUMBER_OF_TIMERS]={0};
static u32 TMR_COMP_Ctr[NUMBER_OF_TIMERS]={0};
static u32 TMR_OVRF_Prelaod[NUMBER_OF_TIMERS]={0};


static u16 TMR_u16OnTime    = 0;
static u16 TMR_u16TotalTime = 0;
static u16 TMR_u16DutyCycle = 0;

void TMR_vInit (void)
{
	u8 Loc_u8_Iter;
	u8 Loc_u8Temp=0;
	
	for(Loc_u8_Iter=0;Loc_u8_Iter<NUMBER_OF_TIMERS-1;Loc_u8_Iter++)
	{
		Loc_u8Temp=TMR_Cfg[Loc_u8_Iter].TMR_WAVEGM|TMR_Cfg[Loc_u8_Iter].TMR_COMP_PIN;
		*TMR_CTRL_t[Loc_u8_Iter]&=0;
		*TMR_CTRL_t[Loc_u8_Iter]=Loc_u8Temp;
		TMR_PreSclr[Loc_u8_Iter]=TMR_Cfg[Loc_u8_Iter].TMR_PreSclr;
	}
	Loc_u8Temp=((TMR_Cfg[TMR1].TMR_WAVEGM&(0x03<<2))<<3)|((TMR_Cfg[TMR1].TMR_WAVEGM&(0x03))<<8)|(TMR_Cfg[TMR1].TMR_COMP_PIN<<12);
	
	*TMR1_u16Reg[0]&=TIMER1_CFG_CLEAR;
	*TMR1_u16Reg[0]|=Loc_u8Temp;
	
	Loc_u8Temp=TMR_Cfg[TMR0].TMR_OVRF_INT|(TMR_Cfg[TMR0].TMR_COMP_INT<<1)
			   |(TMR_Cfg[TMR1].TMR_OVRF_INT<<2)|(TMR_Cfg[TMR1].TMR_COMP_INT<<3)
			   |(TMR_Cfg[TMR2].TMR_OVRF_INT<<6)|(TMR_Cfg[TMR2].TMR_COMP_INT<<7);
	
	TMR_TIMSK&=0;
	TMR_TIMSK=Loc_u8Temp;
	
	TMR_PreSclr[TMR1]=TMR_Cfg[Loc_u8_Iter].TMR_PreSclr;
}


void TMR_enuEnableTimer (u8 Copy_u8TimerNb)
{
	
	*TMR_CTRL_t[Copy_u8TimerNb]|=TMR_PreSclr[Copy_u8TimerNb];
	
}

void TMR_enuDisableTimer (u8 Copy_u8TimerNb)
{
	
	*TMR_CTRL_t[Copy_u8TimerNb]&=CLK_DISABLE;
}


void TMR_enuInitPostCompile (u8 Copy_u8TimerNb,TMR_Cfg_Handler_t TMR_Cfg_P_t)
{
	u8 Loc_u8Temp;
	if(Copy_u8TimerNb==TMR1)
	{
		Loc_u8Temp=((TMR_Cfg_P_t->TMR_WAVEGM&(0x03<<2))<<3)|((TMR_Cfg_P_t->TMR_WAVEGM&(0x03))<<8)|(TMR_Cfg_P_t->TMR_COMP_PIN<<12);
		*TMR1_u16Reg[0]&=TIMER1_CFG_CLEAR;
		*TMR1_u16Reg[0]|=Loc_u8Temp;
		TMR_PreSclr[TMR1]=TMR_Cfg_P_t->TMR_PreSclr;
		Loc_u8Temp=(TMR_Cfg_P_t->TMR_OVRF_INT<<2)|(TMR_Cfg_P_t->TMR_COMP_INT<<3);
		TMR_TIMSK&=0xE3;
		TMR_TIMSK|=Loc_u8Temp;
	}
	else
	{
		Loc_u8Temp=TMR_Cfg_P_t->TMR_WAVEGM|TMR_Cfg_P_t->TMR_COMP_PIN;
		*TMR_CTRL_t[Copy_u8TimerNb]&=0;
		*TMR_CTRL_t[Copy_u8TimerNb]=Loc_u8Temp;
		TMR_PreSclr[Copy_u8TimerNb]=TMR_Cfg_P_t->TMR_PreSclr;
		if(Copy_u8TimerNb==TMR0)
		{
			Loc_u8Temp=(TMR_Cfg_P_t->TMR_OVRF_INT)|(TMR_Cfg_P_t->TMR_COMP_INT<<1);
			TMR_TIMSK&=0xFC;
			TMR_TIMSK|=Loc_u8Temp;
		}
		else
		{
			Loc_u8Temp=(TMR_Cfg_P_t->TMR_OVRF_INT<<6)|(TMR_Cfg_P_t->TMR_COMP_INT<<7);
			TMR_TIMSK&=0x3F;
			TMR_TIMSK|=Loc_u8Temp;
		}
	}
}

void TMR_enuSetTickTime (u8 Copy_u8TimerNb,u8 Copy_u8TickTimeMs,u8 Copy_u8Mode)
{
	f32 Local_f32TimerCtr;
	
	
	if(Copy_u8TimerNb<2)
	{
		Local_f32TimerCtr=(f32)Copy_u8TickTimeMs/TMR_u8_MAXVAL_TIMER02_REG;
	}
	else
	{
		Local_f32TimerCtr=(f32)Copy_u8TickTimeMs/TMR_u32_MAXVAL_TIMER1_REG;
	}
	
	if(Copy_u8Mode==CTC)
	{
		TMR_vSetTIMERCTCTime(Copy_u8TimerNb,Local_f32TimerCtr);
	}
	else
	{
		TMR_vSetOVRF_Time(Copy_u8TimerNb,Local_f32TimerCtr);
	}
}



void TMR_enuSetDutyCycle (u8 Copy_u8TimerNb,u8 Copy_u8DutyCycle,u8 Copy_u8_TMR1Ch)
{
	if(Copy_u8TimerNb==TMR1)
	{
		if(Copy_u8_TMR1Ch)
		{
			
		*TMR1_u16Reg[Copy_u8_TMR1Ch]&=0;
		*TMR1_u16Reg[Copy_u8_TMR1Ch]=(Copy_u8DutyCycle*TMR_u32_MAXVAL_TIMER1_REG)/100;
		}
	}
	else
	{
		*TMR_OCR_t[Copy_u8TimerNb]&=0;
		*TMR_OCR_t[Copy_u8TimerNb]=((Copy_u8DutyCycle*(TMR_u8_MAXVAL_TIMER02_REG-1))/100);
	}
	
}

void TMR_u8EnableIcuInterrupt (void)
{
	SET_BIT(*TMR_CTRL_t[TMR1],5);
}


void TMR_u8DisbleIcuInterrupt (void)
{
	CLR_BIT(*TMR_CTRL_t[TMR1],5);
}


void ICU_u8GetPeriod (u16 *Copy_Pu16Period)
{

	if (Copy_Pu16Period != NULL)
	{

		*Copy_Pu16Period = TMR_u16TotalTime*TMR_u8_TIMER1_TICKTIME;
	}

}


void TMR_u8GetDutyCycle (u16 *Copy_Pu16DutyCycle)
{

	if (Copy_Pu16DutyCycle == NULL)
	{
	}
	else
	{
		*Copy_Pu16DutyCycle = TMR_u16DutyCycle;
	}

}

void TMR_u8OnTime (u16 *Copy_Pu16OnTime)
{

	if (Copy_Pu16OnTime == NULL)
	{
	}
	else
	{
		*Copy_Pu16OnTime = TMR_u16OnTime*TMR_u8_TIMER1_TICKTIME;
	}

}


void TMR_u8OffTime (u16 *Copy_Pu16OffTime)
{
	
	if (Copy_Pu16OffTime == NULL)
	{
	}
	else
	{
		*Copy_Pu16OffTime = (TMR_u16TotalTime-TMR_u16OnTime)*TMR_u8_TIMER1_TICKTIME;
	}

}










void TMR_enuRegisterCallBack_OVRF (TMR_CBF_t TMR_CBF_OVRF_Handler)
{
	u8 Loc_u8_Iter;
	for(Loc_u8_Iter=0;Loc_u8_Iter<NUMBER_OF_TIMERS;Loc_u8_Iter++)
	{
		if(TMR_CBF_OVRF_Handler[Loc_u8_Iter]!=NULL)
		{
			TMR_CBF_OVRF[Loc_u8_Iter]=TMR_CBF_OVRF_Handler[Loc_u8_Iter];
		}
	}
}

void TMR_enuRegisterCallBack_COMP (TMR_CBF_t TMR_CBF_COMP_Handler)
{
	u8 Loc_u8_Iter;
	for(Loc_u8_Iter=0;Loc_u8_Iter<NUMBER_OF_TIMERS;Loc_u8_Iter++)
	{
		if(TMR_CBF_COMP_Handler[Loc_u8_Iter]!=NULL)
		{
			TMR_CBF_COMP[Loc_u8_Iter]=TMR_CBF_COMP_Handler[Loc_u8_Iter];
		}
	}
}


void __vector_11 (void)
{
	if (TMR_CBF_OVRF[TMR_u8_TIMER0] != NULL)
	{
		TMR_ISR_Counter[TMR_u8_TIMER0]++;
		if (TMR_ISR_Counter[TMR_u8_TIMER0] == TMR_OVRF_Ctr[TMR_u8_TIMER0])
		{
			TMR_ISR_Counter[TMR_u8_TIMER0] = 0;
			*TMR_TCNT_t[TMR0] = TMR_OVRF_Prelaod[TMR_u8_TIMER0];
			TMR_CBF_OVRF[TMR_u8_TIMER0]();   
		}
	}
}

void __vector_5 (void)
{
	if (TMR_CBF_OVRF[TMR_u8_TIMER2] != NULL)
	{
		TMR_ISR_Counter[TMR_u8_TIMER2]++;
		if (TMR_ISR_Counter[TMR_u8_TIMER2] == TMR_OVRF_Ctr[TMR_u8_TIMER2])
		{
			TMR_ISR_Counter[TMR_u8_TIMER2] = 0;
			*TMR_TCNT_t[TMR2] = TMR_OVRF_Prelaod[TMR_u8_TIMER2];
			TMR_CBF_OVRF[TMR_u8_TIMER2]();   
		}
	}
}


void __vector_9 (void)
{
	if (TMR_CBF_OVRF[TMR1] != NULL)
	{
		TMR_ISR_Counter[TMR1]++;
		if (TMR_ISR_Counter[TMR1] == TMR_OVRF_Ctr[TMR1])
		{
			TMR_ISR_Counter[TMR1] = 0;
			*TMR1_u16Reg[TMR1_TCNT] = TMR_OVRF_Prelaod[TMR1];
			TMR_CBF_OVRF[TMR1]();   
		}
	}
}
/*************************************************************************/

void __vector_10 (void)
{
	if (TMR_CBF_COMP[TMR_u8_TIMER0] != NULL)
	{
		TMR_ISR_Counter[TMR0]++;
		if (TMR_ISR_Counter[TMR0] == TMR_COMP_Ctr[TMR0])
		{
			TMR_CBF_COMP[TMR0]();  
		}
	}
}

void __vector_7 (void)
{
	if (TMR_CBF_COMP[TMR1] != NULL)
	{
		TMR_ISR_Counter[TMR1]++;
		if (TMR_ISR_Counter[TMR1] == TMR_COMP_Ctr[TMR1])
		{
			TMR_CBF_COMP[TMR1]();   
		}
	}
}


void __vector_4 (void)
{
	if (TMR_CBF_COMP[TMR2] != NULL)
	{
		TMR_ISR_Counter[TMR2]++;
		if (TMR_ISR_Counter[TMR2] == TMR_COMP_Ctr[TMR2])
		{
			TMR_CBF_COMP[TMR2]();   
		}
	}
}

void __vector_6 (void)
{
	static u8 Local_u8Flag = 0;
	static u16 Local_u16StartTime = 0;
	static u16 Local_u16StopTime = 0;

    if (Local_u8Flag == 0)
    {
        Local_u8Flag = 1;
    	TMR_u16TotalTime = *TMR1_u16Reg[TMR1_ICR] - Local_u16StartTime;
    	TMR_u16OnTime = Local_u16StopTime - Local_u16StartTime;
    	Local_u16StartTime = *TMR1_u16Reg[TMR1_ICR];
        TMR_u16DutyCycle = ((TMR_u16OnTime*100)/TMR_u16TotalTime);
        CLR_BIT(*TMR_CTRL_t[TMR1],6); 
    }
	else
	{
		Local_u8Flag = 0;
		Local_u16StopTime = *TMR1_u16Reg[TMR1_ICR];
        SET_BIT(*TMR_CTRL_t[TMR1],6);  
	}
}



static void TMR_vSetOVRF_Time(u8 Copy_u8TimerNb,f32 Copy_f32TimerCtr)
{
	f32 Local_f32FractionCount;
	u32 Local_u32preload;
	if (Copy_f32TimerCtr >= 1)
	{
		TMR_OVRF_Ctr[Copy_u8TimerNb] = 1;
		TMR_OVRF_Prelaod[Copy_u8TimerNb] = 0;
		if(Copy_u8TimerNb<2)
		{
			*TMR_TCNT_t[Copy_u8TimerNb] = 0;
		}
		else
		{
			*TMR1_u16Reg[TMR1_TCNT]=	0;
		}
	}
	else if (Copy_f32TimerCtr > 1)
	{
	   if (Copy_f32TimerCtr - (u32)Copy_f32TimerCtr == 0) 
	   {
		    TMR_OVRF_Ctr[Copy_u8TimerNb] = (u32)Copy_f32TimerCtr;
		    TMR_OVRF_Prelaod[Copy_u8TimerNb] = 0;
		    if(Copy_u8TimerNb<2)
			{
			*TMR_TCNT_t[Copy_u8TimerNb] =0;
			}
			else
			{
			*TMR1_u16Reg[TMR1_TCNT]=0;
			}
			
	   }
	   else 
	   {
		   Local_f32FractionCount = TMR_u8_MAXVAL_TIMER02_REG*(Copy_f32TimerCtr-(u32)Copy_f32TimerCtr);
		   Local_u32preload = TMR_u8_MAXVAL_TIMER02_REG - Local_f32FractionCount;
		   TMR_OVRF_Ctr[Copy_u8TimerNb] = ((u32)Copy_f32TimerCtr)+1;
		   TMR_OVRF_Prelaod[Copy_u8TimerNb] = Local_u32preload;
		   if(Copy_u8TimerNb<2)
			{
			*TMR_TCNT_t[Copy_u8TimerNb] = Local_u32preload;
			}
			else
			{
			*TMR1_u16Reg[TMR1_TCNT]=	Local_u32preload;
			}
	   }
	}
	else if (Copy_f32TimerCtr < 1)
	{
	   Local_f32FractionCount = TMR_u8_MAXVAL_TIMER02_REG*Copy_f32TimerCtr;
	   Local_u32preload = TMR_u8_MAXVAL_TIMER02_REG - Local_f32FractionCount;
	   TMR_OVRF_Ctr[Copy_u8TimerNb] = 1;
	   TMR_OVRF_Prelaod[Copy_u8TimerNb] = Local_u32preload;
	   		 if(Copy_u8TimerNb<2)
			{
			*TMR_TCNT_t[Copy_u8TimerNb] = Local_u32preload;
			}
			else
			{
			*TMR1_u16Reg[TMR1_TCNT]=	Local_u32preload;
			}
	}
	
	
}


static void TMR_vSetTIMERCTCTime (u8 Copy_u8TimerNb,f32 Copy_f32TimerCtr)
{
    f32 Local_f32FractionCount;
 	if (Copy_f32TimerCtr == 1)
 	{
 		TMR_COMP_Ctr[Copy_u8TimerNb] = 1;
		if(Copy_u8TimerNb<2)
		{
			*TMR_OCR_t[Copy_u8TimerNb] = 0xff;
		}
		else
		{
			*TMR1_u16Reg[TMR1_OCRA]=0xffff;
 		}
 	}
 	else if (Copy_f32TimerCtr > 1)
 	{
 		if (Copy_f32TimerCtr - (u32)Copy_f32TimerCtr == 0)
		{
			 TMR_COMP_Ctr[Copy_u8TimerNb] = (u32)Copy_f32TimerCtr;
			 if(Copy_u8TimerNb<2)
				{
				*TMR_OCR_t[Copy_u8TimerNb] = 0xff;
				}
			else
				{
				*TMR1_u16Reg[TMR1_OCRA]=0xffff;
				}
		}
 		else  
		{
 		     Local_f32FractionCount = TMR_u8_MAXVAL_TIMER02_REG*(Copy_f32TimerCtr-(u32)Copy_f32TimerCtr);
			 TMR_COMP_Ctr[Copy_u8TimerNb] = (u32)Copy_f32TimerCtr+1;
			 if(Copy_u8TimerNb<2)
				{
				*TMR_OCR_t[Copy_u8TimerNb] = Local_f32FractionCount;
				}
			else
				{
				*TMR1_u16Reg[TMR1_OCRA]=Local_f32FractionCount;
				}
 		}
 	 }
     else if (Copy_f32TimerCtr < 1)
     {
 	    Local_f32FractionCount = TMR_u8_MAXVAL_TIMER02_REG*Copy_f32TimerCtr;
			 TMR_COMP_Ctr[Copy_u8TimerNb] = 1;
			 if(Copy_u8TimerNb<2)
				{
				*TMR_OCR_t[Copy_u8TimerNb] = Local_f32FractionCount;
				}
			else
				{
				*TMR1_u16Reg[TMR1_OCRA]=Local_f32FractionCount;
				}
     }
}
