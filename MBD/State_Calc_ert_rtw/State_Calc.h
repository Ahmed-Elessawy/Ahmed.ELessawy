/*
 * File: State_Calc.h
 *
 * Code generated for Simulink model 'State_Calc'.
 *
 * Model version                  : 1.46
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Sun Jan 08 15:12:07 2023
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

#ifndef RTW_HEADER_State_Calc_h_
#define RTW_HEADER_State_Calc_h_
#include <string.h>
#include <stddef.h>
#ifndef State_Calc_COMMON_INCLUDES_
# define State_Calc_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* State_Calc_COMMON_INCLUDES_ */

#include "State_Calc_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  uint8_T In1;                         /* '<Root>/In1' */
  uint8_T In2;                         /* '<Root>/In2' */
  uint8_T In3;                         /* '<Root>/In3' */
} ExtU_State_Calc_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  uint8_T Out1;                        /* '<Root>/Out1' */
} ExtY_State_Calc_T;

/* Real-time Model Data Structure */
struct tag_RTM_State_Calc_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_State_Calc_T State_Calc_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_State_Calc_T State_Calc_Y;

/* Model entry point functions */
extern void State_Calc_initialize(void);
extern void State_Calc_step(void);
extern void State_Calc_terminate(void);

/* Real-time Model object */
extern RT_MODEL_State_Calc_T *const State_Calc_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
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
 * '<Root>' : 'State_Calc'
 * '<S1>'   : 'State_Calc/Chart'
 */
#endif                                 /* RTW_HEADER_State_Calc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
