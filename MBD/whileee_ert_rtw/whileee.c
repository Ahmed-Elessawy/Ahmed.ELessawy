/*
 * File: whileee.c
 *
 * Code generated for Simulink model 'whileee'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Dec 27 13:25:04 2022
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

#include "whileee.h"
#include "whileee_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_whileee_T whileee_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_whileee_T whileee_Y;

/* Real-time model */
RT_MODEL_whileee_T whileee_M_;
RT_MODEL_whileee_T *const whileee_M = &whileee_M_;

/* Model step function */
void whileee_step(void)
{
  int32_T s1_iter;
  boolean_T loopCond;

  /* Outputs for Iterator SubSystem: '<Root>/While Iterator Subsystem' incorporates:
   *  WhileIterator: '<S1>/While Iterator'
   */
  s1_iter = 1;

  /* Inport: '<Root>/In1' */
  loopCond = whileee_U.In1;
  while (loopCond && (s1_iter <= 5)) {
    /* Outport: '<Root>/Out1' incorporates:
     *  Constant: '<Root>/Constant'
     *  Constant: '<S2>/FixPt Constant'
     *  Sum: '<S2>/FixPt Sum1'
     */
    whileee_Y.Out1 = 13.0;
    loopCond = whileee_ConstB.RelationalOperator;
    s1_iter++;
  }

  /* End of Outputs for SubSystem: '<Root>/While Iterator Subsystem' */
}

/* Model initialize function */
void whileee_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(whileee_M, (NULL));

  /* external inputs */
  whileee_U.In1 = false;

  /* external outputs */
  whileee_Y.Out1 = 0.0;
}

/* Model terminate function */
void whileee_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
