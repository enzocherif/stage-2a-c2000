/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: FORSUMMURIZE_private.h
 *
 * Code generated for Simulink model 'FORSUMMURIZE'.
 *
 * Model version                  : 6.9
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Thu Apr 25 14:38:28 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FORSUMMURIZE_private_h_
#define RTW_HEADER_FORSUMMURIZE_private_h_
#include "rtwtypes.h"
#include "FORSUMMURIZE_types.h"
#include "FORSUMMURIZE.h"

void config_ADC_A(uint16_T maxconvReg , uint16_T adcChselSEQ1Reg, uint16_T
                  adcChselSEQ2Reg, uint16_T adcChselSEQ3Reg, uint16_T
                  adcChselSEQ4Reg);
extern uint16_T MW_adcInitFlag;
void isr_int1pie1_task_fcn(void);
extern void configureGPIOExtInterrupt(void);
void isr_int1pie1_task_fcn(void);

#endif                                 /* RTW_HEADER_FORSUMMURIZE_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
