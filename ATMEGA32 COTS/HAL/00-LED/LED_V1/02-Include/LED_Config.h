//Author : Ahmed Elessawy  
 
#define PORTA_PIN0  0
#define PORTA_PIN1  1
#define PORTA_PIN2  2
#define PORTA_PIN3  3
#define PORTA_PIN4  4
#define PORTA_PIN5  5
#define PORTA_PIN6  6
#define PORTA_PIN7  7
             
#define PORTB_PIN0  8
#define PORTB_PIN1  9
#define PORTB_PIN2  10
#define PORTB_PIN3  11
#define PORTB_PIN4  12
#define PORTB_PIN5  13
#define PORTB_PIN6  14
#define PORTB_PIN7  15
             
#define PORTC_PIN0  16
#define PORTC_PIN1  17
#define PORTC_PIN2  18
#define PORTC_PIN3  19
#define PORTC_PIN4  20
#define PORTC_PIN5  21
#define PORTC_PIN6  22
#define PORTC_PIN7  23
             
#define PORTD_PIN0  24
#define PORTD_PIN1  25
#define PORTD_PIN2  26
#define PORTD_PIN3  27
#define PORTD_PIN4  28
#define PORTD_PIN5  29
#define PORTD_PIN6  30
#define PORTD_PIN7  31
 



//choose pins connected to leds from above configuration 

#define LED0_PIN  PORTA_PIN0
#define LED1_PIN  PORTA_PIN1
#define LED2_PIN  PORTA_PIN2
#define LED3_PIN  PORTA_PIN3
#define LED4_PIN  PORTA_PIN4
#define LED5_PIN  PORTA_PIN5
#define LED6_PIN  PORTA_PIN6
#define LED7_PIN  PORTA_PIN7


//configure each led as active high or active low
#define LED0_State  ActiveHigh
#define LED1_State  ActiveHigh
#define LED2_State  ActiveHigh
#define LED3_State  ActiveHigh
#define LED4_State  ActiveHigh
#define LED5_State  ActiveHigh
#define LED6_State  ActiveHigh
#define LED7_State  ActiveHigh





//Add the required leds like below configuartion
#define LED0_Red     0
#define LED1_Green   1
#define LED2_Yellow  2
#define LED3_Red     3
#define LED4_Green   4
#define LED5_Yellow  5
#define LED6_Red     6
#define LED7_Green   7





//configure number of leds based on configured number of leds above  
#define NumberOfLeds 8 


typedef struct 
{
  u8 LED_tu8LedPin;
  u8 LED_tu8ActiveSatet;
  
}LED_tstr_LEDS;

