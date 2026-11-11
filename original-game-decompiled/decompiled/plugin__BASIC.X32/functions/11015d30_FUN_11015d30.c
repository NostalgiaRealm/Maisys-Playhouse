
/* ==== FUN_11015d30 @ 11015d30 ==== 
 * signature: undefined __cdecl FUN_11015d30(int * param_1, short * param_2, short param_3)
 * body: 11015d30-11015d9a
 */

void __cdecl FUN_11015d30(int *param_1,short *param_2,short param_3)

{
  int iVar1;
  
  *param_1 = (int)*param_2;
  param_1[1] = (int)param_2[1];
  param_1[2] = (int)param_2[2];
  param_1[3] = (int)param_2[1];
  iVar1 = (int)param_3;
  param_1[4] = param_2[2] - iVar1;
  param_1[5] = param_2[1] + iVar1;
  param_1[6] = *param_2 + iVar1;
  param_1[7] = param_2[1] + iVar1;
  param_1[8] = *param_2 + iVar1;
  param_1[9] = param_2[3] - iVar1;
  param_1[10] = (int)*param_2;
  param_1[0xb] = (int)param_2[3];
  return;
}


