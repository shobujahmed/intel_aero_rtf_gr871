/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_observer_ydot_api.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 12-Apr-2017 09:17:46
 */

#ifndef _CODER_OBSERVER_YDOT_API_H
#define _CODER_OBSERVER_YDOT_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_observer_ydot_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void observer_ydot(real_T meas[2], real_T u, real_T y[5]);
extern void observer_ydot_api(const mxArray *prhs[2], const mxArray *plhs[1]);
extern void observer_ydot_atexit(void);
extern void observer_ydot_initialize(void);
extern void observer_ydot_terminate(void);
extern void observer_ydot_xil_terminate(void);

#endif

/*
 * File trailer for _coder_observer_ydot_api.h
 *
 * [EOF]
 */
