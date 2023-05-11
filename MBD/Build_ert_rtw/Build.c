/*
 * File: Build.c
 *
 * Code generated for Simulink model 'Build'.
 *
 * Model version                  : 1.14
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Sun Jan 08 17:10:57 2023
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

#include "Build.h"
#include "Build_private.h"

/* Real-time model */
RT_MODEL_Build_T Build_M_;
RT_MODEL_Build_T *const Build_M = &Build_M_;

/* Model step function */
void Build_step(void)
{
  /* Chart: '<Root>/Led ' */
  /* Gateway: Led
   */
  /* During: Led
   */
  /* Entry Internal: Led
   */
  /* Transition: '<S1>:1' */
  /* Transition: '<S1>:7' */
  led_on(led_id0);
}

/* Model initialize function */
void Build_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Build_M, (NULL));
}

/* Model terminate function */
void Build_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
