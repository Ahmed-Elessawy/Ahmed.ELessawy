//Author : Ahmed Elessawy 
//Date : 17/01/2023



#ifndef LED_INTERFACE_H
#define LED_INTERFACE_H


typedef enum
{

    DIO_enuLED0 = 0,
    DIO_enuLED1    ,
    DIO_enuLED2    ,
    DIO_enuLED3    ,
    DIO_enuLED4    ,
    DIO_enuLED5    ,
    DIO_enuLED6    ,
    DIO_enuLED7    ,
    DIO_enuNumberOfLeds
}DIO_tenuLeds;


typedef enum{

	OK,
	NOK,
	OUT_OF_RANGE,
	NULL_POINTER

}LED_tenuErroStatus;



LED_tenuErroStatus LED_enuLEDOn(DIO_tenuLeds Copy_u8LedNumber);


LED_tenuErroStatus LED_enuLEDOff(DIO_tenuLeds Copy_u8LedNumber);




#endif