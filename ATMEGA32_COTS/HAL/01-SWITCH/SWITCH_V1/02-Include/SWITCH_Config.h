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




//choose pins connected to SWITCHs from above configuration 

#define SWITCH0_PIN  PORTA_PIN0
#define SWITCH1_PIN  PORTA_PIN1
#define SWITCH2_PIN  PORTA_PIN2
#define SWITCH3_PIN  PORTA_PIN3
#define SWITCH4_PIN  PORTA_PIN4
#define SWITCH5_PIN  PORTA_PIN5
#define SWITCH6_PIN  PORTA_PIN6
#define SWITCH7_PIN  PORTA_PIN7

#defien NumberOfSwitches 8


//configure each SWITCH as active high or active low
#define SWITCH0_InputState  PULL_DOWN
#define SWITCH1_InputState  PULL_DOWN
#define SWITCH2_InputState  PULL_DOWN
#define SWITCH3_InputState  PULL_DOWN
#define SWITCH4_InputState  PULL_DOWN
#define SWITCH5_InputState  PULL_DOWN
#define SWITCH6_InputState  PULL_DOWN
#define SWITCH7_InputState  PULL_DOWN





//Add the required SWITCHs like below configuartion
#define SWITCH0_Red     0
#define SWITCH1_Green   1
#define SWITCH2_Yellow  2
#define SWITCH3_Red     3
#define SWITCH4_Green   4
#define SWITCH5_Yellow  5
#define SWITCH6_Red     6
#define SWITCH7_Green   7





//configure number of SWITCHs based on configured number of SWITCHs above  
#define NumberOfSWITCHs 8 


typedef struct 
{
  u8 SWITCH_tu8SWITCHPin;
  u8 SWITCH_tu8InputState;
  
}SWITCH_tstr_SWITCHS;

