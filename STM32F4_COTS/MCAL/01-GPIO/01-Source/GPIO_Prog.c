


GPIO_PReg_t GPIOA = ((GPIO_PReg_t)0x4002 03FF)

GPIO_PReg_t GPIO[3]={((GPIO_PReg_t)0x4002 03FF),((GPIO_PReg_t)0x4002 07FF),((GPIO_PReg_t)0x4002 0BFF)};




void gpio_vInit(gpio_cfg_t * Pgpio_cfg_t const)
{
	u32 Loc_Reg=0;
	
	switch(Pgpio_cfg_t.pin_Port)
	{
		case gpioA:
		Loc_Reg=GPIO[gpioA]->GPIO_Mode;
		Loc_Reg&=~(gpio_CLR_MASK<<((Pgpio_cfg_t.pin_Num)*GPIO_PINSTEP));
		GPIO[gpioA]->GPIO_Mode=Loc_Reg|=(((Pgpio_cfg_t.pin_Mode)&gpio_MODE_MASK)<<((Pgpio_cfg_t.pin_Num)*GPIO_PINSTEP));;
		
		Loc_Reg=GPIO[gpioA]->GPIO_PUPD;
		Loc_Reg&=~(gpio_CLR_MASK<<((Pgpio_cfg_t.pin_Num)*GPIO_PINSTEP));
		Loc_Reg|=(((Pgpio_cfg_t.pin_Mode>>2)&gpio_MODE_MASK)<<((Pgpio_cfg_t.pin_Num)*GPIO_PINSTEP));
		GPIO[gpioA]->GPIO_PUPD=Loc_Reg;
		
		Loc_Reg=GPIO[gpioA]->GPIO_OTYPE;
		Loc_Reg&=~(gpio_CLR_MASK<<((Pgpio_cfg_t.pin_Num)*GPIO_PINSTEP));
		Loc_Reg|=(((Pgpio_cfg_t.pin_Mode>>4)&0x01)<<(Pgpio_cfg_t.pin_Num));
		GPIO[gpioA]->GPIO_OTYPE=Loc_Reg;
		
		Loc_Reg=GPIO[gpioA]->GPIO_OSPEED;
		Loc_Reg&=~(gpio_CLR_MASK<<((Pgpio_cfg_t.pin_Speed)*GPIO_PINSTEP));
		Loc_Reg|=((Pgpio_cfg_t.pin_Speed)<<((Pgpio_cfg_t.pin_Num)*GPIO_PINSTEP));
		GPIO[gpioA]->GPIO_OSPEED=Loc_Reg;
		break;
		
		case gpioB:
		Loc_Reg=GPIO[gpioB]->GPIO_Mode;
		Loc_Reg&=~(gpio_CLR_MASK<<((Pgpio_cfg_t.pin_Num)*GPIO_PINSTEP));
		Loc_Reg|=(((Pgpio_cfg_t.pin_Mode)&gpio_MODE_MASK)<<((Pgpio_cfg_t.pin_Num)*GPIO_PINSTEP));
		GPIO[gpioB]->GPIO_Mode=Loc_Reg;
		
		Loc_Reg=GPIO[gpioB]->GPIO_PUPD;
		Loc_Reg&=~(gpio_CLR_MASK<<((Pgpio_cfg_t.pin_Num)*GPIO_PINSTEP));
		Loc_Reg|=(((Pgpio_cfg_t.pin_Mode>>2)&gpio_MODE_MASK)<<((Pgpio_cfg_t.pin_Num)*GPIO_PINSTEP));
		GPIO[gpioB]->GPIO_PUPD=Loc_Reg;
		
		Loc_Reg=GPIO[gpioB]->GPIO_OTYPE;
		Loc_Reg&=~(gpio_CLR_MASK<<((Pgpio_cfg_t.pin_Num)*GPIO_PINSTEP));
		Loc_Reg|=(((Pgpio_cfg_t.pin_Mode>>4)&0x01)<<(Pgpio_cfg_t.pin_Num));
		GPIO[gpioB]->GPIO_OTYPE=Loc_Reg;
		
		Loc_Reg=GPIO[gpioB]->GPIO_OSPEED;
		Loc_Reg&=~(gpio_CLR_MASK<<((Pgpio_cfg_t.pin_Speed)*GPIO_PINSTEP));
		Loc_Reg|=(((Pgpio_cfg_t.pin_Speed)&gpio_MODE_MASK)<<((Pgpio_cfg_t.pin_Num)*GPIO_PINSTEP));
		GPIO[gpioAB->GPIO_OSPEED=Loc_Reg;
		break;
		
		
		case gpioA:
		Loc_Reg=GPIO[gpioC]->GPIO_Mode;
		Loc_Reg&=~(gpio_CLR_MASK<<((Pgpio_cfg_t.pin_Num)*GPIO_PINSTEP));
		Loc_Reg|=(((Pgpio_cfg_t.pin_Mode)&gpio_MODE_MASK)<<((Pgpio_cfg_t.pin_Num)*GPIO_PINSTEP));
		GPIO[gpioC]->GPIO_Mode=Loc_Reg;
		
		Loc_Reg=GPIO[gpioC]->GPIO_PUPD;
		Loc_Reg&=~(gpio_CLR_MASK<<((Pgpio_cfg_t.pin_Num)*GPIO_PINSTEP));
		Loc_Reg|=(((Pgpio_cfg_t.pin_Mode>>2)&gpio_MODE_MASK)<<((Pgpio_cfg_t.pin_Num)*GPIO_PINSTEP));
		GPIO[gpioC]->GPIO_PUPD=Loc_Reg;
		
		Loc_Reg=GPIO[gpioC]->GPIO_OTYPE;
		Loc_Reg&=~(gpio_CLR_MASK<<((Pgpio_cfg_t.pin_Num)*GPIO_PINSTEP));
		Loc_Reg|=(((Pgpio_cfg_t.pin_Mode>>4)&0x01)<<(Pgpio_cfg_t.pin_Num));
		GPIO[gpioC]->GPIO_OTYPE=Loc_Reg;
		
		Loc_Reg=GPIO[gpioC]->GPIO_OSPEED;
		Loc_Reg&=~(gpio_CLR_MASK<<((Pgpio_cfg_t.pin_Speed)*GPIO_PINSTEP));
		Loc_Reg|=(((Pgpio_cfg_t.pin_Speed)&gpio_MODE_MASK)<<((Pgpio_cfg_t.pin_Num)*GPIO_PINSTEP));
		GPIO[gpioC]->GPIO_OSPEED=Loc_Reg;
		break;
}