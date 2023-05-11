/*
 * File: Grading.h
 *
 * Code generated for Simulink model 'Grading'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Dec 27 12:44:52 2022
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

#ifndef RTW_HEADER_Grading_h_
#define RTW_HEADER_Grading_h_
#include <stddef.h>
#ifndef Grading_COMMON_INCLUDES_
# define Grading_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Grading_COMMON_INCLUDES_ */

#include "Grading_types.h"

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
} ExtU_Grading_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_Grading_T;

/* Real-time Model Data Structure */
struct tag_RTM_Grading_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_Grading_T Grading_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Grading_T Grading_Y;

/* Model entry point functions */
extern void Grading_initialize(void);
extern void Grading_step(void);
extern void Grading_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Grading_T *const Grading_M;

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
 * '<Root>' : 'Grading'
 * '<S1>'   : 'Grading/If Action Subsystem'
 * '<S2>'   : 'Grading/If Action Subsystem1'
 * '<S3>'   : 'Grading/If Action Subsystem2'
 * '<S4>'   : 'Grading/If Action Subsystem3'
 * '<S5>'   : 'Grading/If Action Subsystem4'
 */
#endif                                 /* RTW_HEADER_Grading_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
