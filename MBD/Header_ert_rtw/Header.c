/*
 * File: Header.c
 *
 * Code generated for Simulink model 'Header'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Sun Jan 01 20:16:55 2023
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

#include "Header.h"
#include "Header_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_Header_T Header_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Header_T Header_Y;

/* Real-time model */
RT_MODEL_Header_T Header_M_;
RT_MODEL_Header_T *const Header_M = &Header_M_;

/* Model step function */
void Header_step(void)
{
  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/In1'
   */
  /* Gateway: Chart */
  /* During: Chart */
  /* Entry Internal: Chart */
  /* Transition: '<S1>:12' */
  if (Header_U.In1 == ((boolean_T)Std_False)) {
    /* Outport: '<Root>/Out1' */
    /* Transition: '<S1>:13' */
    /* Transition: '<S1>:15' */
    Header_Y.Out1 = 1.0;

    /* Transition: '<S1>:16' */
  } else {
    /* Transition: '<S1>:14' */
  }

  /* End of Chart: '<Root>/Chart' */
  /* Transition: '<S1>:17' */
}

/* Model initialize function */
void Header_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Header_M, (NULL));

  /* external inputs */
  Header_U.In1 = 0.0;

  /* external outputs */
  Header_Y.Out1 = 0.0;

  /* SystemInitialize for Outport: '<Root>/Out1' incorporates:
   *  SystemInitialize for Chart: '<Root>/Chart'
   */
  Header_Y.Out1 = 0.0;
}

/* Model terminate function */
void Header_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
