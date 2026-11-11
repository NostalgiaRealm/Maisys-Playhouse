
/* ==== FUN_12011110 @ 12011110 ==== 
 * signature: undefined __cdecl FUN_12011110(short * param_1, short * param_2)
 * body: 12011110-120111ca
 */

void __cdecl FUN_12011110(short *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  if (((int)param_2[2] - (int)*param_2 < (int)param_1[2] - (int)*param_1) ||
     ((int)param_2[3] - (int)param_2[1] < (int)param_1[3] - (int)param_1[1])) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  iVar3 = (int)param_1[2] - (int)*param_1;
  sVar1 = param_1[1];
  sVar2 = (short)((((int)param_2[2] - (int)*param_2) - iVar3) / 2) + *param_1;
  *param_1 = sVar2;
  param_1[2] = sVar2 + (short)iVar3;
  sVar2 = (short)((((int)param_2[3] - (int)param_2[1]) - ((int)param_1[3] - (int)sVar1)) / 2) +
          param_1[1];
  param_1[1] = sVar2;
  param_1[3] = sVar2 + (short)((int)param_1[3] - (int)sVar1);
  return;
}


