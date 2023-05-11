/*
 * File: Grading.c
 *
 * Code generated for Simulink model 'Grading'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Dec 27 12:44:52 2022
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

#include "Grading.h"
#include "Grading_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_Grading_T Grading_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Grading_T Grading_Y;

/* Real-time model */
RT_MODEL_Grading_T Grading_M_;
RT_MODEL_Grading_T *const Grading_M = &Grading_M_;

/*
 * Output and update for action system:
 *    '<Root>/If Action Subsystem'
 *    '<Root>/If Action Subsystem4'
 */
void Grading_IfActionSubsystem(real_T *rty_Out1)
{
  /* SignalConversion: '<S1>/OutportBufferForOut1' incorporates:
   *  Constant: '<S1>/Constant'
   */
  *rty_Out1 = 1.0;
}

/* Model step function */
void Grading_step(void)
{
  real_T rtb_Merge;

  /* If: '<Root>/If' incorporates:
   *  Inport: '<Root>/In1'
   */
  if (Grading_U.In1 >= 85.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    Grading_IfActionSubsystem(&rtb_Merge);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  } else if (Grading_U.In1 >= 75.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* SignalConversion: '<S2>/OutportBufferForOut1' incorporates:
     *  Constant: '<S2>/Constant'
     */
    rtb_Merge = 2.0;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
  } else if (Grading_U.In1 >= 65.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* SignalConversion: '<S3>/OutportBufferForOut1' incorporates:
     *  Constant: '<S3>/Constant'
     */
    rtb_Merge = 3.0;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem2' */
  } else if (Grading_U.In1 >= 50.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* SignalConversion: '<S4>/OutportBufferForOut1' incorporates:
     *  Constant: '<S4>/Constant'
     */
    rtb_Merge = 4.0;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem3' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    Grading_IfActionSubsystem(&rtb_Merge);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem4' */
  }

  /* End of If: '<Root>/If' */

  /* Outport: '<Root>/Out1' */
  Grading_Y.Out1 = rtb_Merge;
}

/* Model initialize function */
void Grading_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Grading_M, (NULL));

  /* external inputs */
  Grading_U.In1 = 0.0;

  /* external outputs */
  Grading_Y.Out1 = 0.0;
}

/* Model terminate function */
void Grading_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
