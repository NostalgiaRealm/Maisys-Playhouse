
/* ==== FUN_1101fe80 @ 1101fe80 ==== 
 * signature: undefined __cdecl FUN_1101fe80(int * param_1, int * param_2, int * param_3)
 * body: 1101fe80-1101ff4f
 */

void __cdecl FUN_1101fe80(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *param_2;
  iVar3 = param_2[3] - param_2[1];
  iVar6 = param_2[2] - iVar1;
  iVar2 = *param_3;
  iVar4 = param_3[2] - iVar2;
  iVar5 = param_3[3] - param_3[1];
  if (iVar4 == iVar6) {
    *param_1 = *param_1 + (iVar2 - iVar1);
    param_1[2] = param_1[2] + (*param_3 - *param_2);
  }
  else {
    *param_1 = ((*param_1 - iVar1) * iVar4) / iVar6 + iVar2;
    param_1[2] = *param_3 + ((param_1[2] - *param_2) * iVar4) / iVar6;
  }
  if (iVar5 == iVar3) {
    param_1[1] = param_1[1] + (param_3[1] - param_2[1]);
    param_1[3] = param_1[3] + (param_3[1] - param_2[1]);
    return;
  }
  param_1[1] = param_3[1] + ((param_1[1] - param_2[1]) * iVar5) / iVar3;
  param_1[3] = param_3[1] + ((param_1[3] - param_2[1]) * iVar5) / iVar3;
  return;
}


