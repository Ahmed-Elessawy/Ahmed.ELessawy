/*
 * File: ledval.h
 *
 * Code generated for Simulink model 'ledval'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Sun Jan 08 13:19:14 2023
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

#ifndef RTW_HEADER_ledval_h_
#define RTW_HEADER_ledval_h_
#include <stddef.h>
#ifndef ledval_COMMON_INCLUDES_
# define ledval_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* ledval_COMMON_INCLUDES_ */

#include "ledval_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  switchmode In1;                      /* '<Root>/In1' */
} ExtU_ledval_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  led Out1;                            /* '<Root>/Out1' */
} ExtY_ledval_T;

/* Real-time Model Data Structure */
struct tag_RTM_ledval_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_ledval_T ledval_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_ledval_T ledval_Y;

/* Model entry point functions */
extern void ledval_initialize(void);
extern void ledval_step(void);
extern void ledval_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ledval_T *const ledval_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Data Type Conversion' : Unused code path elimination
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<Root>/Data Type Conversion1' : Eliminate redundant data type conversion
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
 * '<Root>' : 'ledval'
 * '<S1>'   : 'ledval/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_ledval_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
