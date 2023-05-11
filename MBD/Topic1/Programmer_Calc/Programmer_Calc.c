/*
 * File: Programmer_Calc.c
 *
 * Code generated for Simulink model 'Programmer_Calc'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Dec 27 12:14:03 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 *    3. ROM efficiency
 *    4. MISRA C:2012 guidelines
 *    5. Traceability
 *    6. Debugging
 *    7. Safety precaution
 *    8. Polyspace
 * Validation result: Not run
 */

#include "Programmer_Calc.h"
#include "Programmer_Calc_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_Programmer_Calc_T Programmer_Calc_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Programmer_Calc_T Programmer_Calc_Y;

/* Real-time model */
RT_MODEL_Programmer_Calc_T Programmer_Calc_M_;
RT_MODEL_Programmer_Calc_T *const Programmer_Calc_M = &Programmer_Calc_M_;

/* Model step function */
void Programmer_Calc_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator1'
   */
  Programmer_Calc_Y.Out1 = (uint8_T)(Programmer_Calc_U.In1 |
    Programmer_Calc_U.In2);

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator2'
   */
  Programmer_Calc_Y.Out2 = (uint8_T)~(uint8_T)(Programmer_Calc_U.In1 &
    Programmer_Calc_U.In2);

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator3'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator7'
   */
  Programmer_Calc_Y.Out3 = (uint8_T)~(uint8_T)(Programmer_Calc_U.In1 ^
    Programmer_Calc_U.In2);

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator4'
   */
  Programmer_Calc_Y.Out4 = (uint8_T)(Programmer_Calc_U.In1 ^
    Programmer_Calc_U.In2);

  /* Outport: '<Root>/Out5' incorporates:
   *  Inport: '<Root>/In1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator5'
   */
  Programmer_Calc_Y.Out5 = (uint8_T)~Programmer_Calc_U.In1;

  /* Outport: '<Root>/Out6' incorporates:
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator6'
   */
  Programmer_Calc_Y.Out6 = (uint8_T)~Programmer_Calc_U.In2;

  /* Outport: '<Root>/Out7' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator'
   */
  Programmer_Calc_Y.Out7 = (uint8_T)(Programmer_Calc_U.In1 &
    Programmer_Calc_U.In2);
}

/* Model initialize function */
void Programmer_Calc_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Programmer_Calc_M, (NULL));

  /* external inputs */
  (void)memset((void *)&Programmer_Calc_U, 0, sizeof(ExtU_Programmer_Calc_T));

  /* external outputs */
  (void) memset((void *)&Programmer_Calc_Y, 0,
                sizeof(ExtY_Programmer_Calc_T));
}

/* Model terminate function */
void Programmer_Calc_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
