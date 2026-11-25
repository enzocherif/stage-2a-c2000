/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BY.h
 *
 * Code generated for Simulink model 'BY'.
 *
 * Model version                  : 6.7
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Tue Aug 13 15:15:27 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_BY_h_
#define RTW_HEADER_BY_h_
#ifndef BY_COMMON_INCLUDES_
#define BY_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP2833x_Examples.h"
#include "IQmathLib.h"
#endif                                 /* BY_COMMON_INCLUDES_ */

#include "BY_types.h"
#include <stddef.h>
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
  real_T ADC;                          /* '<S1>/ADC' */
} BlockIO_BY;

/* Parameters (default storage) */
struct Parameters_BY_ {
  real_T DUTY_Value;                   /* Expression: 0.48
                                        * Referenced by: '<S1>/DUTY'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_BY {
  const char_T * volatile errorStatus;
};

/* Block parameters (default storage) */
extern Parameters_BY BY_P;

/* Block signals (default storage) */
extern BlockIO_BY BY_B;

/* Model entry point functions */
extern void BY_initialize(void);
extern void BY_terminate(void);
extern volatile boolean_T runModel;

/* Real-time Model object */
extern RT_MODEL_BY *const BY_M;
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
 * '<Root>' : 'BY'
 * '<S1>'   : 'BY/ADC-PWM Subsystem'
 */
#endif                                 /* RTW_HEADER_BY_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
