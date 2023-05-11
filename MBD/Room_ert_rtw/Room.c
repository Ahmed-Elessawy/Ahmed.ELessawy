/*
 * File: Room.c
 *
 * Code generated for Simulink model 'Room'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Sun Jan 01 21:05:45 2023
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

#include "Room.h"
#include "Room_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define Room_IN_Emg                    ((uint8_T)1U)
#define Room_IN_Inavalid               ((uint8_T)2U)
#define Room_IN_NO_ACTIVE_CHILD        ((uint8_T)0U)
#define Room_IN_R1                     ((uint8_T)3U)
#define Room_IN_R2                     ((uint8_T)4U)
#define Room_IN_Vac                    ((uint8_T)5U)
#define Room_IN_Valid                  ((uint8_T)6U)

/* Block states (auto storage) */
DW_Room_T Room_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_Room_T Room_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Room_T Room_Y;

/* Real-time model */
RT_MODEL_Room_T Room_M_;
RT_MODEL_Room_T *const Room_M = &Room_M_;

/* Model step function */
void Room_step(void)
{
  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Inport: '<Root>/In3'
   *  Inport: '<Root>/In4'
   */
  if (Room_DW.temporalCounter_i1 < 31U) {
    Room_DW.temporalCounter_i1++;
  }

  /* Gateway: Chart */
  /* During: Chart */
  if (Room_DW.is_active_c3_Room == 0U) {
    /* Entry: Chart */
    Room_DW.is_active_c3_Room = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:5' */
    Room_DW.is_c3_Room = Room_IN_Valid;

    /* Entry 'Valid': '<S1>:1' */
  } else {
    switch (Room_DW.is_c3_Room) {
     case Room_IN_Emg:
      /* During 'Emg': '<S1>:8' */
      /* '<S1>:14:1' sf_internal_predicateOutput = ... */
      /* '<S1>:14:1' after(5,sec); */
      if (Room_DW.temporalCounter_i1 >= 25U) {
        /* Transition: '<S1>:14' */
        Room_DW.is_c3_Room = Room_IN_Vac;

        /* Outport: '<Root>/Out4' */
        /* Entry 'Vac': '<S1>:13' */
        /* '<S1>:13:1' Vacum=1; */
        Room_Y.Out4 = 1.0;

        /* Outport: '<Root>/Out3' */
        /* '<S1>:13:1' GateLock=1; */
        Room_Y.Out3 = 1.0;
      }
      break;

     case Room_IN_Inavalid:
      /* During 'Inavalid': '<S1>:2' */
      /* '<S1>:15:1' sf_internal_predicateOutput = ... */
      /* '<S1>:15:1' Key==1; */
      if (Room_U.In2 == 1.0) {
        /* Transition: '<S1>:15' */
        Room_DW.is_c3_Room = Room_IN_Valid;

        /* Entry 'Valid': '<S1>:1' */
      }
      break;

     case Room_IN_R1:
      /* During 'R1': '<S1>:9' */
      /* '<S1>:16:1' sf_internal_predicateOutput = ... */
      /* '<S1>:16:1' M1==0; */
      if (Room_U.In3 == 0.0) {
        /* Transition: '<S1>:16' */
        Room_DW.is_c3_Room = Room_IN_Valid;

        /* Entry 'Valid': '<S1>:1' */
      } else {
        /* '<S1>:19:1' sf_internal_predicateOutput = ... */
        /* '<S1>:19:1' M1==0; */
        if (Room_U.In3 == 0.0) {
          /* Transition: '<S1>:19' */
          Room_DW.is_c3_Room = Room_IN_R2;

          /* Outport: '<Root>/Out1' */
          /* Entry 'R2': '<S1>:7' */
          /* '<S1>:7:1' L2=1; */
          Room_Y.Out1 = 1.0;
        }
      }
      break;

     case Room_IN_R2:
      /* During 'R2': '<S1>:7' */
      /* '<S1>:17:1' sf_internal_predicateOutput = ... */
      /* '<S1>:17:1' M2==0; */
      if (Room_U.In4 == 0.0) {
        /* Transition: '<S1>:17' */
        Room_DW.is_c3_Room = Room_IN_Valid;

        /* Entry 'Valid': '<S1>:1' */
      } else {
        /* '<S1>:20:1' sf_internal_predicateOutput = ... */
        /* '<S1>:20:1' M2==0; */
        if (Room_U.In4 == 0.0) {
          /* Transition: '<S1>:20' */
          Room_DW.is_c3_Room = Room_IN_R1;

          /* Outport: '<Root>/Out2' */
          /* Entry 'R1': '<S1>:9' */
          /* '<S1>:9:1' L1=1; */
          Room_Y.Out2 = 1.0;
        }
      }
      break;

     case Room_IN_Vac:
      /* During 'Vac': '<S1>:13' */
      /* Transition: '<S1>:18' */
      Room_DW.is_c3_Room = Room_IN_Valid;

      /* Entry 'Valid': '<S1>:1' */
      break;

     default:
      /* During 'Valid': '<S1>:1' */
      /* '<S1>:6:1' sf_internal_predicateOutput = ... */
      /* '<S1>:6:1' Key==0; */
      if (Room_U.In2 == 0.0) {
        /* Transition: '<S1>:6' */
        Room_DW.is_c3_Room = Room_IN_Inavalid;
      } else {
        /* '<S1>:10:1' sf_internal_predicateOutput = ... */
        /* '<S1>:10:1' M1==1; */
        if (Room_U.In3 == 1.0) {
          /* Transition: '<S1>:10' */
          Room_DW.is_c3_Room = Room_IN_R1;

          /* Outport: '<Root>/Out2' */
          /* Entry 'R1': '<S1>:9' */
          /* '<S1>:9:1' L1=1; */
          Room_Y.Out2 = 1.0;
        } else {
          /* '<S1>:11:1' sf_internal_predicateOutput = ... */
          /* '<S1>:11:1' M2==1; */
          if (Room_U.In4 == 1.0) {
            /* Transition: '<S1>:11' */
            Room_DW.is_c3_Room = Room_IN_R2;

            /* Outport: '<Root>/Out1' */
            /* Entry 'R2': '<S1>:7' */
            /* '<S1>:7:1' L2=1; */
            Room_Y.Out1 = 1.0;
          } else {
            /* '<S1>:12:1' sf_internal_predicateOutput = ... */
            /* '<S1>:12:1' Emg==1; */
            if (Room_U.In1 == 1.0) {
              /* Transition: '<S1>:12' */
              Room_DW.is_c3_Room = Room_IN_Emg;
              Room_DW.temporalCounter_i1 = 0U;

              /* Outport: '<Root>/Out2' */
              /* Entry 'Emg': '<S1>:8' */
              /* '<S1>:8:1' L1=1; */
              Room_Y.Out2 = 1.0;

              /* Outport: '<Root>/Out1' */
              /* '<S1>:8:1' L2=1; */
              Room_Y.Out1 = 1.0;
            }
          }
        }
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void Room_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Room_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Room_DW, 0,
                sizeof(DW_Room_T));

  /* external inputs */
  (void)memset((void *)&Room_U, 0, sizeof(ExtU_Room_T));

  /* external outputs */
  (void) memset((void *)&Room_Y, 0,
                sizeof(ExtY_Room_T));

  /* SystemInitialize for Chart: '<Root>/Chart' */
  Room_DW.temporalCounter_i1 = 0U;
  Room_DW.is_active_c3_Room = 0U;
  Room_DW.is_c3_Room = Room_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void Room_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
