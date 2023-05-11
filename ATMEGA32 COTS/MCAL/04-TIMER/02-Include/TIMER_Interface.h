/** @file TimerPrivate.h
* @brief The Interface definition for the Timer.
*
* This is the header file for the definition of register addresses 
on a standard microcontroller.
*/





/*Macro for defining the 3 availabe timers in AVR ATmega32*/
#define TMR_u8_TIMER0      (u8)0
#define TMR_u8_TIMER2      (u8)1

#define TMR_u32_1SEC       (u32)1000000
#define TMR_u32_1MSEC      (u32)1000

/*
 * Description: Function to set the initialized state and prescaler for each timer (0,1,2)
 * Inputs: none
 * Output: void
 */
void TMR_vInit (void);

/*
 * Description: Function to enable one of the available timers in AVR ATmega32 (0,1,2)
 * Inputs: Timer Number
 * Output: the Error state of the function
 */
void TMR_enuEnableTimer (u8 Copy_u8TimerNb);


/*
 * Description: Function to disable one of the available timers in AVR ATmega32 (0,1,2)
 * Inputs: Timer Number
 * Output: the Error state of the function
 */
void TMR_enuDisableTimer (u8 Copy_u8TimerNb);


/*
 * Description: Function to enable one of the available timers in AVR ATmega32 (0,1,2)
 * Inputs: Timer Number
 * Output: the Error state of the function
 */
//void TMR_enuInitPostCompile (u8 Copy_u8TimerNb,TMR_Cfg_Handler_t TMR_Cfg_P_t);


/*
 * Description: Function to set the delay time for the required timer
 * this function can be used for making delay (in case of Timer normal mode)
 * or for specifying a sampling time (in case of Timer CTC mode)
 * Inputs: the delay time in microsecond
 * Output: the Error state of the function
 */
//void TMR_enuSetTickTime (u8 Copy_u8TimerNb,u8 Copy_u8TickTimeMs,u8 Copy_u8Mode);


/*
 * Description: Function to set the duty cycle of the PWM signal generated from Timers(0,1,2)
 * Inputs: Timer Number and the desired duty cycle
 * Output: the Error state of the function
 */
//void TMR_enuSetDutyCycle (u8 Copy_u8TimerNb,u8 Copy_u8DutyCycle);



//void ICU_enuEnableINT(void);


//void ICU_enuEDisableINT(void);

/*
* Description: Function to get the Period of the signal received by the input capture pin ICP1 (D6)
* Inputs: the container variable which will hold the value of the period
* Output: the Error state of the function
*/
//void ICU_u8GetPeriod (u16 *Copy_Pu16Period);

/*
* Description: Function to get the Duty Cycle of the signal received by the input capture pin ICP1 (D6)
* Inputs: the container variable which will hold the value of the Duty Cycle
* Output: the Error state of the function
*/
//void ICU_u8GetDutyCycle (u16 *Copy_Pu16DutyCycle);

/*
* Description: Function to get the OnTime of the signal received by the input capture pin ICP1 (D6)
* Inputs: the container variable which will hold the value of the OnTime
* Output: the Error state of the function
*/
//void ICU_u8OnTime (u16 *Copy_Pu16OnTime);

/*
* Description: Function to get the OffTime of the signal received by the input capture pin ICP1 (D6)
* Inputs: the container variable which will hold the value of the OffTime
* Output: the Error state of the function
*/
//void ICU_u8OffTime (u16 *Copy_Pu16OffTime);

/*
 * Description: Function to set the callback function for a certain timer in case of firing its interrupt
 * Inputs: the number of the available timer (0,1,2) and a pointer to its callback function
 * Output: the Error state of the function
 */
//void TMR_enuRegisterCallBack_OVRF (void(*TMR_CBF TMR_CBF_OVRF_Handler[NUMBER_OF_TIMERS])(void));

//void TMR_enuRegisterCallBack_COMP (void(*TMR_CBF TMR_CBF_COMP_Handler[NUMBER_OF_TIMERS+1])(void));