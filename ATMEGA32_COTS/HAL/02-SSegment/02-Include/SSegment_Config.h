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





#define SSegment1_LED_a  PORTA_PIN0
#define SSegment1_LED_b  PORTA_PIN1
#define SSegment1_LED_c  PORTA_PIN2
#define SSegment1_LED_d  PORTA_PIN3
#define SSegment1_LED_e  PORTA_PIN4
#define SSegment1_LED_f  PORTA_PIN5
#define SSegment1_LED_g  PORTA_PIN6
#define SSegment1_LED_h  PORTA_PIN7


#define SSegment2_LED_a  PORTB_PIN0
#define SSegment2_LED_b  PORTB_PIN1
#define SSegment2_LED_c  PORTB_PIN2
#define SSegment2_LED_d  PORTB_PIN3
#define SSegment2_LED_e  PORTB_PIN4
#define SSegment2_LED_f  PORTB_PIN5
#define SSegment2_LED_g  PORTB_PIN6
#define SSegment2_LED_h  PORTB_PIN7

#define SSegment3_LED_a  PORTC_PIN0
#define SSegment3_LED_b  PORTC_PIN1
#define SSegment3_LED_c  PORTC_PIN2
#define SSegment3_LED_d  PORTC_PIN3
#define SSegment3_LED_e  PORTC_PIN4
#define SSegment3_LED_f  PORTC_PIN5
#define SSegment3_LED_g  PORTC_PIN6
#define SSegment3_LED_h  PORTC_PIN7



//add the segments that are are connected
#define SSegment1 0
#define SSegment2 1
#define SSegment3 2

#define NumberOfSegments 3

//choose between CommonAnode and CommonCathode
#define Mode CommonAnode