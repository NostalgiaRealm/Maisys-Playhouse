
/* ==== FUN_0043bf80 @ 0043bf80 ==== 
 * signature: undefined __cdecl FUN_0043bf80(short * param_1, short * param_2, short * param_3)
 * body: 0043bf80-0043bfe4
 */

void __cdecl FUN_0043bf80(short *param_1,short *param_2,short *param_3)

{
  *param_1 = *param_3 +
             (short)((((int)param_3[2] - (int)*param_3) * ((int)*param_1 - (int)*param_2)) /
                    ((int)param_2[2] - (int)*param_2));
  param_1[1] = (short)((((int)param_3[3] - (int)param_3[1]) * ((int)param_1[1] - (int)param_2[1])) /
                      ((int)param_2[3] - (int)param_2[1])) + param_3[1];
  return;
}


