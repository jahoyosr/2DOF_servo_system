/*
 * File: prueba.c
 *
 * Code generated for Simulink model 'prueba'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Sun May 14 23:56:59 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "prueba.h"
#include "prueba_private.h"

/* Block states (auto storage) */
DW_prueba_T prueba_DW;

/* Real-time model */
RT_MODEL_prueba_T prueba_M_;
RT_MODEL_prueba_T *const prueba_M = &prueba_M_;

/* Model step function */
void prueba_step(void)
{
  real_T rtb_PulseGenerator;
  uint8_T rtb_PulseGenerator_0;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_PulseGenerator = (prueba_DW.clockTickCounter <
                        prueba_P.PulseGenerator_Duty) &&
    (prueba_DW.clockTickCounter >= 0L) ? prueba_P.PulseGenerator_Amp : 0.0;
  if (prueba_DW.clockTickCounter >= prueba_P.PulseGenerator_Period - 1.0) {
    prueba_DW.clockTickCounter = 0L;
  } else {
    prueba_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* DataTypeConversion: '<S1>/Data Type Conversion' */
  if (rtb_PulseGenerator < 256.0) {
    if (rtb_PulseGenerator >= 0.0) {
      rtb_PulseGenerator_0 = (uint8_T)rtb_PulseGenerator;
    } else {
      rtb_PulseGenerator_0 = 0U;
    }
  } else {
    rtb_PulseGenerator_0 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S1>/Data Type Conversion' */

  /* S-Function (arduinodigitaloutput_sfcn): '<S1>/Digital Output' */
  MW_digitalWrite(prueba_P.DigitalOutput_pinNumber, rtb_PulseGenerator_0);
}

/* Model initialize function */
void prueba_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(prueba_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&prueba_DW, 0,
                sizeof(DW_prueba_T));

  /* Start for DiscretePulseGenerator: '<Root>/Pulse Generator' */
  prueba_DW.clockTickCounter = 0L;

  /* Start for S-Function (arduinodigitaloutput_sfcn): '<S1>/Digital Output' */
  MW_pinModeOutput(prueba_P.DigitalOutput_pinNumber);
}

/* Model terminate function */
void prueba_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
