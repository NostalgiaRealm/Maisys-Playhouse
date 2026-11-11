
/* ==== FUN_10007040 @ 10007040 ==== 
 * signature: undefined __cdecl FUN_10007040(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9, int param_10)
 * body: 10007040-10007108
 */

void __cdecl
FUN_10007040(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short local_4;
  
  iVar3 = param_10 - param_8;
  iVar1 = iVar3;
  if (iVar3 < 0) {
    iVar1 = param_8 - param_10;
  }
  iVar4 = param_6 - param_4;
  iVar2 = iVar4;
  if (iVar4 < 0) {
    iVar2 = param_4 - param_6;
  }
  local_4 = ((iVar3 < 1) - 1 & 2) - 1;
  iVar3 = iVar2 * 2 - iVar1;
  param_6._0_2_ = ((iVar4 < 1) - 1 & 2) - 1;
  if (-1 < iVar1) {
    iVar4 = param_8;
    param_8 = iVar1 + 1;
    do {
      FUN_10006ec0(param_1,param_2,param_7,param_9,param_3,param_5,param_4,iVar4);
      if (-1 < iVar3) {
        do {
          param_4 = param_4 + (short)param_6;
          iVar3 = iVar3 + iVar1 * -2;
        } while (-1 < iVar3);
      }
      iVar4 = iVar4 + local_4;
      iVar3 = iVar3 + iVar2 * 2;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return;
}


