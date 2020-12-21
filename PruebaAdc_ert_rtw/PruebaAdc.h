/*
 * File: PruebaAdc.h
 *
 * Code generated for Simulink model 'PruebaAdc'.
 *
 * Model version                  : 1.20
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Jun 08 15:16:29 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PruebaAdc_h_
#define RTW_HEADER_PruebaAdc_h_
#include <float.h>
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef PruebaAdc_COMMON_INCLUDES_
# define PruebaAdc_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "MW_digitalio.h"
#include "arduino_analoginput_lct.h"
#include "arduino_analogoutput_lct.h"
#endif                                 /* PruebaAdc_COMMON_INCLUDES_ */

#include "PruebaAdc_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T Output;                       /* '<S15>/Output' */
  real_T Gain;                         /* '<Root>/Gain' */
  real_T Gain1;                        /* '<Root>/Gain1' */
  real_T FilterCoefficient;            /* '<S7>/Filter Coefficient' */
  real_T FilterCoefficient_n;          /* '<S8>/Filter Coefficient' */
  real_T rx;                           /* '<S14>/r->x' */
  real_T thetay;                       /* '<S14>/theta->y' */
  real_T IntegralGain;                 /* '<S7>/Integral Gain' */
  real_T IntegralGain_g;               /* '<S8>/Integral Gain' */
  real_T TmpSignalConversionAtsfunxyInpo[2];
} B_PruebaAdc_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T Integrator_DSTATE;            /* '<S7>/Integrator' */
  real_T Filter_DSTATE;                /* '<S7>/Filter' */
  real_T Integrator_DSTATE_a;          /* '<S8>/Integrator' */
  real_T Filter_DSTATE_g;              /* '<S8>/Filter' */
  struct {
    void *LoggedData;
  } Posiciongrados_PWORK;              /* '<Root>/Posicion grados' */

  struct {
    void *LoggedData;
  } Posicionmm_PWORK;                  /* '<Root>/Posicion mm' */

  void *DigitalOutput_PWORK;           /* '<S6>/Digital Output' */
  void *DigitalOutput_PWORK_e;         /* '<S5>/Digital Output' */
  void *DigitalOutput_PWORK_c;         /* '<S4>/Digital Output' */
  void *DigitalOutput_PWORK_j;         /* '<S3>/Digital Output' */
  codertarget_arduinobase_block_T obj; /* '<S6>/Digital Output' */
  codertarget_arduinobase_block_T obj_f;/* '<S5>/Digital Output' */
  codertarget_arduinobase_block_T obj_c;/* '<S4>/Digital Output' */
  codertarget_arduinobase_block_T obj_o;/* '<S3>/Digital Output' */
} DW_PruebaAdc_T;

/* Parameters (auto storage) */
struct P_PruebaAdc_T_ {
  real_T d[126];                       /* Variable: d
                                        * Referenced by: '<S15>/Look-Up Table1'
                                        */
  real_T phi[126];                     /* Variable: phi
                                        * Referenced by: '<S16>/Look-Up Table1'
                                        */
  real_T DiscretePIDController_D;      /* Mask Parameter: DiscretePIDController_D
                                        * Referenced by: '<S7>/Derivative Gain'
                                        */
  real_T DiscretePIDController1_D;     /* Mask Parameter: DiscretePIDController1_D
                                        * Referenced by: '<S8>/Derivative Gain'
                                        */
  real_T DiscretePIDController_I;      /* Mask Parameter: DiscretePIDController_I
                                        * Referenced by: '<S7>/Integral Gain'
                                        */
  real_T DiscretePIDController1_I;     /* Mask Parameter: DiscretePIDController1_I
                                        * Referenced by: '<S8>/Integral Gain'
                                        */
  real_T DiscretePIDController_N;      /* Mask Parameter: DiscretePIDController_N
                                        * Referenced by: '<S7>/Filter Coefficient'
                                        */
  real_T DiscretePIDController1_N;     /* Mask Parameter: DiscretePIDController1_N
                                        * Referenced by: '<S8>/Filter Coefficient'
                                        */
  real_T DiscretePIDController_P;      /* Mask Parameter: DiscretePIDController_P
                                        * Referenced by: '<S7>/Proportional Gain'
                                        */
  real_T DiscretePIDController1_P;     /* Mask Parameter: DiscretePIDController1_P
                                        * Referenced by: '<S8>/Proportional Gain'
                                        */
  uint32_T PWM_pinNumber;              /* Mask Parameter: PWM_pinNumber
                                        * Referenced by: '<S12>/PWM'
                                        */
  uint32_T PWM_pinNumber_m;            /* Mask Parameter: PWM_pinNumber_m
                                        * Referenced by: '<S13>/PWM'
                                        */
  real_T Constant_Value;               /* Expression: period
                                        * Referenced by: '<S15>/Constant'
                                        */
  real_T LookUpTable1_bp01Data[126];   /* Expression: rep_seq_t - min(rep_seq_t)
                                        * Referenced by: '<S15>/Look-Up Table1'
                                        */
  real_T Constant2_Value;              /* Expression: 1023
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Gain_Gain;                    /* Expression: 0.37335092
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Constant_Value_f;             /* Expression: 0
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T uNegativo1_Value;             /* Expression: 1
                                        * Referenced by: '<Root>/1- Negativo1'
                                        */
  real_T uposiit1_Value;               /* Expression: 1
                                        * Referenced by: '<Root>/1-posiit1'
                                        */
  real_T Constant_Value_h;             /* Expression: period
                                        * Referenced by: '<S16>/Constant'
                                        */
  real_T LookUpTable1_bp01Data_o[126]; /* Expression: rep_seq_t - min(rep_seq_t)
                                        * Referenced by: '<S16>/Look-Up Table1'
                                        */
  real_T Constant3_Value;              /* Expression: 1023
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: 532
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T Gain1_Gain;                   /* Expression: 0.263543191
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T Constant_Value_fj;            /* Expression: 0
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T uposiit_Value;                /* Expression: 1
                                        * Referenced by: '<Root>/1-posiit'
                                        */
  real_T uNegativo_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/1- Negativo'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S7>/Integrator'
                                        */
  real_T Integrator_IC;                /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S7>/Integrator'
                                        */
  real_T Filter_gainval;               /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S7>/Filter'
                                        */
  real_T Filter_IC;                    /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S7>/Filter'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 255
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Integrator_gainval_g;         /* Computed Parameter: Integrator_gainval_g
                                        * Referenced by: '<S8>/Integrator'
                                        */
  real_T Integrator_IC_n;              /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S8>/Integrator'
                                        */
  real_T Filter_gainval_e;             /* Computed Parameter: Filter_gainval_e
                                        * Referenced by: '<S8>/Filter'
                                        */
  real_T Filter_IC_c;                  /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S8>/Filter'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 255
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 0
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Gain2_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<Root>/Gain2'
                                        */
  uint32_T Prismatico_p1;              /* Computed Parameter: Prismatico_p1
                                        * Referenced by: '<Root>/Prismatico'
                                        */
  uint32_T Rotacional_p1;              /* Computed Parameter: Rotacional_p1
                                        * Referenced by: '<Root>/Rotacional'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_PruebaAdc_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_PruebaAdc_T PruebaAdc_P;

/* Block signals (auto storage) */
extern B_PruebaAdc_T PruebaAdc_B;

/* Block states (auto storage) */
extern DW_PruebaAdc_T PruebaAdc_DW;

/* Model entry point functions */
extern void PruebaAdc_initialize(void);
extern void PruebaAdc_step(void);
extern void PruebaAdc_terminate(void);

/* Real-time Model object */
extern RT_MODEL_PruebaAdc_T *const PruebaAdc_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S16>/Output' : Eliminate redundant signal conversion block
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
 * '<Root>' : 'PruebaAdc'
 * '<S1>'   : 'PruebaAdc/Compare To Zero'
 * '<S2>'   : 'PruebaAdc/Compare To Zero1'
 * '<S3>'   : 'PruebaAdc/Digital Output'
 * '<S4>'   : 'PruebaAdc/Digital Output1'
 * '<S5>'   : 'PruebaAdc/Digital Output2'
 * '<S6>'   : 'PruebaAdc/Digital Output3'
 * '<S7>'   : 'PruebaAdc/Discrete PID Controller'
 * '<S8>'   : 'PruebaAdc/Discrete PID Controller1'
 * '<S9>'   : 'PruebaAdc/MATLAB Function'
 * '<S10>'  : 'PruebaAdc/MATLAB Function1'
 * '<S11>'  : 'PruebaAdc/MATLAB Function2'
 * '<S12>'  : 'PruebaAdc/PWM'
 * '<S13>'  : 'PruebaAdc/PWM1'
 * '<S14>'  : 'PruebaAdc/Polar to Cartesian'
 * '<S15>'  : 'PruebaAdc/Repeating Sequence'
 * '<S16>'  : 'PruebaAdc/Repeating Sequence1'
 * '<S17>'  : 'PruebaAdc/XY Graph'
 */
#endif                                 /* RTW_HEADER_PruebaAdc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
