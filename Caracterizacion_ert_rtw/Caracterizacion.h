/*
 * File: Caracterizacion.h
 *
 * Code generated for Simulink model 'Caracterizacion'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon May 15 09:38:01 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Caracterizacion_h_
#define RTW_HEADER_Caracterizacion_h_
#include <string.h>
#include <stddef.h>
#ifndef Caracterizacion_COMMON_INCLUDES_
# define Caracterizacion_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_digitalio.h"
#include "arduino_analoginput_lct.h"
#include "arduino_analogoutput_lct.h"
#endif                                 /* Caracterizacion_COMMON_INCLUDES_ */

#include "Caracterizacion_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmTaskCounter
# define rtmTaskCounter(rtm, idx)      ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  void *DigitalOutput_PWORK;           /* '<S4>/Digital Output' */
  void *DigitalOutput_PWORK_o;         /* '<S3>/Digital Output' */
  void *DigitalOutput_PWORK_p;         /* '<S2>/Digital Output' */
  void *DigitalOutput_PWORK_k;         /* '<S1>/Digital Output' */
  codertarget_arduinobase_block_T obj; /* '<S4>/Digital Output' */
  codertarget_arduinobase_block_T obj_h;/* '<S3>/Digital Output' */
  codertarget_arduinobase_block_T obj_k;/* '<S2>/Digital Output' */
  codertarget_arduinobase_block_T obj_j;/* '<S1>/Digital Output' */
} DW_Caracterizacion_T;

/* Parameters (auto storage) */
struct P_Caracterizacion_T_ {
  uint32_T PWM_pinNumber;              /* Mask Parameter: PWM_pinNumber
                                        * Referenced by: '<S6>/PWM'
                                        */
  uint32_T PWM_pinNumber_f;            /* Mask Parameter: PWM_pinNumber_f
                                        * Referenced by: '<S5>/PWM'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant3_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: 140
                                        * Referenced by: '<Root>/Constant5'
                                        */
  real_T Step_Time;                    /* Expression: 2
                                        * Referenced by: '<Root>/Step'
                                        */
  real_T Step_Y0;                      /* Expression: 30
                                        * Referenced by: '<Root>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 0
                                        * Referenced by: '<Root>/Step'
                                        */
  uint32_T AnalogInput_p1;             /* Computed Parameter: AnalogInput_p1
                                        * Referenced by: '<Root>/Analog Input'
                                        */
  uint32_T AnalogInput1_p1;            /* Computed Parameter: AnalogInput1_p1
                                        * Referenced by: '<Root>/Analog Input1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Caracterizacion_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    struct {
      uint8_T TID[3];
    } TaskCounters;

    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[3];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_Caracterizacion_T Caracterizacion_P;

/* Block states (auto storage) */
extern DW_Caracterizacion_T Caracterizacion_DW;

/* External function called from main */
extern void Caracterizacion_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void Caracterizacion_SetEventsForThisBaseStep(boolean_T *eventFlags);
extern void Caracterizacion_initialize(void);
extern void Caracterizacion_step0(void);
extern void Caracterizacion_step2(void);
extern void Caracterizacion_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Caracterizacion_T *const Caracterizacion_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<Root>/Scope1' : Unused code path elimination
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
 * '<Root>' : 'Caracterizacion'
 * '<S1>'   : 'Caracterizacion/Digital Output'
 * '<S2>'   : 'Caracterizacion/Digital Output1'
 * '<S3>'   : 'Caracterizacion/Digital Output2'
 * '<S4>'   : 'Caracterizacion/Digital Output3'
 * '<S5>'   : 'Caracterizacion/PWM'
 * '<S6>'   : 'Caracterizacion/PWM1'
 */
#endif                                 /* RTW_HEADER_Caracterizacion_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
