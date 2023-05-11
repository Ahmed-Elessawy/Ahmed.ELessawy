/*
 * File: Build.h
 *
 * Code generated for Simulink model 'Build'.
 *
 * Model version                  : 1.14
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Sun Jan 08 17:10:57 2023
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

#ifndef RTW_HEADER_Build_h_
#define RTW_HEADER_Build_h_
#include <stddef.h>
#ifndef Build_COMMON_INCLUDES_
# define Build_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Build_COMMON_INCLUDES_ */

#include "Build_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* user code (top of header file) */
#include"led.h"

/* Real-time Model Data Structure */
struct tag_RTM_Build_T {
  const char_T * volatile errorStatus;
};

/* Model entry point functions */
extern void Build_initialize(void);
extern void Build_step(void);
extern void Build_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Build_T *const Build_M;

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
 * '<Root>' : 'Build'
 * '<S1>'   : 'Build/Led '
 */
#endif                                 /* RTW_HEADER_Build_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
