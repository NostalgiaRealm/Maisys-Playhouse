
/* ==== FUN_00415f50 @ 00415f50 ==== 
 * signature: undefined4 __cdecl FUN_00415f50(short * param_1, short * param_2, int * param_3)
 * body: 00415f50-0041606d
 */

undefined4 __cdecl FUN_00415f50(short *param_1,short *param_2,int *param_3)

{
  short sVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  
  sVar1 = *param_1;
  if (sVar1 < 0xc) {
    if (sVar1 < 9) {
      if (sVar1 == 0) {
        *param_2 = 0;
        return 0;
      }
      if (sVar1 != 1) {
        return 0x10000;
      }
    }
  }
  else if (sVar1 < 0x15) {
    if ((sVar1 != 0x14) && (sVar1 != 0xd)) {
      if (sVar1 < 0xf) {
        return 0x10000;
      }
      if (0x10 < sVar1) {
        return 0x10000;
      }
    }
  }
  else if (sVar1 < 0x67) {
    if ((sVar1 < 100) && (sVar1 != 0x17)) {
      return 0x10000;
    }
  }
  else if (sVar1 < 0x6e) {
    if (sVar1 != 0x6d) {
      if (sVar1 != 0x69) {
        return 0x10000;
      }
LAB_0041601a:
      uVar3 = FUN_00453840(param_1,(undefined4 *)param_2,param_3);
      return uVar3;
    }
  }
  else {
    if (sVar1 < 0x77) {
      if (sVar1 == 0x76) {
        if (((param_3 != (int *)0x0) && (*(char **)(param_1 + 7) != (char *)0x0)) &&
           (bVar2 = FUN_00453ea0((int)param_3,*(char **)(param_1 + 7),param_2), bVar2)) {
          return 0;
        }
        return 0x10000;
      }
      if (sVar1 != 0x73) {
        return 0x10000;
      }
      goto LAB_0041601a;
    }
    if (sVar1 != 0x7c) {
      if (sVar1 != 0x32d5) {
        return 0x10000;
      }
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)param_2 = *(undefined4 *)param_1;
        param_1 = param_1 + 2;
        param_2 = param_2 + 2;
      }
      return 0;
    }
  }
  uVar3 = FUN_00482ec0(0,param_2,param_1);
  return uVar3;
}


