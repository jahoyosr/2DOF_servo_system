/*
 * PruebaAdc_dt.h
 *
 * Code generation for model "PruebaAdc".
 *
 * Model version              : 1.20
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Thu Jun 08 15:16:29 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(codertarget_arduinobase_block_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "codertarget_arduinobase_block_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&PruebaAdc_B.Output), 0, 0, 11 }
  ,

  { (char_T *)(&PruebaAdc_DW.Integrator_DSTATE), 0, 0, 4 },

  { (char_T *)(&PruebaAdc_DW.Posiciongrados_PWORK.LoggedData), 11, 0, 6 },

  { (char_T *)(&PruebaAdc_DW.obj), 14, 0, 4 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  4U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&PruebaAdc_P.d[0]), 0, 0, 260 },

  { (char_T *)(&PruebaAdc_P.PWM_pinNumber), 7, 0, 2 },

  { (char_T *)(&PruebaAdc_P.Constant_Value), 0, 0, 278 },

  { (char_T *)(&PruebaAdc_P.Prismatico_p1), 7, 0, 2 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  4U,
  rtPTransitions
};

/* [EOF] PruebaAdc_dt.h */
