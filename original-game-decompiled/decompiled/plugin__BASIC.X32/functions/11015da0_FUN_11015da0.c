
/* ==== FUN_11015da0 @ 11015da0 ==== 
 * signature: undefined __cdecl FUN_11015da0(int * param_1, short * param_2, short param_3)
 * body: 11015da0-11015e0c
 */

void __cdecl FUN_11015da0(int *param_1,short *param_2,short param_3)

{
  int iVar1;
  
  *param_1 = (int)param_2[2];
  param_1[1] = (int)param_2[1];
  param_1[2] = (int)param_2[2];
  param_1[3] = (int)param_2[3];
  param_1[4] = (int)*param_2;
  param_1[5] = (int)param_2[3];
  iVar1 = (int)param_3;
  param_1[6] = *param_2 + iVar1;
  param_1[7] = param_2[3] - iVar1;
  param_1[8] = param_2[2] - iVar1;
  param_1[9] = param_2[3] - iVar1;
  param_1[10] = param_2[2] - iVar1;
  param_1[0xb] = param_2[1] + iVar1;
  return;
}


