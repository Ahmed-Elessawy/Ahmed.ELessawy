/*
 * File: SecureRoom.h
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

#ifndef RTW_HEADER_SecureRoom_h_
#define RTW_HEADER_SecureRoom_h_
#include <stddef.h>
#include <string.h>
#ifndef SecureRoom_COMMON_INCLUDES_
# define SecureRoom_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* SecureRoom_COMMON_INCLUDES_ */

#include "SecureRoom_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (auto storage) */
typedef struct {
  uint8_T SignalValidity;              /* '<Root>/SignalValidationChart' */
} B_SecureRoom_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  uint8_T InvalidCounter;              /* '<Root>/SignalValidationChart' */
  uint8_T is_active_c1_SecureRoom;     /* '<Root>/ModeOperationChart' */
  uint8_T is_c1_SecureRoom;            /* '<Root>/ModeOperationChart' */
  uint8_T is_Valid;                    /* '<Root>/ModeOperationChart' */
  uint8_T EmergencyCounter;            /* '<Root>/ModeOperationChart' */
} DW_SecureRoom_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T SecureKey;                    /* '<Root>/SecureKey' */
  real_T MotionSensor_1;               /* '<Root>/MotionSensor_1' */
  real_T MotionSensor_2;               /* '<Root>/MotionSensor_2' */
  real_T FireSystem;                   /* '<Root>/FireSystem' */
} ExtU_SecureRoom_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T EntranceGate;                 /* '<Root>/EntranceGate' */
  real_T EmergencyGate;                /* '<Root>/EmergencyGate' */
  real_T Led2;                         /* '<Root>/Led2' */
  real_T Led1;                         /* '<Root>/Led1' */
  real_T VacuumSystem;                 /* '<Root>/VacuumSystem' */
} ExtY_SecureRoom_T;

/* Real-time Model Data Structure */
struct tag_RTM_SecureRoom_T {
  const char_T * volatile errorStatus;
};

/* Block signals (auto storage) */
extern B_SecureRoom_T SecureRoom_B;

/* Block states (auto storage) */
extern DW_SecureRoom_T SecureRoom_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_SecureRoom_T SecureRoom_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_SecureRoom_T SecureRoom_Y;

/* Model entry point functions */
extern void SecureRoom_initialize(void);
extern void SecureRoom_step(void);
extern void SecureRoom_terminate(void);

/* Real-time Model object */
extern RT_MODEL_SecureRoom_T *const SecureRoom_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'SecureRoom'
 * '<S1>'   : 'SecureRoom/ModeOperationChart'
 * '<S2>'   : 'SecureRoom/SignalValidationChart'
 */
#endif                                 /* RTW_HEADER_SecureRoom_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
