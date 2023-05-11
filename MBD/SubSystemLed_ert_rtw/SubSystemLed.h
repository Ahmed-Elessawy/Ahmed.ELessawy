/*
 * File: SubSystemLed.h
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

#ifndef RTW_HEADER_SubSystemLed_h_
#define RTW_HEADER_SubSystemLed_h_
#include <string.h>
#ifndef SubSystemLed_COMMON_INCLUDES_
# define SubSystemLed_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* SubSystemLed_COMMON_INCLUDES_ */

#include "SubSystemLed_types.h"

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
} ExtU_SubSystemLed_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_SubSystemLed_T;

/* Real-time Model Data Structure */
struct tag_RTM_SubSystemLed_T {
  const char_T * volatile errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint16_T TID[2];
    } TaskCounters;
  } Timing;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_SubSystemLed_T SubSystemLed_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_SubSystemLed_T SubSystemLed_Y;

/* Model entry point functions */
extern void SubSystemLed_initialize(void);
extern void SubSystemLed_step(void);
extern void SubSystemLed_terminate(void);

/* Real-time Model object */
extern RT_MODEL_SubSystemLed_T *const SubSystemLed_M;

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
 * '<Root>' : 'SubSystemLed'
 * '<S1>'   : 'SubSystemLed/Chart'
 * '<S2>'   : 'SubSystemLed/Triggered Subsystem'
 */
#endif                                 /* RTW_HEADER_SubSystemLed_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
