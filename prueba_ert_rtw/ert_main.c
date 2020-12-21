/*
 * File: ert_main.c
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
#include "rtwtypes.h"

volatile int IsrOverrun = 0;
static boolean_T OverrunFlag = 0;
void rt_OneStep(void)
{
  /* Check for overrun. Protect OverrunFlag against preemption */
  if (OverrunFlag++) {
    IsrOverrun = 1;
    OverrunFlag--;
    return;
  }

#ifndef _MW_ARDUINO_LOOP_

  sei();

#endif;

  prueba_step();

  /* Get model outputs here */
#ifndef _MW_ARDUINO_LOOP_

  cli();

#endif;

  OverrunFlag--;
}

int main(void)
{
  volatile boolean_T runModel = 1;
  float modelBaseRate = 0.05;
  float systemClock = 0;
  init();
  MW_Arduino_Init();
  rtmSetErrorStatus(prueba_M, 0);
  prueba_initialize();
  configureArduinoAVRTimer();
  runModel =
    rtmGetErrorStatus(prueba_M) == (NULL);

#ifndef _MW_ARDUINO_LOOP_

  sei();

#endif;

  sei();
  while (runModel) {
    runModel =
      rtmGetErrorStatus(prueba_M) == (NULL);
    runModel = runModel && MW_Arduino_Loop();
  }

  /* Disable rt_OneStep() here */

  /* Terminate model */
  prueba_terminate();
  cli();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
