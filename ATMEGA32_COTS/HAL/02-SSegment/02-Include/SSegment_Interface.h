//Author : Ahmed Elessawy 




#define ZERO  0x3F
#define ONE   0x06
#define TWO   0x5B
#define THREE 0x4F
#define FOUR  0x66
#define FIVE  0x6D
#define SIX   0x7D
#define SEVEN 0x07
#define EIGHT 0x7F
#define NINE  0x6F

#define SSegmentLedsNumber 7


typedef enum{

  NOK,
	OK,
	OUT_OF_RANGE,
	NULL_POINTER

}LED_tenuErroStatus;




typedef struct 
{
    u8 SSegment_LED_a;
    u8 SSegment_LED_b;
    u8 SSegment_LED_c;
    u8 SSegment_LED_d;
    u8 SSegment_LED_e;
    u8 SSegment_LED_f;
    u8 SSegment_LED_g;
    u8 SSegment_LED_h;
}SSegment_LEDS;




void SSegment_voidSSegmentLEDOn(u8 LedNumber);
void SSegment_voidSegmentLEDInit(void);


