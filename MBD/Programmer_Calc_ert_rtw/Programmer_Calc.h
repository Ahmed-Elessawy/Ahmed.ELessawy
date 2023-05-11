/*
 * File: Programmer_Calc.h
 *
 * Code generated for Simulink model 'Programmer_Calc'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Dec 27 12:14:03 2022
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

#ifndef RTW_HEADER_Programmer_Calc_h_
#define RTW_HEADER_Programmer_Calc_h_
#include <string.h>
#include <stddef.h>
#ifndef Programmer_Calc_COMMON_INCLUDES_
# define Programmer_Calc_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Programmer_Calc_COMMON_INCLUDES_ */

#include "Programmer_Calc_types.h"

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
} ExtU_Programmer_Calc_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  uint8_T Out1;                        /* '<Root>/Out1' */
  uint8_T Out2;                        /* '<Root>/Out2' */
  uint8_T Out3;                        /* '<Root>/Out3' */
  uint8_T Out4;                        /* '<Root>/Out4' */
  uint8_T Out5;                        /* '<Root>/Out5' */
  uint8_T Out6;                        /* '<Root>/Out6' */
  uint8_T Out7;                        /* '<Root>/Out7' */
} ExtY_Programmer_Calc_T;

/* Real-time Model Data Structure */
struct tag_RTM_Programmer_Calc_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_Programmer_Calc_T Programmer_Calc_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Programmer_Calc_T Programmer_Calc_Y;

/* Model entry point functions */
extern void Programmer_Calc_initialize(void);
extern void Programmer_Calc_step(void);
extern void Programmer_Calc_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Programmer_Calc_T *const Programmer_Calc_M;

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
 * '<Root>' : 'Programmer_Calc'
 */
#endif                                 /* RTW_HEADER_Programmer_Calc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
