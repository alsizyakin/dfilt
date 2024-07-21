
/*
 * Include Files
 *
 */
#if defined(MATLAB_MEX_FILE)
#include "tmwtypes.h"
#include "simstruc_types.h"
#else
#include "rtwtypes.h"
#endif



/* %%%-SFUNWIZ_wrapper_includes_Changes_BEGIN --- EDIT HERE TO _END */
#include <math.h>
/* %%%-SFUNWIZ_wrapper_includes_Changes_END --- EDIT HERE TO _BEGIN */
#define u_width 1
#define y_width 1

/*
 * Create external references here.  
 *
 */
/* %%%-SFUNWIZ_wrapper_externs_Changes_BEGIN --- EDIT HERE TO _END */
/* extern double func(double a); */
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Output function
 *
 */
void stest_Outputs_wrapper(const real_T *u0,
			real_T *y0)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
static real_T filVal = 0;
static float med1 = 0;
static float med2 = 0;
static float med3 = 0;
double k = 0.2725;
float middle;
med3 = med2;
med2 = med1;
med1 = *u0;

if ((med1 <= med2) && (med1 <= med3)) {
  middle = (med2 <= med3) ? med2 : med3;
} else if ((med2 <= med1) && (med2 <= med3)) {
      middle = (med1 <= med3) ? med1 : med3;
  } else middle = (med1 <= med2) ? med1 : med2;

filVal += (middle - filVal) * k;
 

*y0 = filVal;
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}


