/**************************************************************/
/* Author: Ahmed Elessawy Rashid                              */
/* Date: 14-Feb-2023                                          */
/* Version: 01                                                */
/* Description: Interface file for ِGPIO Driver	  			  */
/**************************************************************/


#define GPIO_MODE_INPUT 	0x00
#define GPIO_MODE_OUTPUT    0x01
#define GPIO_MODE_AF 		0x02
#define GPIO_MODE_ANALOG 	0x03


#define GPIO_OUTTYPE_PP     0x00
#define GPIO_OUTTYPE_OD		0x01

#define GPIO_SPEED_LOW			0x00
#define GPIO_SPEED_MEDIUM		0x01
#define GPIO_SPEED_HIGHSPEED	0x02
#define GPIO_SPEED_VHIGHSPEED	0x03

#define GPIO_NOPUPU			0x00
#define GPIO_PU				0x01
#define GPIO_PD				0x02


#define gpio_CLR_MASK		0x03

#define gpio_MODE_MASK		0x03
#define GPIO_PINSTEP		2

#define gpio_GP_PP			0x01
#define gpio_GP_PP_PU		0x05
#define gpio_GP_PP_PD		0x09
#define gpio_GP_OD			0x11
#define gpio_GP_OD_PU		0x15
#define gpio_GP_OD_PP		0x19

#define gpio_AF_PP			0x02
#define gpio_AF_PP_PU		0x06
#define gpio_AF_PP_PD		0x0A			
#define gpio_AF_OD			0x12
#define gpio_AF_OD_PU		0x16
#define gpio_AF_OD_PP		0x1A


#define gpio_INPUT_F	    0x00
#define gpio_INPUT_PU		0x04
#define gpio_INPUT_PD		0x08

#define gpio_Analog			0x03


#define gpioA				0
#define gpioB				1
#define gpioC				2

#define PIN0			    0x0001
#define PIN1			    0x0002
#define PIN2			    0x0004
#define PIN3			    0x0008
#define PIN4			    0x0010
#define PIN5			    0x0020
#define PIN6			    0x0040
#define PIN7			    0x0080
#define PIN8			    0x0100
#define PIN9			    0x0200
#define PIN10			    0x0400
#define PIN11			    0x0800
#define PIN12			    0x1000
#define PIN13			    0x2000
#define PIN14			    0x4000
#define PIN15			    0x8000





typedef enum 
{
	GPIO_NOK=0,
	GPIO_OK,
	GPIO_NULL
}GPIO_ErrorStatus_t;


typedef struct 
{
	u32 GPIO_Mode;
	u32 GPIO_OTYPE;
	u32 GPIO_OSPEED;
	u32 GPIO_PUPD;
	u32 GPIO_IDR;
	u32 GPIO_ODR;
	u32 GPIO_BSRR;
	u32 GPIO_LCKR;
	u32 GPIO_AFRL;
	u32 GPIO_AFRH;
	
}volatile *GPIO_PReg_t const;



typedef struct 
{
	u8 pin_Port;
	u8 pin_Num;
	u8 pin_Speed;
	u8 pin_Mode;
}gpio_cfg_t;



void gpio_vInit(gpio_cfg_t * Pgpio_cfg_t const);

GPIO_ErrorStatus_t gpio_WritePinValue(u8 Port,u8 Pin,u8 Value);
GPIO_ErrorStatus_t gpio_ReadPinValue(u8 Port,u8 Pin,u8 Value);
GPIO_ErrorStatus_t gpio_SetPort(u8 Port);
GPIO_ErrorStatus_t gpio_ClrPort(u8 Port);

GPIO_ErrorStatus_t gpio_SetPortValue(u8 Port,u16 Value);

GPIO_ErrorStatus_t gpio_SetPins(u8 Port,u16 Value);

GPIO_ErrorStatus_t gpio_ClrPins(u8 Port,u16 Value);