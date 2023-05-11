/*
 * File: ledval_types.h
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

#ifndef RTW_HEADER_ledval_types_h_
#define RTW_HEADER_ledval_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_switchmode_
#define DEFINED_TYPEDEF_FOR_switchmode_

typedef enum {
  OFF = 0,                             /* Default value */
  ON
} switchmode;

#endif

#ifndef DEFINED_TYPEDEF_FOR_led_
#define DEFINED_TYPEDEF_FOR_led_

typedef enum {
  GREEN = 1,                           /* Default value */
  RED = 8
} led;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_ledval_T RT_MODEL_ledval_T;

#endif                                 /* RTW_HEADER_ledval_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
