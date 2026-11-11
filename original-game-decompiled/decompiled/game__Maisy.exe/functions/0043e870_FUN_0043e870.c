
/* ==== FUN_0043e870 @ 0043e870 ==== 
 * signature: int * __cdecl FUN_0043e870(int * param_1, int * param_2, int param_3)
 * body: 0043e870-0043e945
 */

int * __cdecl FUN_0043e870(int *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_8;
  
  local_8 = 0;
  if (param_2 == (int *)0x0) {
    return (int *)0x0;
  }
  if (param_1 == (int *)0x0) {
    iVar4 = 1;
    uVar1 = FUN_0046e970((int)DAT_004dc564);
    param_1 = (int *)0x0;
    if (0 < (short)uVar1) {
      do {
        iVar2 = FUN_0046e950(DAT_004dc564,(short)iVar4);
        if (((iVar2 != 0) && (param_1 = (int *)FUN_00458a00(iVar2), param_1 != (int *)0x0)) &&
           (param_1[3] == *param_2)) break;
        param_1 = (int *)0x0;
        iVar4 = iVar4 + 1;
      } while (iVar4 <= (short)uVar1);
    }
  }
  if (param_1 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    iVar4 = 8;
    piVar3 = param_2 + 7;
    do {
      if (*piVar3 != 0) break;
      piVar3 = piVar3 + -1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    piVar3 = FUN_0043e510(param_1,(short)iVar4 + -1,(int)(param_2 + 1),(int *)&stack0x00000010,
                          &local_8);
    if (piVar3 == (int *)0x0) {
      return (int *)0x0;
    }
    if ((piVar3[3] != param_3) && (local_8 != param_3)) {
      piVar3 = FUN_0043e350(piVar3,param_3,(int *)&stack0x00000010);
      return piVar3;
    }
  }
  return piVar3;
}


