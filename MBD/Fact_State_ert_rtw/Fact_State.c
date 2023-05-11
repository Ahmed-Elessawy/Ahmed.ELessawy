/*
 * File: Fact_State.c
 *
 * Code generated for Simulink model 'Fact_State'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Dec 28 22:34:12 2022
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

#include "Fact_State.h"
#include "Fact_State_private.h"

/* Block states (auto storage) */
DW_Fact_State_T Fact_State_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_Fact_State_T Fact_State_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Fact_State_T Fact_State_Y;

/* Real-time model */
RT_MODEL_Fact_State_T Fact_State_M_;
RT_MODEL_Fact_State_T *const Fact_State_M = &Fact_State_M_;

/* Model step function */
void Fact_State_step(void)
{
  /* Gateway: Chart */
  /* During: Chart */
  /* Entry Internal: Chart */
  /* Transition: '<S1>:1' */
  /* Transition: '<S1>:2' */
  /* '<S1>:3:1' sf_internal_predicateOutput = ... */
  /* '<S1>:3:1' i<=n; */
  while (Fact_State_DW.i <= Fact_State_U.In1) {
    /* Transition: '<S1>:3' */
    /* Transition: '<S1>:4' */
    /* '<S1>:4:1' fact=fact*i; */
    Fact_State_Y.Out1 *= Fact_State_DW.i;

    /* '<S1>:4:1' i=i+1; */
    Fact_State_DW.i++;

    /* Transition: '<S1>:5' */
  }

  /* Transition: '<S1>:6' */
}

/* Model initialize function */
void Fact_State_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Fact_State_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Fact_State_DW, 0,
                sizeof(DW_Fact_State_T));

  /* external inputs */
  Fact_State_U.In1 = 0.0;

  /* external outputs */
  Fact_State_Y.Out1 = 0.0;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  Fact_State_DW.i = 1.0;

  /* SystemInitialize for Outport: '<Root>/Out1' incorporates:
   *  SystemInitialize for Chart: '<Root>/Chart'
   */
  Fact_State_Y.Out1 = 1.0;
}

/* Model terminate function */
void Fact_State_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
