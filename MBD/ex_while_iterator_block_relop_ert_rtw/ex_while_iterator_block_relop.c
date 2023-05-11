/*
 * File: ex_while_iterator_block_relop.c
 *
 * Code generated for Simulink model 'ex_while_iterator_block_relop'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Dec 27 13:51:24 2022
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

#include "ex_while_iterator_block_relop.h"
#include "ex_while_iterator_block_relop_private.h"

/* Real-time model */
RT_MODEL_ex_while_iterator_bl_T ex_while_iterator_block_relo_M_;
RT_MODEL_ex_while_iterator_bl_T *const ex_while_iterator_block_relo_M =
  &ex_while_iterator_block_relo_M_;

/* Model step function */
void ex_while_iterator_block_relop_step(void)
{
  /* (no output/update code required) */
}

/* Model initialize function */
void ex_while_iterator_block_relop_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(ex_while_iterator_block_relo_M, (NULL));
}

/* Model terminate function */
void ex_while_iterator_block_relop_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
