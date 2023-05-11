


#ifndef TMR_CFG_H
#define TMR_CFG_H

#define NUMBER_OF_TIMERS        3

typedef struct 
{
	u8 TMR_WAVEGM;
	u8 TMR_COMP_PIN;
	u8 TMR_PreSclr;
	u8 TMR_OVRF_INT;
	u8 TMR_COMP_INT;
}TMR_Cfg_t,*TMR_Cfg_Handler_t;




#endif 
