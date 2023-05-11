/*
 * File: EvenOdd.c
 *
 * Code generated for Simulink model 'EvenOdd'.
 *
 * Model version                  : 1.39
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Jan 09 12:29:30 2023
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

#include "EvenOdd.h"
#include "EvenOdd_private.h"

/* Block states (auto storage) */
DW_EvenOdd_T EvenOdd_DW;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_EvenOdd_T EvenOdd_Y;

/* Real-time model */
RT_MODEL_EvenOdd_T EvenOdd_M_;
RT_MODEL_EvenOdd_T *const EvenOdd_M = &EvenOdd_M_;

/* Forward declaration for local functions */
static void EvenOdd_EvenOdd(const uint8_T *DataTypeConversion);

/* Function for Chart: '<Root>/Chart' */
static void EvenOdd_EvenOdd(const uint8_T *DataTypeConversion)
{
  /* Graphical Function 'EvenOdd': '<S1>:1' */
  /* Transition: '<S1>:4' */
  if ((*DataTypeConversion & 0x01) != 0) {
    /* Transition: '<S1>:5' */
    /* Transition: '<S1>:7' */
    EvenOdd_Y.Out1 = 1.0;

    /* Transition: '<S1>:8' */
  } else {
    /* Transition: '<S1>:6' */
    EvenOdd_Y.Out1 = 2.0;
  }

  /* Transition: '<S1>:9' */
}

/* Model step function */
void EvenOdd_step(void)
{
  uint8_T DataTypeConversion;
  real_T tmp;

  /* DataTypeConversion: '<Root>/Data Type Conversion' incorporates:
   *  Delay: '<Root>/Delay'
   */
  tmp = floor(EvenOdd_DW.Delay_DSTATE);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  DataTypeConversion = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)
    -tmp : (int32_T)(uint8_T)tmp);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion' */

  /* Chart: '<Root>/Chart' */
  /* Gateway: Chart */
  /* During: Chart */
  /* Entry Internal: Chart */
  /* Transition: '<S1>:15' */
  EvenOdd_EvenOdd(&DataTypeConversion);

  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<S2>/FixPt Constant'
   *  Delay: '<Root>/Delay'
   *  RelationalOperator: '<Root>/Relational Operator'
   *  Sum: '<S2>/FixPt Sum1'
   */
  if (EvenOdd_DW.Delay_DSTATE + 1.0 <= 10.0) {
    /* Update for Delay: '<Root>/Delay' */
    EvenOdd_DW.Delay_DSTATE++;
  } else {
    /* Update for Delay: '<Root>/Delay' incorporates:
     *  Constant: '<Root>/Constant1'
     */
    EvenOdd_DW.Delay_DSTATE = 0.0;
  }

  /* End of Switch: '<Root>/Switch' */
}

/* Model initialize function */
void EvenOdd_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(EvenOdd_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&EvenOdd_DW, 0,
                sizeof(DW_EvenOdd_T));

  /* external outputs */
  EvenOdd_Y.Out1 = 0.0;

  /* SystemInitialize for Outport: '<Root>/Out1' incorporates:
   *  SystemInitialize for Chart: '<Root>/Chart'
   */
  EvenOdd_Y.Out1 = 0.0;
}

/* Model terminate function */
void EvenOdd_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
