
/* ==== FUN_11024280 @ 11024280 ==== 
 * signature: undefined __cdecl FUN_11024280(int * param_1, short * param_2, short * param_3)
 * body: 11024280-110242e7
 */

void __cdecl FUN_11024280(int *param_1,short *param_2,short *param_3)

{
  if ((param_2[2] != *param_2) && (param_2[1] != param_2[3])) {
    *param_1 = (int)(short)((((int)param_3[2] - (int)*param_3) * *param_1) /
                           ((int)param_2[2] - (int)*param_2));
    param_1[1] = (int)(short)((((int)param_3[3] - (int)param_3[1]) * param_1[1]) /
                             ((int)param_2[3] - (int)param_2[1]));
  }
  return;
}


