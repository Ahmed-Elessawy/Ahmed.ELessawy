/*
 * File: Struct_Bus.c
 *
 * Code generated for Simulink model 'Struct_Bus'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Sun Jan 01 18:22:38 2023
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

#include "Struct_Bus.h"
#include "Struct_Bus_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_Struct_Bus_T Struct_Bus_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Struct_Bus_T Struct_Bus_Y;

/* Real-time model */
RT_MODEL_Struct_Bus_T Struct_Bus_M_;
RT_MODEL_Struct_Bus_T *const Struct_Bus_M = &Struct_Bus_M_;

/* Model step function */
void Struct_Bus_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   */
  Struct_Bus_Y.Out1 = Struct_Bus_U.In1.Angle;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   */
  Struct_Bus_Y.Out2 = Struct_Bus_U.In1.volt;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   */
  Struct_Bus_Y.Out3 = Struct_Bus_U.In1.Temp;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In2'
   *  Inport: '<Root>/In3'
   *  Inport: '<Root>/In4'
   */
  Struct_Bus_Y.Out4.Angle = Struct_Bus_U.In2;
  Struct_Bus_Y.Out4.volt = Struct_Bus_U.In3;
  Struct_Bus_Y.Out4.Temp = Struct_Bus_U.In4;
}

/* Model initialize function */
void Struct_Bus_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Struct_Bus_M, (NULL));

  /* external inputs */
  (void)memset((void *)&Struct_Bus_U, 0, sizeof(ExtU_Struct_Bus_T));

  /* external outputs */
  (void) memset((void *)&Struct_Bus_Y, 0,
                sizeof(ExtY_Struct_Bus_T));
}

/* Model terminate function */
void Struct_Bus_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
