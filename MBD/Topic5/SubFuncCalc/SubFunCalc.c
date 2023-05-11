/*
 * File: SubFunCalc.c
 *
 * Code generated for Simulink model 'SubFunCalc'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Sun Jan 08 14:32:32 2023
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

#include "SubFunCalc.h"
#include "SubFunCalc_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_SubFunCalc_T SubFunCalc_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_SubFunCalc_T SubFunCalc_Y;

/* Real-time model */
RT_MODEL_SubFunCalc_T SubFunCalc_M_;
RT_MODEL_SubFunCalc_T *const SubFunCalc_M = &SubFunCalc_M_;

/* Forward declaration for local functions */
static void SubFunCalc_Add(void);

/*
 * Function for Chart: '<Root>/Chart'
 * function Add
 */
static void SubFunCalc_Add(void)
{
  /* Inport: '<Root>/In1' incorporates:
   *  Inport: '<Root>/In2'
   */
  /* MATLAB Function 'Add': '<S1>:1' */
  /* Graphical Function 'Add': '<S1>:1' */
  /* '<S1>:3:1' Result=In1+In2; */
  SubFunCalc_Y.Out1 = SubFunCalc_U.In1 + SubFunCalc_U.In2;
}

/* Model step function */
void SubFunCalc_step(void)
{
  /* Chart: '<Root>/Chart' */
  /* Gateway: Chart */
  /* During: Chart */
  /* Entry Internal: Chart */
  /* Transition: '<S1>:7' */
  /* '<S1>:7:1' Add(); */
  SubFunCalc_Add();
}

/* Model initialize function */
void SubFunCalc_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(SubFunCalc_M, (NULL));

  /* external inputs */
  (void)memset((void *)&SubFunCalc_U, 0, sizeof(ExtU_SubFunCalc_T));

  /* external outputs */
  SubFunCalc_Y.Out1 = 0.0;
}

/* Model terminate function */
void SubFunCalc_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
