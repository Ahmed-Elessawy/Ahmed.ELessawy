/*
 * File: S_Calc.c
 *
 * Code generated for Simulink model 'S_Calc'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Dec 27 11:23:11 2022
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

#include "S_Calc.h"
#include "S_Calc_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_S_Calc_T S_Calc_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_S_Calc_T S_Calc_Y;

/* Real-time model */
RT_MODEL_S_Calc_T S_Calc_M_;
RT_MODEL_S_Calc_T *const S_Calc_M = &S_Calc_M_;

/* Model step function */
void S_Calc_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<Root>/Add'
   */
  S_Calc_Y.Out1 = S_Calc_U.In1 + S_Calc_U.In2;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<Root>/Subtract'
   */
  S_Calc_Y.Out2 = S_Calc_U.In1 - S_Calc_U.In2;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<Root>/Product'
   */
  S_Calc_Y.Out3 = S_Calc_U.In1 * S_Calc_U.In2;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<Root>/Divide'
   */
  S_Calc_Y.Out4 = S_Calc_U.In1 / S_Calc_U.In2;
}

/* Model initialize function */
void S_Calc_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(S_Calc_M, (NULL));

  /* external inputs */
  (void)memset((void *)&S_Calc_U, 0, sizeof(ExtU_S_Calc_T));

  /* external outputs */
  (void) memset((void *)&S_Calc_Y, 0,
                sizeof(ExtY_S_Calc_T));
}

/* Model terminate function */
void S_Calc_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
