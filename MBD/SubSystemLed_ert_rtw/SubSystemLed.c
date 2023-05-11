/*
 * File: SubSystemLed.c
 *
 * Code generated for Simulink model 'SubSystemLed'.
 *
 * Model version                  : 1.63
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Dec 29 21:58:02 2022
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

#include "SubSystemLed.h"
#include "SubSystemLed_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_SubSystemLed_T SubSystemLed_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_SubSystemLed_T SubSystemLed_Y;

/* Real-time model */
RT_MODEL_SubSystemLed_T SubSystemLed_M_;
RT_MODEL_SubSystemLed_T *const SubSystemLed_M = &SubSystemLed_M_;
static void rate_scheduler(void);

/*
 *   This function updates active task flag for each subrate.
 * The function is called at model base rate, hence the
 * generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (SubSystemLed_M->Timing.TaskCounters.TID[1])++;
  if ((SubSystemLed_M->Timing.TaskCounters.TID[1]) > 49999) {/* Sample time: [5.0s, 0.0s] */
    SubSystemLed_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model step function */
void SubSystemLed_step(void)
{
  if (SubSystemLed_M->Timing.TaskCounters.TID[1] == 0) {
    /* S-Function (fcncallgen): '<Root>/Function-Call Generator' incorporates:
     *  SubSystem: '<Root>/Triggered Subsystem'
     */
    /* Chart: '<Root>/Chart' incorporates:
     *  Inport: '<Root>/In1'
     */
    /* Gateway: Chart */
    /* During: Chart */
    /* Entry Internal: Chart */
    /* Transition: '<S1>:1' */
    /* '<S1>:2:1' sf_internal_predicateOutput = ... */
    /* '<S1>:2:1' I>0; */
    if (SubSystemLed_U.In1 > 0.0) {
      /* Outport: '<Root>/Out1' */
      /* Transition: '<S1>:2' */
      /* Transition: '<S1>:4' */
      /* '<S1>:4:1' Led=1; */
      SubSystemLed_Y.Out1 = 1.0;

      /* Transition: '<S1>:5' */
    } else {
      /* Outport: '<Root>/Out1' */
      /* Transition: '<S1>:3' */
      /* '<S1>:3:1' Led=0; */
      SubSystemLed_Y.Out1 = 0.0;
    }

    /* End of Chart: '<Root>/Chart' */
    /* End of Outputs for S-Function (fcncallgen): '<Root>/Function-Call Generator' */
    /* Transition: '<S1>:6' */
  }

  rate_scheduler();
}

/* Model initialize function */
void SubSystemLed_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)SubSystemLed_M, 0,
                sizeof(RT_MODEL_SubSystemLed_T));

  /* external inputs */
  SubSystemLed_U.In1 = 0.0;

  /* external outputs */
  SubSystemLed_Y.Out1 = 0.0;
}

/* Model terminate function */
void SubSystemLed_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
