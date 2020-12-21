/*
 * File: PruebaAdc.c
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

#include "PruebaAdc.h"
#include "PruebaAdc_private.h"
#include "PruebaAdc_dt.h"
#define PruebaAdc_PinNumber            (2.0)
#define PruebaAdc_PinNumber_j          (3.0)
#define PruebaAdc_PinNumber_ju         (7.0)
#define PruebaAdc_PinNumber_jux        (6.0)

/* Block signals (auto storage) */
B_PruebaAdc_T PruebaAdc_B;

/* Block states (auto storage) */
DW_PruebaAdc_T PruebaAdc_DW;

/* Real-time model */
RT_MODEL_PruebaAdc_T PruebaAdc_M_;
RT_MODEL_PruebaAdc_T *const PruebaAdc_M = &PruebaAdc_M_;
real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0UL]) {
    iLeft = 0UL;
    frac = (u0 - bp0[0UL]) / (bp0[1UL] - bp0[0UL]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1UL;
    iLeft = 0UL;
    iRght = maxIndex;
    while (iRght - iLeft > 1UL) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1UL;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1UL] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1UL;
    frac = (u0 - bp0[maxIndex - 1UL]) / (bp0[maxIndex] - bp0[maxIndex - 1UL]);
  }

  /* Interpolation 1-D
     Interpolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  return (table[iLeft + 1UL] - table[iLeft]) * frac + table[iLeft];
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T u1_0;
  if (!((!rtIsNaN(u0)) && (!rtIsInf(u0)) && ((!rtIsNaN(u1)) && (!rtIsInf(u1)))))
  {
    y = (rtNaN);
  } else {
    if (u1 < 0.0) {
      u1_0 = ceil(u1);
    } else {
      u1_0 = floor(u1);
    }

    if ((u1 != 0.0) && (u1 != u1_0)) {
      u1_0 = u0 / u1;
      if (fabs(u1_0 - rt_roundd_snf(u1_0)) <= DBL_EPSILON * fabs(u1_0)) {
        y = 0.0;
      } else {
        y = fmod(u0, u1);
      }
    } else {
      y = fmod(u0, u1);
    }
  }

  return y;
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int16_T u0_0;
  int16_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = atan2(u0_0, u1_0);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

/* Model step function */
void PruebaAdc_step(void)
{
  uint16_T rtb_Prismatico_0;
  real_T d;
  real_T rtb_Add4;
  real_T rtb_Add3;
  real_T rtb_Sum;
  real_T rtb_Gain2;
  boolean_T rtb_LogicalOperator;
  uint8_T tmp;

  /* SignalConversion: '<S15>/Output' incorporates:
   *  Clock: '<S15>/Clock'
   *  Constant: '<S15>/Constant'
   *  Lookup_n-D: '<S15>/Look-Up Table1'
   *  Math: '<S15>/Math Function'
   *  S-Function (sfun_tstart): '<S15>/startTime'
   *  Sum: '<S15>/Sum'
   */
  PruebaAdc_B.Output = look1_binlxpw(rt_remd_snf(PruebaAdc_M->Timing.t[0] - (0.0),
    PruebaAdc_P.Constant_Value), PruebaAdc_P.LookUpTable1_bp01Data,
    PruebaAdc_P.d, 125UL);

  /* S-Function (arduinoanaloginput_sfcn): '<Root>/Prismatico' */
  rtb_Prismatico_0 = MW_analogRead(PruebaAdc_P.Prismatico_p1);

  /* Gain: '<Root>/Gain' incorporates:
   *  Constant: '<Root>/Constant2'
   *  S-Function (arduinoanaloginput_sfcn): '<Root>/Prismatico'
   *  Sum: '<Root>/Add'
   */
  PruebaAdc_B.Gain = (PruebaAdc_P.Constant2_Value - (real_T)rtb_Prismatico_0) *
    PruebaAdc_P.Gain_Gain;

  /* Sum: '<Root>/Add3' */
  rtb_Add3 = PruebaAdc_B.Output - PruebaAdc_B.Gain;

  /* RelationalOperator: '<S2>/Compare' incorporates:
   *  Constant: '<S2>/Constant'
   */
  rtb_LogicalOperator = (rtb_Add3 < PruebaAdc_P.Constant_Value_f);

  /* Start for MATLABSystem: '<S3>/Digital Output' incorporates:
   *  Constant: '<Root>/1- Negativo1'
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   *  Logic: '<Root>/Logical Operator2'
   *  MATLABSystem: '<S3>/Digital Output'
   */
  writeDigitalPin((uint8_T)PruebaAdc_PinNumber, (uint8_T)(rtb_LogicalOperator &&
    (PruebaAdc_P.uNegativo1_Value != 0.0)));

  /* Start for MATLABSystem: '<S4>/Digital Output' incorporates:
   *  Constant: '<Root>/1-posiit1'
   *  DataTypeConversion: '<S4>/Data Type Conversion'
   *  Logic: '<Root>/Logical Operator3'
   *  MATLABSystem: '<S4>/Digital Output'
   */
  writeDigitalPin((uint8_T)PruebaAdc_PinNumber_j, (uint8_T)((int8_T)
    rtb_LogicalOperator ^ (int8_T)(PruebaAdc_P.uposiit1_Value != 0.0)));

  /* S-Function (arduinoanaloginput_sfcn): '<Root>/Rotacional' */
  rtb_Prismatico_0 = MW_analogRead(PruebaAdc_P.Rotacional_p1);

  /* Gain: '<Root>/Gain1' incorporates:
   *  Constant: '<Root>/Constant3'
   *  Constant: '<Root>/Constant4'
   *  S-Function (arduinoanaloginput_sfcn): '<Root>/Rotacional'
   *  Sum: '<Root>/Add1'
   *  Sum: '<Root>/Add2'
   */
  PruebaAdc_B.Gain1 = ((PruebaAdc_P.Constant3_Value - (real_T)rtb_Prismatico_0)
                       - PruebaAdc_P.Constant4_Value) * PruebaAdc_P.Gain1_Gain;

  /* Sum: '<Root>/Add4' incorporates:
   *  Clock: '<S16>/Clock'
   *  Constant: '<S16>/Constant'
   *  Lookup_n-D: '<S16>/Look-Up Table1'
   *  Math: '<S16>/Math Function'
   *  S-Function (sfun_tstart): '<S16>/startTime'
   *  Sum: '<S16>/Sum'
   */
  rtb_Add4 = look1_binlxpw(rt_remd_snf(PruebaAdc_M->Timing.t[0] - (0.0),
    PruebaAdc_P.Constant_Value_h), PruebaAdc_P.LookUpTable1_bp01Data_o,
    PruebaAdc_P.phi, 125UL) - PruebaAdc_B.Gain1;

  /* RelationalOperator: '<S1>/Compare' incorporates:
   *  Constant: '<S1>/Constant'
   */
  rtb_LogicalOperator = (rtb_Add4 < PruebaAdc_P.Constant_Value_fj);

  /* Start for MATLABSystem: '<S5>/Digital Output' incorporates:
   *  Constant: '<Root>/1-posiit'
   *  DataTypeConversion: '<S5>/Data Type Conversion'
   *  Logic: '<Root>/Logical Operator1'
   *  MATLABSystem: '<S5>/Digital Output'
   */
  writeDigitalPin((uint8_T)PruebaAdc_PinNumber_ju, (uint8_T)((int8_T)
    rtb_LogicalOperator ^ (int8_T)(PruebaAdc_P.uposiit_Value != 0.0)));

  /* Start for MATLABSystem: '<S6>/Digital Output' incorporates:
   *  Constant: '<Root>/1- Negativo'
   *  DataTypeConversion: '<S6>/Data Type Conversion'
   *  Logic: '<Root>/Logical Operator'
   *  MATLABSystem: '<S6>/Digital Output'
   */
  writeDigitalPin((uint8_T)PruebaAdc_PinNumber_jux, (uint8_T)
                  (rtb_LogicalOperator && (PruebaAdc_P.uNegativo_Value != 0.0)));

  /* Gain: '<S7>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S7>/Filter'
   *  Gain: '<S7>/Derivative Gain'
   *  Sum: '<S7>/SumD'
   */
  PruebaAdc_B.FilterCoefficient = (PruebaAdc_P.DiscretePIDController_D *
    rtb_Add3 - PruebaAdc_DW.Filter_DSTATE) * PruebaAdc_P.DiscretePIDController_N;

  /* Abs: '<Root>/Abs' incorporates:
   *  DiscreteIntegrator: '<S7>/Integrator'
   *  Gain: '<S7>/Proportional Gain'
   *  Sum: '<S7>/Sum'
   */
  rtb_Sum = fabs((PruebaAdc_P.DiscretePIDController_P * rtb_Add3 +
                  PruebaAdc_DW.Integrator_DSTATE) +
                 PruebaAdc_B.FilterCoefficient);

  /* Saturate: '<Root>/Saturation' */
  if (rtb_Sum > PruebaAdc_P.Saturation_UpperSat) {
    /* DataTypeConversion: '<S12>/Data Type Conversion' */
    rtb_Sum = PruebaAdc_P.Saturation_UpperSat;
  } else {
    if (rtb_Sum < PruebaAdc_P.Saturation_LowerSat) {
      /* DataTypeConversion: '<S12>/Data Type Conversion' */
      rtb_Sum = PruebaAdc_P.Saturation_LowerSat;
    }
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* DataTypeConversion: '<S12>/Data Type Conversion' */
  if (rtb_Sum < 256.0) {
    if (rtb_Sum >= 0.0) {
      tmp = (uint8_T)rtb_Sum;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* S-Function (arduinoanalogoutput_sfcn): '<S12>/PWM' */
  MW_analogWrite(PruebaAdc_P.PWM_pinNumber, tmp);

  /* Gain: '<S8>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S8>/Filter'
   *  Gain: '<S8>/Derivative Gain'
   *  Sum: '<S8>/SumD'
   */
  PruebaAdc_B.FilterCoefficient_n = (PruebaAdc_P.DiscretePIDController1_D *
    rtb_Add4 - PruebaAdc_DW.Filter_DSTATE_g) *
    PruebaAdc_P.DiscretePIDController1_N;

  /* Sum: '<S8>/Sum' incorporates:
   *  DiscreteIntegrator: '<S8>/Integrator'
   *  Gain: '<S8>/Proportional Gain'
   */
  rtb_Sum = (PruebaAdc_P.DiscretePIDController1_P * rtb_Add4 +
             PruebaAdc_DW.Integrator_DSTATE_a) + PruebaAdc_B.FilterCoefficient_n;

  /* MATLAB Function: '<Root>/MATLAB Function' */
  /* MATLAB Function 'MATLAB Function': '<S9>:1' */
  /* '<S9>:1:2' if u>0 */
  if (rtb_Sum > 0.0) {
    /* '<S9>:1:3' y=2.3*u; */
    rtb_Sum *= 2.3;
  } else {
    /* '<S9>:1:4' else */
    /* '<S9>:1:5' y =-1*u; */
    rtb_Sum = -rtb_Sum;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */

  /* Saturate: '<Root>/Saturation1' */
  if (rtb_Sum > PruebaAdc_P.Saturation1_UpperSat) {
    /* DataTypeConversion: '<S13>/Data Type Conversion' */
    rtb_Sum = PruebaAdc_P.Saturation1_UpperSat;
  } else {
    if (rtb_Sum < PruebaAdc_P.Saturation1_LowerSat) {
      /* DataTypeConversion: '<S13>/Data Type Conversion' */
      rtb_Sum = PruebaAdc_P.Saturation1_LowerSat;
    }
  }

  /* End of Saturate: '<Root>/Saturation1' */

  /* DataTypeConversion: '<S13>/Data Type Conversion' */
  if (rtb_Sum < 256.0) {
    if (rtb_Sum >= 0.0) {
      tmp = (uint8_T)rtb_Sum;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* S-Function (arduinoanalogoutput_sfcn): '<S13>/PWM' */
  MW_analogWrite(PruebaAdc_P.PWM_pinNumber_m, tmp);

  /* Gain: '<Root>/Gain2' */
  rtb_Gain2 = PruebaAdc_P.Gain2_Gain * PruebaAdc_B.Gain1;

  /* MATLAB Function: '<Root>/MATLAB Function2' */
  /* MATLAB Function 'MATLAB Function2': '<S11>:1' */
  /* '<S11>:1:3' y = sqrt(((300-u)^2)+32400-(2*(300-u)*180*cos(u1))); */
  rtb_Sum = sqrt(((300.0 - PruebaAdc_B.Gain) * (300.0 - PruebaAdc_B.Gain) +
                  32400.0) - (300.0 - PruebaAdc_B.Gain) * 2.0 * 180.0 * cos
                 (rtb_Gain2));

  /* MATLAB Function: '<Root>/MATLAB Function1' */
  /* MATLAB Function 'MATLAB Function1': '<S10>:1' */
  /* '<S10>:1:2' if u2<146 */
  if (PruebaAdc_B.Gain < 146.0) {
    /* '<S10>:1:3' d=-sqrt(u^2-(180*sin(u1))^2); */
    d = 180.0 * sin(rtb_Gain2);
    d = -sqrt(rtb_Sum * rtb_Sum - d * d);
  } else {
    /* '<S10>:1:4' else */
    /* '<S10>:1:5' d=sqrt(u^2-(180*sin(u1))^2); */
    d = 180.0 * sin(rtb_Gain2);
    d = sqrt(rtb_Sum * rtb_Sum - d * d);
  }

  /* '<S10>:1:7' y = atan2(180*sin(u1),d); */
  rtb_Gain2 = rt_atan2d_snf(180.0 * sin(rtb_Gain2), d);

  /* End of MATLAB Function: '<Root>/MATLAB Function1' */

  /* Fcn: '<S14>/r->x' */
  PruebaAdc_B.rx = rtb_Sum * cos(rtb_Gain2);

  /* Fcn: '<S14>/theta->y' */
  PruebaAdc_B.thetay = rtb_Sum * sin(rtb_Gain2);

  /* Gain: '<S7>/Integral Gain' */
  PruebaAdc_B.IntegralGain = PruebaAdc_P.DiscretePIDController_I * rtb_Add3;

  /* Gain: '<S8>/Integral Gain' */
  PruebaAdc_B.IntegralGain_g = PruebaAdc_P.DiscretePIDController1_I * rtb_Add4;

  /* Update for DiscreteIntegrator: '<S7>/Integrator' */
  PruebaAdc_DW.Integrator_DSTATE += PruebaAdc_P.Integrator_gainval *
    PruebaAdc_B.IntegralGain;

  /* Update for DiscreteIntegrator: '<S7>/Filter' */
  PruebaAdc_DW.Filter_DSTATE += PruebaAdc_P.Filter_gainval *
    PruebaAdc_B.FilterCoefficient;

  /* Update for DiscreteIntegrator: '<S8>/Integrator' */
  PruebaAdc_DW.Integrator_DSTATE_a += PruebaAdc_P.Integrator_gainval_g *
    PruebaAdc_B.IntegralGain_g;

  /* Update for DiscreteIntegrator: '<S8>/Filter' */
  PruebaAdc_DW.Filter_DSTATE_g += PruebaAdc_P.Filter_gainval_e *
    PruebaAdc_B.FilterCoefficient_n;

  /* External mode */
  rtExtModeUploadCheckTrigger(2);

  {                                    /* Sample time: [0.0s, 0.0s] */
    rtExtModeUpload(0, PruebaAdc_M->Timing.t[0]);
  }

  {                                    /* Sample time: [0.01s, 0.0s] */
    rtExtModeUpload(1, ((PruebaAdc_M->Timing.clockTick1) * 0.01));
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.0s, 0.0s] */
    if ((rtmGetTFinal(PruebaAdc_M)!=-1) &&
        !((rtmGetTFinal(PruebaAdc_M)-PruebaAdc_M->Timing.t[0]) >
          PruebaAdc_M->Timing.t[0] * (DBL_EPSILON))) {
      rtmSetErrorStatus(PruebaAdc_M, "Simulation finished");
    }

    if (rtmGetStopRequested(PruebaAdc_M)) {
      rtmSetErrorStatus(PruebaAdc_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  PruebaAdc_M->Timing.t[0] =
    (++PruebaAdc_M->Timing.clockTick0) * PruebaAdc_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.01s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.01, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    PruebaAdc_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void PruebaAdc_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)PruebaAdc_M, 0,
                sizeof(RT_MODEL_PruebaAdc_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&PruebaAdc_M->solverInfo,
                          &PruebaAdc_M->Timing.simTimeStep);
    rtsiSetTPtr(&PruebaAdc_M->solverInfo, &rtmGetTPtr(PruebaAdc_M));
    rtsiSetStepSizePtr(&PruebaAdc_M->solverInfo, &PruebaAdc_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&PruebaAdc_M->solverInfo, (&rtmGetErrorStatus
      (PruebaAdc_M)));
    rtsiSetRTModelPtr(&PruebaAdc_M->solverInfo, PruebaAdc_M);
  }

  rtsiSetSimTimeStep(&PruebaAdc_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&PruebaAdc_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(PruebaAdc_M, &PruebaAdc_M->Timing.tArray[0]);
  rtmSetTFinal(PruebaAdc_M, -1);
  PruebaAdc_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  PruebaAdc_M->Sizes.checksums[0] = (3015540206U);
  PruebaAdc_M->Sizes.checksums[1] = (3626744215U);
  PruebaAdc_M->Sizes.checksums[2] = (915852336U);
  PruebaAdc_M->Sizes.checksums[3] = (2554401901U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[9];
    PruebaAdc_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(PruebaAdc_M->extModeInfo,
      &PruebaAdc_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(PruebaAdc_M->extModeInfo, PruebaAdc_M->Sizes.checksums);
    rteiSetTPtr(PruebaAdc_M->extModeInfo, rtmGetTPtr(PruebaAdc_M));
  }

  /* block I/O */
  (void) memset(((void *) &PruebaAdc_B), 0,
                sizeof(B_PruebaAdc_T));

  /* states (dwork) */
  (void) memset((void *)&PruebaAdc_DW, 0,
                sizeof(DW_PruebaAdc_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    PruebaAdc_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 15;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Start for S-Function (arduinoanaloginput_sfcn): '<Root>/Prismatico' */
  MW_pinModeAnalogInput(PruebaAdc_P.Prismatico_p1);

  /* Start for MATLABSystem: '<S3>/Digital Output' */
  PruebaAdc_DW.obj_o.isInitialized = 0L;
  PruebaAdc_DW.obj_o.isInitialized = 1L;
  digitalIOSetup((uint8_T)PruebaAdc_PinNumber, true);

  /* Start for MATLABSystem: '<S4>/Digital Output' */
  PruebaAdc_DW.obj_c.isInitialized = 0L;
  PruebaAdc_DW.obj_c.isInitialized = 1L;
  digitalIOSetup((uint8_T)PruebaAdc_PinNumber_j, true);

  /* Start for S-Function (arduinoanaloginput_sfcn): '<Root>/Rotacional' */
  MW_pinModeAnalogInput(PruebaAdc_P.Rotacional_p1);

  /* Start for MATLABSystem: '<S5>/Digital Output' */
  PruebaAdc_DW.obj_f.isInitialized = 0L;
  PruebaAdc_DW.obj_f.isInitialized = 1L;
  digitalIOSetup((uint8_T)PruebaAdc_PinNumber_ju, true);

  /* Start for MATLABSystem: '<S6>/Digital Output' */
  PruebaAdc_DW.obj.isInitialized = 0L;
  PruebaAdc_DW.obj.isInitialized = 1L;
  digitalIOSetup((uint8_T)PruebaAdc_PinNumber_jux, true);

  /* Start for S-Function (arduinoanalogoutput_sfcn): '<S12>/PWM' */
  MW_pinModeOutput(PruebaAdc_P.PWM_pinNumber);

  /* Start for S-Function (arduinoanalogoutput_sfcn): '<S13>/PWM' */
  MW_pinModeOutput(PruebaAdc_P.PWM_pinNumber_m);

  /* InitializeConditions for DiscreteIntegrator: '<S7>/Integrator' */
  PruebaAdc_DW.Integrator_DSTATE = PruebaAdc_P.Integrator_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S7>/Filter' */
  PruebaAdc_DW.Filter_DSTATE = PruebaAdc_P.Filter_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S8>/Integrator' */
  PruebaAdc_DW.Integrator_DSTATE_a = PruebaAdc_P.Integrator_IC_n;

  /* InitializeConditions for DiscreteIntegrator: '<S8>/Filter' */
  PruebaAdc_DW.Filter_DSTATE_g = PruebaAdc_P.Filter_IC_c;
}

/* Model terminate function */
void PruebaAdc_terminate(void)
{
  /* Start for MATLABSystem: '<S3>/Digital Output' incorporates:
   *  Terminate for MATLABSystem: '<S3>/Digital Output'
   */
  if (PruebaAdc_DW.obj_o.isInitialized == 1L) {
    PruebaAdc_DW.obj_o.isInitialized = 2L;
  }

  /* End of Start for MATLABSystem: '<S3>/Digital Output' */

  /* Start for MATLABSystem: '<S4>/Digital Output' incorporates:
   *  Terminate for MATLABSystem: '<S4>/Digital Output'
   */
  if (PruebaAdc_DW.obj_c.isInitialized == 1L) {
    PruebaAdc_DW.obj_c.isInitialized = 2L;
  }

  /* End of Start for MATLABSystem: '<S4>/Digital Output' */

  /* Start for MATLABSystem: '<S5>/Digital Output' incorporates:
   *  Terminate for MATLABSystem: '<S5>/Digital Output'
   */
  if (PruebaAdc_DW.obj_f.isInitialized == 1L) {
    PruebaAdc_DW.obj_f.isInitialized = 2L;
  }

  /* End of Start for MATLABSystem: '<S5>/Digital Output' */

  /* Start for MATLABSystem: '<S6>/Digital Output' incorporates:
   *  Terminate for MATLABSystem: '<S6>/Digital Output'
   */
  if (PruebaAdc_DW.obj.isInitialized == 1L) {
    PruebaAdc_DW.obj.isInitialized = 2L;
  }

  /* End of Start for MATLABSystem: '<S6>/Digital Output' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
