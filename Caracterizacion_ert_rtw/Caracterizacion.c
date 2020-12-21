/*
 * File: Caracterizacion.c
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

#include "Caracterizacion.h"
#include "Caracterizacion_private.h"
#define Caracterizacion_PinNumber      (2.0)
#define Caracterizacion_PinNumber_d    (3.0)
#define Caracterizacion_PinNumber_dg   (7.0)
#define Caracterizacion_PinNumber_dgd  (8.0)

/* Block states (auto storage) */
DW_Caracterizacion_T Caracterizacion_DW;

/* Real-time model */
RT_MODEL_Caracterizacion_T Caracterizacion_M_;
RT_MODEL_Caracterizacion_T *const Caracterizacion_M = &Caracterizacion_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void Caracterizacion_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[2] = ((boolean_T)rtmStepTask(Caracterizacion_M, 2));
}

/*
 *   This function updates active task flag for each subrate
 * and rate transition flags for tasks that exchange data.
 * The function assumes rate-monotonic multitasking scheduler.
 * The function must be called at model base rate so that
 * the generated code self-manages all its subrates and rate
 * transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (Caracterizacion_M->Timing.TaskCounters.TID[2])++;
  if ((Caracterizacion_M->Timing.TaskCounters.TID[2]) > 1) {/* Sample time: [0.1s, 0.0s] */
    Caracterizacion_M->Timing.TaskCounters.TID[2] = 0;
  }
}

/* Model step function for TID0 */
void Caracterizacion_step0(void)       /* Sample time: [0.0s, 0.0s] */
{
  real_T currentTime;
  uint8_T currentTime_0;

  {                                    /* Sample time: [0.0s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Constant'
   */
  if (Caracterizacion_P.Constant_Value < 256.0) {
    if (Caracterizacion_P.Constant_Value >= 0.0) {
      currentTime_0 = (uint8_T)Caracterizacion_P.Constant_Value;
    } else {
      currentTime_0 = 0U;
    }
  } else {
    currentTime_0 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S1>/Data Type Conversion' */

  /* Start for MATLABSystem: '<S1>/Digital Output' incorporates:
   *  MATLABSystem: '<S1>/Digital Output'
   */
  writeDigitalPin((uint8_T)Caracterizacion_PinNumber, currentTime_0);

  /* DataTypeConversion: '<S2>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  if (Caracterizacion_P.Constant1_Value < 256.0) {
    if (Caracterizacion_P.Constant1_Value >= 0.0) {
      currentTime_0 = (uint8_T)Caracterizacion_P.Constant1_Value;
    } else {
      currentTime_0 = 0U;
    }
  } else {
    currentTime_0 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S2>/Data Type Conversion' */

  /* Start for MATLABSystem: '<S2>/Digital Output' incorporates:
   *  MATLABSystem: '<S2>/Digital Output'
   */
  writeDigitalPin((uint8_T)Caracterizacion_PinNumber_d, currentTime_0);

  /* DataTypeConversion: '<S3>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Constant3'
   */
  if (Caracterizacion_P.Constant3_Value < 256.0) {
    if (Caracterizacion_P.Constant3_Value >= 0.0) {
      currentTime_0 = (uint8_T)Caracterizacion_P.Constant3_Value;
    } else {
      currentTime_0 = 0U;
    }
  } else {
    currentTime_0 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S3>/Data Type Conversion' */

  /* Start for MATLABSystem: '<S3>/Digital Output' incorporates:
   *  MATLABSystem: '<S3>/Digital Output'
   */
  writeDigitalPin((uint8_T)Caracterizacion_PinNumber_dg, currentTime_0);

  /* DataTypeConversion: '<S4>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Constant4'
   */
  if (Caracterizacion_P.Constant4_Value < 256.0) {
    if (Caracterizacion_P.Constant4_Value >= 0.0) {
      currentTime_0 = (uint8_T)Caracterizacion_P.Constant4_Value;
    } else {
      currentTime_0 = 0U;
    }
  } else {
    currentTime_0 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S4>/Data Type Conversion' */

  /* Start for MATLABSystem: '<S4>/Digital Output' incorporates:
   *  MATLABSystem: '<S4>/Digital Output'
   */
  writeDigitalPin((uint8_T)Caracterizacion_PinNumber_dgd, currentTime_0);

  /* DataTypeConversion: '<S6>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Constant5'
   */
  if (Caracterizacion_P.Constant5_Value < 256.0) {
    if (Caracterizacion_P.Constant5_Value >= 0.0) {
      currentTime_0 = (uint8_T)Caracterizacion_P.Constant5_Value;
    } else {
      currentTime_0 = 0U;
    }
  } else {
    currentTime_0 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S6>/Data Type Conversion' */

  /* S-Function (arduinoanalogoutput_sfcn): '<S6>/PWM' */
  MW_analogWrite(Caracterizacion_P.PWM_pinNumber, currentTime_0);

  /* Step: '<Root>/Step' */
  currentTime = Caracterizacion_M->Timing.t[0];
  if (currentTime < Caracterizacion_P.Step_Time) {
    currentTime = Caracterizacion_P.Step_Y0;
  } else {
    currentTime = Caracterizacion_P.Step_YFinal;
  }

  /* End of Step: '<Root>/Step' */

  /* DataTypeConversion: '<S5>/Data Type Conversion' */
  if (currentTime < 256.0) {
    if (currentTime >= 0.0) {
      currentTime_0 = (uint8_T)currentTime;
    } else {
      currentTime_0 = 0U;
    }
  } else {
    currentTime_0 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S5>/Data Type Conversion' */

  /* S-Function (arduinoanalogoutput_sfcn): '<S5>/PWM' */
  MW_analogWrite(Caracterizacion_P.PWM_pinNumber_f, currentTime_0);

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  Caracterizacion_M->Timing.t[0] =
    (++Caracterizacion_M->Timing.clockTick0) *
    Caracterizacion_M->Timing.stepSize0;

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.05, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   */
  Caracterizacion_M->Timing.clockTick1++;
}

/* Model step function for TID2 */
void Caracterizacion_step2(void)       /* Sample time: [0.1s, 0.0s] */
{
  /* S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input' */
  MW_analogRead(Caracterizacion_P.AnalogInput_p1);

  /* S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input1' */
  MW_analogRead(Caracterizacion_P.AnalogInput1_p1);
}

/* Model initialize function */
void Caracterizacion_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)Caracterizacion_M, 0,
                sizeof(RT_MODEL_Caracterizacion_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Caracterizacion_M->solverInfo,
                          &Caracterizacion_M->Timing.simTimeStep);
    rtsiSetTPtr(&Caracterizacion_M->solverInfo, &rtmGetTPtr(Caracterizacion_M));
    rtsiSetStepSizePtr(&Caracterizacion_M->solverInfo,
                       &Caracterizacion_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&Caracterizacion_M->solverInfo, (&rtmGetErrorStatus
      (Caracterizacion_M)));
    rtsiSetRTModelPtr(&Caracterizacion_M->solverInfo, Caracterizacion_M);
  }

  rtsiSetSimTimeStep(&Caracterizacion_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&Caracterizacion_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(Caracterizacion_M, &Caracterizacion_M->Timing.tArray[0]);
  Caracterizacion_M->Timing.stepSize0 = 0.05;

  /* states (dwork) */
  (void) memset((void *)&Caracterizacion_DW, 0,
                sizeof(DW_Caracterizacion_T));

  /* Start for S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input' */
  MW_pinModeAnalogInput(Caracterizacion_P.AnalogInput_p1);

  /* Start for S-Function (arduinoanaloginput_sfcn): '<Root>/Analog Input1' */
  MW_pinModeAnalogInput(Caracterizacion_P.AnalogInput1_p1);

  /* Start for MATLABSystem: '<S1>/Digital Output' */
  Caracterizacion_DW.obj_j.isInitialized = 0L;
  Caracterizacion_DW.obj_j.isInitialized = 1L;
  digitalIOSetup((uint8_T)Caracterizacion_PinNumber, true);

  /* Start for MATLABSystem: '<S2>/Digital Output' */
  Caracterizacion_DW.obj_k.isInitialized = 0L;
  Caracterizacion_DW.obj_k.isInitialized = 1L;
  digitalIOSetup((uint8_T)Caracterizacion_PinNumber_d, true);

  /* Start for MATLABSystem: '<S3>/Digital Output' */
  Caracterizacion_DW.obj_h.isInitialized = 0L;
  Caracterizacion_DW.obj_h.isInitialized = 1L;
  digitalIOSetup((uint8_T)Caracterizacion_PinNumber_dg, true);

  /* Start for MATLABSystem: '<S4>/Digital Output' */
  Caracterizacion_DW.obj.isInitialized = 0L;
  Caracterizacion_DW.obj.isInitialized = 1L;
  digitalIOSetup((uint8_T)Caracterizacion_PinNumber_dgd, true);

  /* Start for S-Function (arduinoanalogoutput_sfcn): '<S6>/PWM' */
  MW_pinModeOutput(Caracterizacion_P.PWM_pinNumber);

  /* Start for S-Function (arduinoanalogoutput_sfcn): '<S5>/PWM' */
  MW_pinModeOutput(Caracterizacion_P.PWM_pinNumber_f);
}

/* Model terminate function */
void Caracterizacion_terminate(void)
{
  /* Start for MATLABSystem: '<S1>/Digital Output' incorporates:
   *  Terminate for MATLABSystem: '<S1>/Digital Output'
   */
  if (Caracterizacion_DW.obj_j.isInitialized == 1L) {
    Caracterizacion_DW.obj_j.isInitialized = 2L;
  }

  /* End of Start for MATLABSystem: '<S1>/Digital Output' */

  /* Start for MATLABSystem: '<S2>/Digital Output' incorporates:
   *  Terminate for MATLABSystem: '<S2>/Digital Output'
   */
  if (Caracterizacion_DW.obj_k.isInitialized == 1L) {
    Caracterizacion_DW.obj_k.isInitialized = 2L;
  }

  /* End of Start for MATLABSystem: '<S2>/Digital Output' */

  /* Start for MATLABSystem: '<S3>/Digital Output' incorporates:
   *  Terminate for MATLABSystem: '<S3>/Digital Output'
   */
  if (Caracterizacion_DW.obj_h.isInitialized == 1L) {
    Caracterizacion_DW.obj_h.isInitialized = 2L;
  }

  /* End of Start for MATLABSystem: '<S3>/Digital Output' */

  /* Start for MATLABSystem: '<S4>/Digital Output' incorporates:
   *  Terminate for MATLABSystem: '<S4>/Digital Output'
   */
  if (Caracterizacion_DW.obj.isInitialized == 1L) {
    Caracterizacion_DW.obj.isInitialized = 2L;
  }

  /* End of Start for MATLABSystem: '<S4>/Digital Output' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
