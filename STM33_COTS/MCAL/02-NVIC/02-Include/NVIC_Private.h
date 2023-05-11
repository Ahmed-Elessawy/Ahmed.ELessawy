


#ifndef NVIC_PRIVATE_H
#define NVIC_PRIVATE_H


#define NVIC_VETKEY		0x05FA0000


#define	Group3    0x05FA0300  	 			// 4 bits => for group Priority && 0 bits for sub group
#define Group4    0x05FA0400 				// 3 bits => for group Priority && 1 bits for sub group
#define	Group5    0x05FA0500				// 2 bits => for group Priority && 2 bits for sub group
#define	Group6    0x05FA0600				// 1 bits => for group Priority && 3 bits for sub group
#define	Group7    0x05FA0700				// 0 bits => for group Priority && 4 bits for sub group
										  
#define NVIC_WINDOW_WATCHDOG_TIMER		0U
#define	NIVC_EXTERNAL_LINE16			1U
#define	NIVC_EXTERNAL_LINE21			2U
#define	NIVC_EXTERNAL_LINE22			3U
#define	NIVC_FLASH_INTERRUPT			4U
#define	NVIC_RCC_INTERRUPT				5U
#define NVIC_EXT0_INTERRRUPT			6U
#define NVIC_EXT1_INTERRRUPT			7U
#define NVIC_EXT2_INTERRRUPT			8U
#define NVIC_EXT3_INTERRRUPT			9U
#define NVIC_EXT4_INTERRRUPT			10U
#define NVIC_DMA1_STREAM0				11U
#define NVIC_DMA1_STREAM1				12U
#define NVIC_DMA1_STREAM2				13U
#define NVIC_DMA1_STREAM3				14U
#define NVIC_DMA1_STREAM4				15U
#define NVIC_DMA1_STREAM5				16U
#define NVIC_DMA1_STREAM6               17U
#define NVIC_ADC_INTERRUPT              18U
#define NVIC_EXT9_INTERRUPT             23U
#define NVIC_TIM1_BRK_INTERRUPT         24U
#define NVIC_TIM1_UP_INTERRUPT          25U
#define NVIC_TIMI1_TRG_INTERRUPT        26U
#define NVIC_TIMI1_CC_INTERRUPT         27U
#define NVIC_TIMI2_INTERRUPT            28U
#define NVIC_TIMI3_INTERRUPT            29U
#define NVIC_TIMI4_INTERRUPT            30U
#define NVIC_I2C1_EV_INTERRUPT          31U
#define NVIC_I2C1_ER_INTERRUPT          32U
#define NVIC_I2C2_EV_INTERRUPT          33U
#define NVIC_I2C2_ER_INTERRUPT          34U
#define NVIC_SPI1_INTERRUPT             35U
#define NVIC_SPI2_INTERRUPT             36U
#define NVIC_USART1_INTERRUPT           37U
#define NVIC_USART2_INTERRUPT           38U
#define NVIC_EXTI15_INTERRUPT           40U
#define NVIC_EXTI17_INTERRUPT           41U
#define NVIC_EXTI18_INTERRUPT           42U
#define NVIC_DMA1_INTERRUPT             47U
#define NVIC_SDIO_INTERRUPT             49U
#define NVIC_TIM5_INTERRUPT             50U
#define NVIC_SPI3_INTERRUPT             51U
#define NVIC_DMA2_STREAM0_INTERRUPT     56U
#define NVIC_DMA2_STREAM1_INTERRUPT     57U
#define NVIC_DMA2_STREAM2_INTERRUPT     58U
#define NVIC_DMA2_STREAM3_INTERRUPT     59U
#define NVIC_DMA2_STREAM4_INTERRUPT     60U
#define NVIC_OTG_FS_INTERRUPT           67U
#define NVIC_DMA2_STREAM5_INTERRUPT     68U
#define NVIC_DMA2_STREAM6_INTERRUPT     69U
#define NVIC_DMA2_STREAM7_INTERRUPT     70U
#define NVIC_USART6_INTERRUPT           71U
#define NVIC_I2C3_EV_INTERRUPT          72U
#define NVIC_I2C3_ER_INTERRUPT          73U
#define NVIC_FPU_INTERRUPT              81U
#define NVIC_SPI4_INTERRUPT             84U

#define ACIR	(*(volatile u32*)0xE000ED0C)


typedef struct
{

	u32 NVIC_ISER[8];

	u32 Reserved[24];

	u32 NVIC_ICER[8];

	u32 Reserved1[24];

	u32 NVIC_ISPR[8];

	u32 Reserved2[24];

	u32 NVIC_ICPR[8];

	u32 Reserved3[24];

	u32 NVIC_IABR[8];

	u32 Reserved4[56];

	u8 NVIC_IPR[240];

	u32 Reserved5[643];

	u32 NVIC_STIR;

}volatile * const Nvic_tstrRegister;

#endif