//Author : Ahmed Elessawy  


#include"../../LIB/Std_Types.h"
#include"../../LIB/Macros.h"
#include"../../01-DIO1/02-Include/DIO1_Interface.h"
#include"../02-Include/SSegment_Interface.h"
#include"../02-Include/SSegment_Private.h"
#include"../02-Include/SSegment_Config.h"

extern const SSegment_LEDS SSegmentConfig[NumberOfSegments];



static const u8 SSegment_LEDS_LookUpTable[10]=
{
	Pattern_ZERO,
	Pattern_ONE,
	Pattern_TWO,
	Pattern_THREE,
	Pattern_FOUR,
	Pattern_FIVE,
	Pattern_SIX,
	Pattern_SEVEN,
	Pattern_EIGHT,
	Pattern_NINE,
};






void SSegment_voidSegmentLEDInit(void)
{
	   u8 Local_u8Iterator=0;
	   for(Local_u8Iterator=0;Local_u8Iterator<NumberOfSegments;Local_u8Iterator++)	{ 
       DIO_enuSetPinDirectionOutput(SSegmentConfig[Local_u8Iterator].SSegment_LED_a);
       DIO_enuSetPinDirectionOutput(SSegmentConfig[Local_u8Iterator].SSegment_LED_b);
       DIO_enuSetPinDirectionOutput(SSegmentConfig[Local_u8Iterator].SSegment_LED_c);
       DIO_enuSetPinDirectionOutput(SSegmentConfig[Local_u8Iterator].SSegment_LED_d);
       DIO_enuSetPinDirectionOutput(SSegmentConfig[Local_u8Iterator].SSegment_LED_e);
       DIO_enuSetPinDirectionOutput(SSegmentConfig[Local_u8Iterator].SSegment_LED_f);
       DIO_enuSetPinDirectionOutput(SSegmentConfig[Local_u8Iterator].SSegment_LED_g);
	   }

  
}





SSegment_tenuErroStatus SSegment_enuSSegmentLEDOn(u8 Copy_u8Number)
{
  u8 NumberofDigits=Copy_u8Number;
  SSegment_tenuErroStatus State=OK;
  u8 Local_u8Iterator=0;
  u8 Local_u8CopyCounter=0;
  
  while(NumberofDigits!=0)  
   {  
       NumberofDigits=NumberofDigits/10;  
       Local_u8CopyCounter++;  
   }  
  
  
    
  if (Local_u8CopyCounter<=NumberOfSegments)
  {
    
  for(Local_u8Iterator=0;Local_u8Iterator<NumberOfSegments;Local_u8Iterator++)
  {
	  
	u8 Local_u8LookUpIterator=0;  
	for(Local_u8LookUpIterator=0;Local_u8LookUpIterator<10; Local_u8LookUpIterator++)
	{	  
			if(Copy_u8Number%10==Local_u8LookUpIterator)
			{
				if(SSegmentConfig[Local_u8Iterator].SSegment_Mode==CommonCathode)
				{
					
				
				DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_a, SSegment_LEDS_LookUpTable[Local_u8LookUpIterator]&0x01);
				DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_b,(SSegment_LEDS_LookUpTable[Local_u8LookUpIterator]>>1)&0x01);
				DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_c,(SSegment_LEDS_LookUpTable[Local_u8LookUpIterator]>>2)&0x01);
				DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_d,(SSegment_LEDS_LookUpTable[Local_u8LookUpIterator]>>3)&0x01);
				DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_e,(SSegment_LEDS_LookUpTable[Local_u8LookUpIterator]>>4)&0x01);
				DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_f,(SSegment_LEDS_LookUpTable[Local_u8LookUpIterator]>>5)&0x01);
				DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_g,(SSegment_LEDS_LookUpTable[Local_u8LookUpIterator]>>6)&0x01);
				}
				
				else
				{
				DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_a,(~SSegment_LEDS_LookUpTable[Local_u8LookUpIterator])&0x01);
				DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_b,(~(SSegment_LEDS_LookUpTable[Local_u8LookUpIterator])>>1)&0x01);
				DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_c,(~(SSegment_LEDS_LookUpTable[Local_u8LookUpIterator])>>2)&0x01);
				DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_d,(~(SSegment_LEDS_LookUpTable[Local_u8LookUpIterator])>>3)&0x01);
				DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_e,(~(SSegment_LEDS_LookUpTable[Local_u8LookUpIterator])>>4)&0x01);
				DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_f,(~(SSegment_LEDS_LookUpTable[Local_u8LookUpIterator])>>5)&0x01);
				DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_g,(~(SSegment_LEDS_LookUpTable[Local_u8LookUpIterator])>>6)&0x01);
					
				}

			}
   
	}
  /* 
  switch((Copy_u8Number%10))
  {
    case Zero:
       DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_a, Pattern_ZERO&0x01);
       DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_b,(Pattern_ZERO>>1)&0x01);
       DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_c,(Pattern_ZERO>>2)&0x01);
       DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_d,(Pattern_ZERO>>3)&0x01);
       DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_e,(Pattern_ZERO>>4)&0x01);
       DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_f,(Pattern_ZERO>>5)&0x01);
       DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_g,(Pattern_ZERO>>6)&0x01);

    break;
    
    case One:
       DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_a, Pattern_ONE&0x01);
       DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_b,(Pattern_ONE>>1)&0x01);
       DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_c,(Pattern_ONE>>2)&0x01);
       DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_d,(Pattern_ONE>>3)&0x01);
       DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_e,(Pattern_ONE>>4)&0x01);
       DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_f,(Pattern_ONE>>5)&0x01);
       DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_g,(Pattern_ONE>>6)&0x01);
       
    break;                
    
    case Two:
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_a, Pattern_TWO&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_b,(Pattern_TWO>>1)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_c,(Pattern_TWO>>2)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_d,(Pattern_TWO>>3)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_e,(Pattern_TWO>>4)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_f,(Pattern_TWO>>5)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_g,(Pattern_TWO>>6)&0x01);
 
    break;
    
    case Three:
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_a, Pattern_THREE&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_b,(Pattern_THREE>>1)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_c,(Pattern_THREE>>2)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_d,(Pattern_THREE>>3)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_e,(Pattern_THREE>>4)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_f,(Pattern_THREE>>5)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_g,(Pattern_THREE>>6)&0x01);
    
    break;
    
    case Four:
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_a, Pattern_FOUR&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_b,(Pattern_FOUR>>1)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_c,(Pattern_FOUR>>2)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_d,(Pattern_FOUR>>3)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_e,(Pattern_FOUR>>4)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_f,(Pattern_FOUR>>5)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_g,(Pattern_FOUR>>6)&0x01);
  
    break;
    
    case Five:
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_a, Pattern_FIVE&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_b,(Pattern_FIVE>>1)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_c,(Pattern_FIVE>>2)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_d,(Pattern_FIVE>>3)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_e,(Pattern_FIVE>>4)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_f,(Pattern_FIVE>>5)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_g,(Pattern_FIVE>>6)&0x01);
    
    break;
    
    case Six:
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_a, Pattern_SIX&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_b,(Pattern_SIX>>1)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_c,(Pattern_SIX>>2)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_d,(Pattern_SIX>>3)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_e,(Pattern_SIX>>4)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_f,(Pattern_SIX>>5)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_g,(Pattern_SIX>>6)&0x01);
    
    break;
    
    case Seven:
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_a, Pattern_SEVEN&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_b,(Pattern_SEVEN>>1)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_c,(Pattern_SEVEN>>2)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_d,(Pattern_SEVEN>>3)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_e,(Pattern_SEVEN>>4)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_f,(Pattern_SEVEN>>5)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_g,(Pattern_SEVEN>>6)&0x01);
    
    break;
    
    case Eight:

    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_a, Pattern_EIGHT&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_b,(Pattern_EIGHT>>1)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_c,(Pattern_EIGHT>>2)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_d,(Pattern_EIGHT>>3)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_e,(Pattern_EIGHT>>4)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_f,(Pattern_EIGHT>>5)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_g,(Pattern_EIGHT>>6)&0x01);
    
    break;
    
    case Nine:
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_a, Pattern_NINE&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_b,(Pattern_NINE>>1)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_c,(Pattern_NINE>>2)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_d,(Pattern_NINE>>3)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_e,(Pattern_NINE>>4)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_f,(Pattern_NINE>>5)&0x01);
    DIO_enuSetPinValue(SSegmentConfig[Local_u8Iterator].SSegment_LED_g,(Pattern_NINE>>6)&0x01);
    
    break;
  }
  */
  Copy_u8Number/=10;
 }
  
}
  
  
  else
  {
    State=NOK;
  }
  
  
  return State;

}  