
/* ==== FUN_1200bfa0 @ 1200bfa0 ==== 
 * signature: float10 __cdecl FUN_1200bfa0(double param_1, double param_2, double param_3, double param_4, double param_5)
 * body: 1200bfa0-1200c02c
 */

float10 __cdecl
FUN_1200bfa0(double param_1,double param_2,double param_3,double param_4,double param_5)

{
  if (param_5 <= param_1) {
    return (float10)0.0;
  }
  if (param_4 <= param_1) {
    return ((((float10)param_5 - (float10)param_1) * ((float10)param_5 - (float10)param_1)) /
           ((float10)param_5 - (float10)param_4)) * (float10)0.5;
  }
  if (param_3 <= param_1) {
    return ((float10)param_5 + (float10)param_4) * (float10)0.5 - (float10)param_1;
  }
  return (((((float10)param_5 -
            (((float10)param_1 - (float10)param_2) * ((float10)param_1 - (float10)param_2)) /
            ((float10)param_3 - (float10)param_2)) - (float10)param_3) - (float10)param_2) +
         (float10)param_4) * (float10)0.5;
}


