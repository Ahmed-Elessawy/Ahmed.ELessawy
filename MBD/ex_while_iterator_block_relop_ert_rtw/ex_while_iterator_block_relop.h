/*
 * File: ex_while_iterator_block_relop.h
 *
 * Code generated for Simulink model 'ex_while_iterator_block_relop'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Dec 27 13:51:24 2022
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

#ifndef RTW_HEADER_ex_while_iterator_block_relop_h_
#define RTW_HEADER_ex_while_iterator_block_relop_h_
#include <stddef.h>
#ifndef ex_while_iterator_block_relop_COMMON_INCLUDES_
# define ex_while_iterator_block_relop_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* ex_while_iterator_block_relop_COMMON_INCLUDES_ */

#include "ex_while_iterator_block_relop_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Invariant block signals (auto storage) */
typedef struct {
  const boolean_T RelationalOperator;  /* '<Root>/Relational Operator' */
} ConstB_ex_while_iterator_bloc_T;

/* Real-time Model Data Structure */
struct tag_RTM_ex_while_iterator_blo_T {
  const char_T * volatile errorStatus;
};

extern const ConstB_ex_while_iterator_bloc_T ex_while_iterator_block__ConstB;/* constant block i/o */

/* Model entry point functions */
extern void ex_while_iterator_block_relop_initialize(void);
extern void ex_while_iterator_block_relop_step(void);
extern void ex_while_iterator_block_relop_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ex_while_iterator_bl_T *const ex_while_iterator_block_relo_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Number of Iterations' : Unused code path elimination
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
 * '<Root>' : 'ex_while_iterator_block_relop'
 * '<S1>'   : 'ex_while_iterator_block_relop/While Iterator Subsystem'
 */
#endif                                 /* RTW_HEADER_ex_while_iterator_block_relop_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
