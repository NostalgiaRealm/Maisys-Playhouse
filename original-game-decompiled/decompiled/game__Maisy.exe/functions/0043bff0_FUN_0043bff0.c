
/* ==== FUN_0043bff0 @ 0043bff0 ==== 
 * signature: undefined __cdecl FUN_0043bff0(short * param_1, short * param_2, short * param_3)
 * body: 0043bff0-0043c15d
 */

void __cdecl FUN_0043bff0(short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_2[2] - (int)*param_2;
  iVar2 = (int)param_2[3] - (int)param_2[1];
  sVar1 = *param_3;
  iVar3 = (int)param_3[2] - (int)sVar1;
  iVar4 = (int)param_3[3] - (int)param_3[1];
  if (iVar3 == iVar5) {
    *param_1 = *param_1 + (sVar1 - *param_2);
    param_1[2] = param_1[2] + (*param_3 - *param_2);
  }
  else if (iVar5 == 0) {
    if (*param_1 == param_1[2]) {
      *param_1 = sVar1;
      param_1[2] = param_3[2];
    }
    else {
      param_1[2] = 0;
      *param_1 = 0;
    }
  }
  else {
    *param_1 = sVar1 + (short)((((int)*param_1 - (int)*param_2) * iVar3) / iVar5);
    param_1[2] = *param_3 +
                 (short)((((int)param_1[2] - (int)*param_2) * iVar3 + -1 + iVar5) / iVar5);
  }
  if (iVar2 == iVar4) {
    param_1[1] = param_1[1] + (param_3[1] - param_2[1]);
    param_1[3] = param_1[3] + (param_3[1] - param_2[1]);
    return;
  }
  if (iVar2 != 0) {
    param_1[1] = param_3[1] + (short)((((int)param_1[1] - (int)param_2[1]) * iVar4) / iVar2);
    param_1[3] = param_3[1] +
                 (short)((((int)param_1[3] - (int)param_2[1]) * iVar4 + -1 + iVar2) / iVar2);
    return;
  }
  if (param_1[1] == param_1[3]) {
    param_1[1] = param_3[1];
    param_1[3] = param_3[3];
    return;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  return;
}


