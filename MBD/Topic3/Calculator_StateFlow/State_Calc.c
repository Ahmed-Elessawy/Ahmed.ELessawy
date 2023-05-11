/*
 * File: State_Calc.c
 *
 * Code generated for Simulink model 'State_Calc'.
 *
 * Model version                  : 1.46
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Sun Jan 08 15:12:07 2023
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

#include "State_Calc.h"
#include "State_Calc_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_State_Calc_T State_Calc_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_State_Calc_T State_Calc_Y;

/* Real-time model */
RT_MODEL_State_Calc_T State_Calc_M_;
RT_MODEL_State_Calc_T *const State_Calc_M = &State_Calc_M_;

/* Forward declaration for local functions */
static void State_Calc_Calc(uint8_T a, uint8_T b, uint8_T Operation);

/*
 * Function for Chart: '<Root>/Chart'
 * function Calc(a, b, Operation)
 */
static void State_Calc_Calc(uint8_T a, uint8_T b, uint8_T Operation)
{
  uint8_T b_a;
  uint8_T bu;
  int32_T exitg1;

  /* MATLAB Function 'Calc': '<S1>:1' */
  /* Graphical Function 'Calc': '<S1>:1' */
  /* '<S1>:6:1' sf_internal_predicateOutput = ... */
  /* '<S1>:6:1' Operation == 1; */
  switch (Operation) {
   case 1:
    /* '<S1>:8:1' res=a+b; */
    State_Calc_Y.Out1 = (uint8_T)((uint32_T)a + b);
    break;

   case 2:
    /* '<S1>:11:1' sf_internal_predicateOutput = ... */
    /* '<S1>:11:1' Operation == 2; */
    /* '<S1>:13:1' res=a-b; */
    State_Calc_Y.Out1 = (uint8_T)((uint32_T)a - b);
    break;

   case 3:
    /* '<S1>:16:1' sf_internal_predicateOutput = ... */
    /* '<S1>:16:1' Operation == 3; */
    /* '<S1>:18:1' res=a*b; */
    State_Calc_Y.Out1 = (uint8_T)((uint32_T)a * b);
    break;

   case 4:
    /* '<S1>:21:1' sf_internal_predicateOutput = ... */
    /* '<S1>:21:1' Operation == 4; */
    /* '<S1>:23:1' res=a/b; */
    if (b == 0) {
      if (a == 0) {
        State_Calc_Y.Out1 = 0U;
      } else {
        State_Calc_Y.Out1 = MAX_uint8_T;
      }
    } else {
      State_Calc_Y.Out1 = (uint8_T)((uint32_T)a / b);
      b_a = (uint8_T)((uint32_T)a - (uint8_T)((uint32_T)State_Calc_Y.Out1 * b));
      if ((b_a > 0) && (b_a >= (int32_T)((uint32_T)b >> 1) + (b & 1))) {
        State_Calc_Y.Out1++;
      }
    }
    break;

   default:
    /* '<S1>:22:1' res=a^b; */
    b_a = a;
    State_Calc_Y.Out1 = 1U;
    bu = b;
    do {
      exitg1 = 0;
      if ((bu & 1) != 0) {
        State_Calc_Y.Out1 = (uint8_T)((uint32_T)b_a * State_Calc_Y.Out1);
      }

      bu = (uint8_T)((uint32_T)bu >> 1);
      if (bu == 0) {
        exitg1 = 1;
      } else {
        b_a = (uint8_T)((uint32_T)b_a * b_a);
      }
    } while (exitg1 == 0);
    break;
  }
}

/* Model step function */
void State_Calc_step(void)
{
  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Inport: '<Root>/In3'
   */
  /* Gateway: Chart */
  /* During: Chart */
  /* Entry Internal: Chart */
  /* Transition: '<S1>:55' */
  /* '<S1>:55:1' Calc(q,w,oper); */
  State_Calc_Calc(State_Calc_U.In2, State_Calc_U.In3, State_Calc_U.In1);
}

/* Model initialize function */
void State_Calc_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(State_Calc_M, (NULL));

  /* external inputs */
  (void)memset((void *)&State_Calc_U, 0, sizeof(ExtU_State_Calc_T));

  /* external outputs */
  State_Calc_Y.Out1 = 0U;
}

/* Model terminate function */
void State_Calc_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
