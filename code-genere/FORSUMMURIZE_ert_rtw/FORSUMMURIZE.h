/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: FORSUMMURIZE.h
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

#ifndef RTW_HEADER_FORSUMMURIZE_h_
#define RTW_HEADER_FORSUMMURIZE_h_
#ifndef FORSUMMURIZE_COMMON_INCLUDES_
#define FORSUMMURIZE_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP2833x_Examples.h"
#include "IQmathLib.h"
#endif                                 /* FORSUMMURIZE_COMMON_INCLUDES_ */

#include "FORSUMMURIZE_types.h"
#include <stddef.h>
#include <string.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

extern void config_ePWM_GPIO (void);
extern void config_ePWM_TBSync (void);
extern void config_ePWM_GPIO (void);
extern void config_ePWM_XBAR(void);
extern void config_ePWM_TBSync(void);

/* Block signals (default storage) */
typedef struct {
  uint16_T ADC;                        /* '<S1>/ADC' */
} BlockIO_FORSUMMURIZE;

/* Parameters (default storage) */
struct Parameters_FORSUMMURIZE_ {
  real_T Constant_Value;               /* Expression: 4096
                                        * Referenced by: '<S1>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_FORSUMMURIZE {
  const char_T * volatile errorStatus;
};

/* Block parameters (default storage) */
extern Parameters_FORSUMMURIZE FORSUMMURIZE_P;

/* Block signals (default storage) */
extern BlockIO_FORSUMMURIZE FORSUMMURIZE_B;

/* Model entry point functions */
extern void FORSUMMURIZE_initialize(void);
extern void FORSUMMURIZE_terminate(void);
extern volatile boolean_T runModel;

/* Real-time Model object */
extern RT_MODEL_FORSUMMURIZE *const FORSUMMURIZE_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

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
 * '<Root>' : 'FORSUMMURIZE'
 * '<S1>'   : 'FORSUMMURIZE/ADC-PWM Subsystem'
 */
#endif                                 /* RTW_HEADER_FORSUMMURIZE_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
