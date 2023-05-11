/*
 * File: Increment_Decrement.c
 *
 * Code generated for Simulink model 'Increment_Decrement'.
 *
 * Model version                  : 1.17
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Dec 29 22:28:43 2022
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

#include "Increment_Decrement.h"
#include "Increment_Decrement_private.h"

/* Block states (auto storage) */
DW_Increment_Decrement_T Increment_Decrement_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_Increment_Decrement_T Increment_Decrement_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Increment_Decrement_T Increment_Decrement_Y;

/* Real-time model */
RT_MODEL_Increment_Decrement_T Increment_Decrement_M_;
RT_MODEL_Increment_Decrement_T *const Increment_Decrement_M =
  &Increment_Decrement_M_;

/* Model step function */
void Increment_Decrement_step(void)
{
  /* Delay: '<Root>/Delay' incorporates:
   *  Constant: '<Root>/Constant'
   */
  if (Increment_Decrement_DW.icLoad != 0) {
    Increment_Decrement_DW.Delay_DSTATE = 1.0;
  }

  /* Outport: '<Root>/Out1' incorporates:
   *  Delay: '<Root>/Delay'
   */
  Increment_Decrement_Y.Out1 = Increment_Decrement_DW.Delay_DSTATE;

  /* Delay: '<Root>/Delay1' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  if (Increment_Decrement_DW.icLoad_o != 0) {
    Increment_Decrement_DW.Delay1_DSTATE = 1.0;
  }

  /* Outport: '<Root>/Out2' incorporates:
   *  Delay: '<Root>/Delay1'
   */
  Increment_Decrement_Y.Out2 = Increment_Decrement_DW.Delay1_DSTATE;

  /* Update for Delay: '<Root>/Delay' incorporates:
   *  Constant: '<S2>/FixPt Constant'
   *  Delay: '<Root>/Delay'
   *  Inport: '<Root>/In1'
   *  Product: '<Root>/Product'
   *  Sum: '<S2>/FixPt Sum1'
   */
  Increment_Decrement_DW.icLoad = 0U;
  Increment_Decrement_DW.Delay_DSTATE = Increment_Decrement_U.In1 *
    Increment_Decrement_DW.Delay_DSTATE + 1.0;

  /* Update for Delay: '<Root>/Delay1' incorporates:
   *  Constant: '<S1>/FixPt Constant'
   *  Delay: '<Root>/Delay1'
   *  Inport: '<Root>/In2'
   *  Product: '<Root>/Product1'
   *  Sum: '<S1>/FixPt Sum1'
   */
  Increment_Decrement_DW.icLoad_o = 0U;
  Increment_Decrement_DW.Delay1_DSTATE = Increment_Decrement_U.In2 *
    Increment_Decrement_DW.Delay1_DSTATE - 1.0;
}

/* Model initialize function */
void Increment_Decrement_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Increment_Decrement_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Increment_Decrement_DW, 0,
                sizeof(DW_Increment_Decrement_T));

  /* external inputs */
  (void)memset((void *)&Increment_Decrement_U, 0, sizeof
               (ExtU_Increment_Decrement_T));

  /* external outputs */
  (void) memset((void *)&Increment_Decrement_Y, 0,
                sizeof(ExtY_Increment_Decrement_T));

  /* InitializeConditions for Delay: '<Root>/Delay' */
  Increment_Decrement_DW.icLoad = 1U;

  /* InitializeConditions for Delay: '<Root>/Delay1' */
  Increment_Decrement_DW.icLoad_o = 1U;
}

/* Model terminate function */
void Increment_Decrement_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
