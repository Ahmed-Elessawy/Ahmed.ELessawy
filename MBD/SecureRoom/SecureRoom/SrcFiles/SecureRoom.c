/*
 * File: SecureRoom.c
 *
 * Code generated for Simulink model 'SecureRoom'.
 *
 * Model version                  : 1.24
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Mon Jan 02 00:41:06 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SecureRoom.h"
#include "SecureRoom_private.h"

/* Named constants for Chart: '<Root>/ModeOperationChart' */
#define SecureRoom_IN_Do_Nothing       ((uint8_T)1U)
#define SecureRoom_IN_Emergency        ((uint8_T)1U)
#define SecureRoom_IN_Invalid          ((uint8_T)2U)
#define SecureRoom_IN_NO_ACTIVE_CHILD  ((uint8_T)0U)
#define SecureRoom_IN_Room1            ((uint8_T)2U)
#define SecureRoom_IN_Room2            ((uint8_T)3U)
#define SecureRoom_IN_SystemLocked     ((uint8_T)4U)
#define SecureRoom_IN_Valid            ((uint8_T)3U)

/* Block signals (auto storage) */
B_SecureRoom_T SecureRoom_B;

/* Block states (auto storage) */
DW_SecureRoom_T SecureRoom_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_SecureRoom_T SecureRoom_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_SecureRoom_T SecureRoom_Y;

/* Real-time model */
RT_MODEL_SecureRoom_T SecureRoom_M_;
RT_MODEL_SecureRoom_T *const SecureRoom_M = &SecureRoom_M_;

/* Model step function */
void SecureRoom_step(void)
{
  /* Chart: '<Root>/SignalValidationChart' incorporates:
   *  Inport: '<Root>/SecureKey'
   */
  /* Gateway: SignalValidationChart */
  /* During: SignalValidationChart */
  /* Entry Internal: SignalValidationChart */
  /* Transition: '<S2>:57' */
  /*  Check on Key Validity  */
  /* Check if key is invalid for times less than 3 */
  if ((SecureRoom_U.SecureKey == 0.0) && (SecureRoom_DW.InvalidCounter < 3)) {
    /* Transition: '<S2>:58' */
    /* Transition: '<S2>:60' */
    /* Increment the error counter */
    SecureRoom_DW.InvalidCounter++;

    /* Transition: '<S2>:65' */
    /* Transition: '<S2>:64' */
  } else {
    /* Transition: '<S2>:59' */
    /* if the key is valid */
    if ((SecureRoom_U.SecureKey == 1.0) && (SecureRoom_DW.InvalidCounter < 3)) {
      /* Transition: '<S2>:61' */
      /* Transition: '<S2>:63' */
      /* reset the counter */
      SecureRoom_DW.InvalidCounter = 0U;

      /* Transition: '<S2>:64' */
    } else {
      /* Transition: '<S2>:62' */
      /* Do nothing if the
         Key is invalid for more than three times
         , system is locked */
    }
  }

  /* Transition: '<S2>:66' */
  /* Invalid Input for three times */
  if (SecureRoom_DW.InvalidCounter == 3) {
    /* Transition: '<S2>:32' */
    /* Transition: '<S2>:34' */
    /* Report Invalid Signal to the System */
    SecureRoom_B.SignalValidity = 0U;

    /* Transition: '<S2>:43' */
    /* Transition: '<S2>:42' */
    /* Transition: '<S2>:41' */
  } else {
    /* Transition: '<S2>:33' */
    /* Invalid signal for time more than one */
    if ((SecureRoom_DW.InvalidCounter > 0) && (SecureRoom_U.SecureKey == 0.0)) {
      /* Transition: '<S2>:35' */
      /* Transition: '<S2>:37' */
      /* Tempory Signal untill
         signal became stable */
      SecureRoom_B.SignalValidity = 2U;

      /* Transition: '<S2>:42' */
      /* Transition: '<S2>:41' */
    } else {
      /* Transition: '<S2>:36' */
      /* Valid Input */
      if (SecureRoom_DW.InvalidCounter == 0) {
        /* Transition: '<S2>:38' */
        /* Transition: '<S2>:40' */
        /* Report Valid Signal */
        SecureRoom_B.SignalValidity = 1U;

        /* Transition: '<S2>:41' */
      } else {
        /* Transition: '<S2>:39' */
        /* Do Nothing */
      }
    }
  }

  /* End of Chart: '<Root>/SignalValidationChart' */

  /* Chart: '<Root>/ModeOperationChart' incorporates:
   *  Inport: '<Root>/FireSystem'
   *  Inport: '<Root>/MotionSensor_1'
   *  Inport: '<Root>/MotionSensor_2'
   */
  /* Transition: '<S2>:44' */
  /* Gateway: ModeOperationChart */
  /* During: ModeOperationChart */
  if (SecureRoom_DW.is_active_c1_SecureRoom == 0U) {
    /* Entry: ModeOperationChart */
    SecureRoom_DW.is_active_c1_SecureRoom = 1U;

    /* Entry Internal: ModeOperationChart */
    /* Transition: '<S1>:5' */
    /* Transition: '<S1>:15' */
    switch (SecureRoom_B.SignalValidity) {
     case 0:
      /* Transition: '<S1>:11' */
      SecureRoom_DW.is_c1_SecureRoom = SecureRoom_IN_Invalid;

      /* Outport: '<Root>/EntranceGate' */
      /* Entry 'Invalid': '<S1>:3' */
      SecureRoom_Y.EntranceGate = 0.0;

      /* Outport: '<Root>/EmergencyGate' */
      SecureRoom_Y.EmergencyGate = 0.0;

      /* Outport: '<Root>/Led1' */
      SecureRoom_Y.Led1 = 0.0;

      /* Outport: '<Root>/Led2' */
      SecureRoom_Y.Led2 = 0.0;

      /* Outport: '<Root>/VacuumSystem' */
      SecureRoom_Y.VacuumSystem = 0.0;
      break;

     case 1:
      /* Transition: '<S1>:17' */
      /* Transition: '<S1>:18' */
      SecureRoom_DW.is_c1_SecureRoom = SecureRoom_IN_Valid;

      /* Entry Internal 'Valid': '<S1>:1' */
      /* Transition: '<S1>:20' */
      SecureRoom_DW.is_Valid = SecureRoom_IN_Room1;

      /* Outport: '<Root>/Led1' */
      /* Entry 'Room1': '<S1>:19' */
      SecureRoom_Y.Led1 = 1.0;

      /* Outport: '<Root>/Led2' */
      SecureRoom_Y.Led2 = 0.0;

      /* Outport: '<Root>/VacuumSystem' */
      SecureRoom_Y.VacuumSystem = 0.0;

      /* Outport: '<Root>/EntranceGate' */
      SecureRoom_Y.EntranceGate = 1.0;

      /* Outport: '<Root>/EmergencyGate' */
      SecureRoom_Y.EmergencyGate = 1.0;
      break;

     default:
      /* Transition: '<S1>:61' */
      /* Transition: '<S1>:62' */
      SecureRoom_DW.is_c1_SecureRoom = SecureRoom_IN_Do_Nothing;
      break;
    }
  } else {
    switch (SecureRoom_DW.is_c1_SecureRoom) {
     case SecureRoom_IN_Do_Nothing:
      /* During 'Do_Nothing': '<S1>:59' */
      break;

     case SecureRoom_IN_Invalid:
      /* During 'Invalid': '<S1>:3' */
      break;

     default:
      /* During 'Valid': '<S1>:1' */
      switch (SecureRoom_DW.is_Valid) {
       case SecureRoom_IN_Emergency:
        /* During 'Emergency': '<S1>:22' */
        if (SecureRoom_DW.EmergencyCounter == 5) {
          /* Transition: '<S1>:41' */
          SecureRoom_DW.is_Valid = SecureRoom_IN_SystemLocked;

          /* Outport: '<Root>/EntranceGate' */
          /* Entry 'SystemLocked': '<S1>:40' */
          SecureRoom_Y.EntranceGate = 0.0;

          /* Outport: '<Root>/EmergencyGate' */
          SecureRoom_Y.EmergencyGate = 0.0;
        } else {
          SecureRoom_DW.EmergencyCounter++;
        }
        break;

       case SecureRoom_IN_Room1:
        /* During 'Room1': '<S1>:19' */
        if ((SecureRoom_U.MotionSensor_1 == 0.0) && (SecureRoom_U.MotionSensor_2
             == 1.0)) {
          /* Transition: '<S1>:25' */
          SecureRoom_DW.is_Valid = SecureRoom_IN_Room2;

          /* Outport: '<Root>/Led1' */
          /* Entry 'Room2': '<S1>:21' */
          SecureRoom_Y.Led1 = 0.0;

          /* Outport: '<Root>/Led2' */
          SecureRoom_Y.Led2 = 1.0;

          /* Outport: '<Root>/VacuumSystem' */
          SecureRoom_Y.VacuumSystem = 0.0;

          /* Outport: '<Root>/EntranceGate' */
          SecureRoom_Y.EntranceGate = 1.0;

          /* Outport: '<Root>/EmergencyGate' */
          SecureRoom_Y.EmergencyGate = 1.0;
        } else {
          /* Transition: '<S1>:30' */
          if (SecureRoom_U.FireSystem == 1.0) {
            /* Transition: '<S1>:31' */
            SecureRoom_DW.is_Valid = SecureRoom_IN_Emergency;

            /* Outport: '<Root>/Led1' */
            /* Entry 'Emergency': '<S1>:22' */
            SecureRoom_Y.Led1 = 1.0;

            /* Outport: '<Root>/Led2' */
            SecureRoom_Y.Led2 = 1.0;

            /* Outport: '<Root>/VacuumSystem' */
            SecureRoom_Y.VacuumSystem = 1.0;
          }
        }
        break;

       case SecureRoom_IN_Room2:
        /* During 'Room2': '<S1>:21' */
        if ((SecureRoom_U.MotionSensor_1 == 1.0) && (SecureRoom_U.MotionSensor_2
             == 0.0)) {
          /* Transition: '<S1>:26' */
          SecureRoom_DW.is_Valid = SecureRoom_IN_Room1;

          /* Outport: '<Root>/Led1' */
          /* Entry 'Room1': '<S1>:19' */
          SecureRoom_Y.Led1 = 1.0;

          /* Outport: '<Root>/Led2' */
          SecureRoom_Y.Led2 = 0.0;

          /* Outport: '<Root>/VacuumSystem' */
          SecureRoom_Y.VacuumSystem = 0.0;

          /* Outport: '<Root>/EntranceGate' */
          SecureRoom_Y.EntranceGate = 1.0;

          /* Outport: '<Root>/EmergencyGate' */
          SecureRoom_Y.EmergencyGate = 1.0;
        } else {
          /* Transition: '<S1>:34' */
          if (SecureRoom_U.FireSystem == 1.0) {
            /* Transition: '<S1>:32' */
            SecureRoom_DW.is_Valid = SecureRoom_IN_Emergency;

            /* Outport: '<Root>/Led1' */
            /* Entry 'Emergency': '<S1>:22' */
            SecureRoom_Y.Led1 = 1.0;

            /* Outport: '<Root>/Led2' */
            SecureRoom_Y.Led2 = 1.0;

            /* Outport: '<Root>/VacuumSystem' */
            SecureRoom_Y.VacuumSystem = 1.0;
          }
        }
        break;

       default:
        /* During 'SystemLocked': '<S1>:40' */
        break;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/ModeOperationChart' */
}

/* Model initialize function */
void SecureRoom_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(SecureRoom_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &SecureRoom_B), 0,
                sizeof(B_SecureRoom_T));

  /* states (dwork) */
  (void) memset((void *)&SecureRoom_DW, 0,
                sizeof(DW_SecureRoom_T));

  /* external inputs */
  (void) memset((void *)&SecureRoom_U, 0,
                sizeof(ExtU_SecureRoom_T));

  /* external outputs */
  (void) memset((void *)&SecureRoom_Y, 0,
                sizeof(ExtY_SecureRoom_T));

  /* SystemInitialize for Chart: '<Root>/SignalValidationChart' */
  SecureRoom_DW.InvalidCounter = 0U;
  SecureRoom_B.SignalValidity = 0U;

  /* SystemInitialize for Chart: '<Root>/ModeOperationChart' */
  SecureRoom_DW.is_Valid = SecureRoom_IN_NO_ACTIVE_CHILD;
  SecureRoom_DW.is_active_c1_SecureRoom = 0U;
  SecureRoom_DW.is_c1_SecureRoom = SecureRoom_IN_NO_ACTIVE_CHILD;
  SecureRoom_DW.EmergencyCounter = 0U;

  /* SystemInitialize for Outport: '<Root>/EntranceGate' incorporates:
   *  SystemInitialize for Chart: '<Root>/ModeOperationChart'
   */
  SecureRoom_Y.EntranceGate = 0.0;

  /* SystemInitialize for Outport: '<Root>/EmergencyGate' incorporates:
   *  SystemInitialize for Chart: '<Root>/ModeOperationChart'
   */
  SecureRoom_Y.EmergencyGate = 0.0;

  /* SystemInitialize for Outport: '<Root>/Led2' incorporates:
   *  SystemInitialize for Chart: '<Root>/ModeOperationChart'
   */
  SecureRoom_Y.Led2 = 0.0;

  /* SystemInitialize for Outport: '<Root>/Led1' incorporates:
   *  SystemInitialize for Chart: '<Root>/ModeOperationChart'
   */
  SecureRoom_Y.Led1 = 0.0;

  /* SystemInitialize for Outport: '<Root>/VacuumSystem' incorporates:
   *  SystemInitialize for Chart: '<Root>/ModeOperationChart'
   */
  SecureRoom_Y.VacuumSystem = 0.0;
}

/* Model terminate function */
void SecureRoom_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
