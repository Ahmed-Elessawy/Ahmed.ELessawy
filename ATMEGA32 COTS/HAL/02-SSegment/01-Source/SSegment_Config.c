
#include"../../LIB/Std_Types.h"
#include"../../LIB/Macros.h"
#include"../02-Include/SSegment_Interface.h"
#include"../02-Include/SSegment_Config.h"

#include"../02-Include/SSegment_Private.h"



const SSegment_LEDS SSegmentConfig[NumberOfSegments]=
{
	[SSegment1]
	{
		.SSegment_LED_a=SSegment1_LED_a,
		.SSegment_LED_b=SSegment1_LED_b,
		.SSegment_LED_c=SSegment1_LED_c,
		.SSegment_LED_d=SSegment1_LED_d,
		.SSegment_LED_e=SSegment1_LED_e,
		.SSegment_LED_f=SSegment1_LED_f,
		.SSegment_LED_g=SSegment1_LED_g,
		.SSegment_LED_h=SSegment1_LED_h,
		.SSegment_Mode=SSegment_ActiveMode,
	},
	
	[SSegment2]
	{
		.SSegment_LED_a=SSegment2_LED_a,
		.SSegment_LED_b=SSegment2_LED_b,
		.SSegment_LED_c=SSegment2_LED_c,
		.SSegment_LED_d=SSegment2_LED_d,
		.SSegment_LED_e=SSegment2_LED_e,
		.SSegment_LED_f=SSegment2_LED_f,
		.SSegment_LED_g=SSegment2_LED_g,
		.SSegment_LED_h=SSegment2_LED_h,
		.SSegment_Mode=SSegment_ActiveMode,
	}
	
};






