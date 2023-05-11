/*
 * File: SubFunCalc.h
 *
 * Code generated for Simulink model 'SubFunCalc'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Sun Jan 08 14:32:32 2023
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

#ifndef RTW_HEADER_SubFunCalc_h_
#define RTW_HEADER_SubFunCalc_h_
#include <string.h>
#include <stddef.h>
#ifndef SubFunCalc_COMMON_INCLUDES_
# define SubFunCalc_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* SubFunCalc_COMMON_INCLUDES_ */

#include "SubFunCalc_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
  real_T In2;                          /* '<Root>/In2' */
} ExtU_SubFunCalc_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_SubFunCalc_T;

/* Real-time Model Data Structure */
struct tag_RTM_SubFunCalc_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_SubFunCalc_T SubFunCalc_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_SubFunCalc_T SubFunCalc_Y;

/* Model entry point functions */
extern void SubFunCalc_initialize(void);
extern void SubFunCalc_step(void);
extern void SubFunCalc_terminate(void);

/* Real-time Model object */
extern RT_MODEL_SubFunCalc_T *const SubFunCalc_M;

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
 * '<Root>' : 'SubFunCalc'
 * '<S1>'   : 'SubFunCalc/Chart'
 */
#endif                                 /* RTW_HEADER_SubFunCalc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
