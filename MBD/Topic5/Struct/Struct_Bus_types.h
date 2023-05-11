/*
 * File: Struct_Bus_types.h
 *
 * Code generated for Simulink model 'Struct_Bus'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Sun Jan 01 18:22:38 2023
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

#ifndef RTW_HEADER_Struct_Bus_types_h_
#define RTW_HEADER_Struct_Bus_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_Fault_t_
#define DEFINED_TYPEDEF_FOR_Fault_t_

typedef struct {
  uint8_T Angle;
  uint8_T volt;
  uint8_T Temp;
} Fault_t;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_Struct_Bus_T RT_MODEL_Struct_Bus_T;

#endif                                 /* RTW_HEADER_Struct_Bus_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
