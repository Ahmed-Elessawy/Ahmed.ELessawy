/*
 * File: EvenOdd.h
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

#ifndef RTW_HEADER_EvenOdd_h_
#define RTW_HEADER_EvenOdd_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef EvenOdd_COMMON_INCLUDES_
# define EvenOdd_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* EvenOdd_COMMON_INCLUDES_ */

#include "EvenOdd_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

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
} DW_EvenOdd_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_EvenOdd_T;

/* Real-time Model Data Structure */
struct tag_RTM_EvenOdd_T {
  const char_T * volatile errorStatus;
};

/* Block states (auto storage) */
extern DW_EvenOdd_T EvenOdd_DW;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_EvenOdd_T EvenOdd_Y;

/* Model entry point functions */
extern void EvenOdd_initialize(void);
extern void EvenOdd_step(void);
extern void EvenOdd_terminate(void);

/* Real-time Model object */
extern RT_MODEL_EvenOdd_T *const EvenOdd_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S2>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S2>/FixPt Data Type Propagation' : Unused code path elimination
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
 * '<Root>' : 'EvenOdd'
 * '<S1>'   : 'EvenOdd/Chart'
 * '<S2>'   : 'EvenOdd/Increment Stored Integer'
 */
#endif                                 /* RTW_HEADER_EvenOdd_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
