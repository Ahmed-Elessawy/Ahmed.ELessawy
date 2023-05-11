/*
 * File: Traffic.c
 *
 * Code generated for Simulink model 'Traffic'.
 *
 * Model version                  : 1.13
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Dec 28 16:32:30 2022
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

#include "Traffic.h"
#include "Traffic_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define Traffic_IN_Go                  ((uint8_T)1U)
#define Traffic_IN_NO_ACTIVE_CHILD     ((uint8_T)0U)
#define Traffic_IN_Prep                ((uint8_T)2U)
#define Traffic_IN_Stop                ((uint8_T)3U)

/* Block states (auto storage) */
DW_Traffic_T Traffic_DW;

/* Real-time model */
RT_MODEL_Traffic_T Traffic_M_;
RT_MODEL_Traffic_T *const Traffic_M = &Traffic_M_;

/* Model step function */
void Traffic_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (Traffic_DW.temporalCounter_i1 < 127U) {
    Traffic_DW.temporalCounter_i1++;
  }

  /* Gateway: Chart */
  /* During: Chart */
  if (Traffic_DW.is_active_c3_Traffic == 0U) {
    /* Entry: Chart */
    Traffic_DW.is_active_c3_Traffic = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:4' */
    /* '<S1>:4:1' red=0; */
    /* '<S1>:4:1' yell=0; */
    /* '<S1>:4:1' green=0; */
    Traffic_DW.is_c3_Traffic = Traffic_IN_Stop;
    Traffic_DW.temporalCounter_i1 = 0U;

    /* Entry 'Stop': '<S1>:1' */
    /* '<S1>:1:1' red=1; */
    /* '<S1>:1:1' yell=0; */
    /* '<S1>:1:1' green=0; */
  } else {
    switch (Traffic_DW.is_c3_Traffic) {
     case Traffic_IN_Go:
      /* During 'Go': '<S1>:3' */
      /* '<S1>:7:1' sf_internal_predicateOutput = ... */
      /* '<S1>:7:1' after(20,sec); */
      if (Traffic_DW.temporalCounter_i1 >= 100U) {
        /* Transition: '<S1>:7' */
        Traffic_DW.is_c3_Traffic = Traffic_IN_Stop;
        Traffic_DW.temporalCounter_i1 = 0U;

        /* Entry 'Stop': '<S1>:1' */
        /* '<S1>:1:1' red=1; */
        /* '<S1>:1:1' yell=0; */
        /* '<S1>:1:1' green=0; */
      }
      break;

     case Traffic_IN_Prep:
      /* During 'Prep': '<S1>:2' */
      /* '<S1>:6:1' sf_internal_predicateOutput = ... */
      /* '<S1>:6:1' after(20,sec); */
      if (Traffic_DW.temporalCounter_i1 >= 100U) {
        /* Transition: '<S1>:6' */
        Traffic_DW.is_c3_Traffic = Traffic_IN_Go;
        Traffic_DW.temporalCounter_i1 = 0U;

        /* Entry 'Go': '<S1>:3' */
        /* '<S1>:3:1' red=0; */
        /* '<S1>:3:1' yell=0; */
        /* '<S1>:3:1' green=1; */
      }
      break;

     default:
      /* During 'Stop': '<S1>:1' */
      /* '<S1>:5:1' sf_internal_predicateOutput = ... */
      /* '<S1>:5:1' after(20,sec); */
      if (Traffic_DW.temporalCounter_i1 >= 100U) {
        /* Transition: '<S1>:5' */
        Traffic_DW.is_c3_Traffic = Traffic_IN_Prep;
        Traffic_DW.temporalCounter_i1 = 0U;

        /* Entry 'Prep': '<S1>:2' */
        /* '<S1>:2:1' red=0; */
        /* '<S1>:2:1' yell=1; */
        /* '<S1>:2:1' green=0; */
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void Traffic_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Traffic_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Traffic_DW, 0,
                sizeof(DW_Traffic_T));

  /* SystemInitialize for Chart: '<Root>/Chart' */
  Traffic_DW.temporalCounter_i1 = 0U;
  Traffic_DW.is_active_c3_Traffic = 0U;
  Traffic_DW.is_c3_Traffic = Traffic_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void Traffic_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
