/*
 * File: Increment_Decrement.h
 *
 * Code generated for Simulink model 'Increment_Decrement'.
 *
 * Model version                  : 1.17
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Dec 29 22:28:43 2022
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

#ifndef RTW_HEADER_Increment_Decrement_h_
#define RTW_HEADER_Increment_Decrement_h_
#include <string.h>
#include <stddef.h>
#ifndef Increment_Decrement_COMMON_INCLUDES_
# define Increment_Decrement_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Increment_Decrement_COMMON_INCLUDES_ */

#include "Increment_Decrement_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T Delay_DSTATE;                 /* '<Root>/Delay' */
  real_T Delay1_DSTATE;                /* '<Root>/Delay1' */
  uint8_T icLoad;                      /* '<Root>/Delay' */
  uint8_T icLoad_o;                    /* '<Root>/Delay1' */
} DW_Increment_Decrement_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
  real_T In2;                          /* '<Root>/In2' */
} ExtU_Increment_Decrement_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
} ExtY_Increment_Decrement_T;

/* Real-time Model Data Structure */
struct tag_RTM_Increment_Decrement_T {
  const char_T * volatile errorStatus;
};

/* Block states (auto storage) */
extern DW_Increment_Decrement_T Increment_Decrement_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_Increment_Decrement_T Increment_Decrement_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Increment_Decrement_T Increment_Decrement_Y;

/* Model entry point functions */
extern void Increment_Decrement_initialize(void);
extern void Increment_Decrement_step(void);
extern void Increment_Decrement_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Increment_Decrement_T *const Increment_Decrement_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S1>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<Root>/Display1' : Unused code path elimination
 * Block '<S2>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S2>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S1>/FixPt Gateway In' : Eliminate redundant data type conversion
 * Block '<S2>/FixPt Gateway In' : Eliminate redundant data type conversion
 */

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
 * '<Root>' : 'Increment_Decrement'
 * '<S1>'   : 'Increment_Decrement/Decrement Stored Integer'
 * '<S2>'   : 'Increment_Decrement/Increment Stored Integer'
 */
#endif                                 /* RTW_HEADER_Increment_Decrement_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
