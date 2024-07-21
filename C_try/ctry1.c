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