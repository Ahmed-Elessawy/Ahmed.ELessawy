/*
 * File: ledval.c
 *
 * Code generated for Simulink model 'ledval'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Sun Jan 08 13:19:14 2023
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

#include "ledval.h"
#include "ledval_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_ledval_T ledval_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_ledval_T ledval_Y;

/* Real-time model */
RT_MODEL_ledval_T ledval_M_;
RT_MODEL_ledval_T *const ledval_M = &ledval_M_;

/* Model step function */
void ledval_step(void)
{
  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Inport: '<Root>/In1'
   */
  /* MATLAB Function 'MATLAB Function': '<S1>:1' */
  /* '<S1>:1:4' if state == switchmode.ON */
  if (ledval_U.In1 == ON) {
    /* Outport: '<Root>/Out1' */
    /* '<S1>:1:5' ledval = led.GREEN; */
    ledval_Y.Out1 = GREEN;
  } else {
    /* Outport: '<Root>/Out1' */
    /* '<S1>:1:6' else */
    /* '<S1>:1:7' ledval = led.RED; */
    ledval_Y.Out1 = RED;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */
}

/* Model initialize function */
void ledval_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(ledval_M, (NULL));

  /* external inputs */
  ledval_U.In1 = OFF;

  /* external outputs */
  ledval_Y.Out1 = GREEN;
}

/* Model terminate function */
void ledval_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
