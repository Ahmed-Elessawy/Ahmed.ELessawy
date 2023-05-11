/*
 * File: whileee.h
 *
 * Code generated for Simulink model 'whileee'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Dec 27 13:25:04 2022
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

#ifndef RTW_HEADER_whileee_h_
#define RTW_HEADER_whileee_h_
#include <stddef.h>
#ifndef whileee_COMMON_INCLUDES_
# define whileee_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* whileee_COMMON_INCLUDES_ */

#include "whileee_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Invariant block signals (auto storage) */
typedef struct {
  const boolean_T RelationalOperator;  /* '<S1>/Relational Operator' */
} ConstB_whileee_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  boolean_T In1;                       /* '<Root>/In1' */
} ExtU_whileee_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_whileee_T;

/* Real-time Model Data Structure */
struct tag_RTM_whileee_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_whileee_T whileee_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_whileee_T whileee_Y;
extern const ConstB_whileee_T whileee_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void whileee_initialize(void);
extern void whileee_step(void);
extern void whileee_terminate(void);

/* Real-time Model object */
extern RT_MODEL_whileee_T *const whileee_M;

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
 * '<Root>' : 'whileee'
 * '<S1>'   : 'whileee/While Iterator Subsystem'
 * '<S2>'   : 'whileee/While Iterator Subsystem/Increment Stored Integer'
 */
#endif                                 /* RTW_HEADER_whileee_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
