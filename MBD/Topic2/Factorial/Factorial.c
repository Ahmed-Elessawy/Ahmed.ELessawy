/*
 * File: Factorial.c
 *
 * Code generated for Simulink model 'Factorial'.
 *
 * Model version                  : 1.24
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Dec 27 14:21:31 2022
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

#include "Factorial.h"
#include "Factorial_private.h"

/* Block states (auto storage) */
DW_Factorial_T Factorial_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_Factorial_T Factorial_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Factorial_T Factorial_Y;

/* Real-time model */
RT_MODEL_Factorial_T Factorial_M_;
RT_MODEL_Factorial_T *const Factorial_M = &Factorial_M_;

/* Model step function */
void Factorial_step(void)
{
  int32_T s1_iter;
  boolean_T loopCond;
  uint8_T icLoad;

  /* Outputs for Iterator SubSystem: '<Root>/While Iterator Subsystem' incorporates:
   *  WhileIterator: '<S1>/While Iterator'
   */
  s1_iter = 1;

  /* InitializeConditions for Delay: '<S1>/Delay' */
  icLoad = 1U;

  /* RelationalOperator: '<Root>/Relational Operator' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Inport: '<Root>/In1'
   */
  loopCond = (Factorial_U.In1 > 0.0);
  while (loopCond && (s1_iter <= 20)) {
    /* Delay: '<S1>/Delay' incorporates:
     *  Constant: '<S1>/Constant'
     */
    if (icLoad != 0) {
      Factorial_DW.Delay_DSTATE = 1.0;
    }

    /* Outport: '<Root>/Out1' incorporates:
     *  Delay: '<S1>/Delay'
     *  Product: '<S1>/Product'
     */
    Factorial_Y.Out1 = (real_T)s1_iter * Factorial_DW.Delay_DSTATE;

    /* Update for Delay: '<S1>/Delay' */
    icLoad = 0U;
    Factorial_DW.Delay_DSTATE = Factorial_Y.Out1;

    /* RelationalOperator: '<S1>/Relational Operator' incorporates:
     *  Constant: '<S1>/Constant1'
     *  Inport: '<Root>/In1'
     *  Sum: '<S1>/Subtract'
     */
    loopCond = (s1_iter <= Factorial_U.In1 - 1.0);
    s1_iter++;
  }

  /* End of Outputs for SubSystem: '<Root>/While Iterator Subsystem' */
}

/* Model initialize function */
void Factorial_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Factorial_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Factorial_DW, 0,
                sizeof(DW_Factorial_T));

  /* external inputs */
  Factorial_U.In1 = 0.0;

  /* external outputs */
  Factorial_Y.Out1 = 0.0;
}

/* Model terminate function */
void Factorial_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
