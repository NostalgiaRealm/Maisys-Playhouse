
/* ==== FUN_0043acf0 @ 0043acf0 ==== 
 * signature: undefined4 __cdecl FUN_0043acf0(int param_1, int param_2, int param_3, undefined * param_4, undefined * param_5, undefined * param_6)
 * body: 0043acf0-0043aec4
 */

undefined4 __cdecl
FUN_0043acf0(int param_1,int param_2,int param_3,undefined *param_4,undefined *param_5,
            undefined *param_6)

{
  undefined4 uVar1;
  uint uVar2;
  short *psVar3;
  undefined4 *local_8;
  
  psVar3 = (short *)0x0;
  local_8 = (undefined4 *)0x0;
  if (param_4 != (undefined *)0x0) {
    psVar3 = FUN_0043aae0(*(uint *)(param_2 + 4),*(uint *)(param_1 + 4),
                          (uint)((int)*(uint *)(param_2 + 4) <= (int)*(uint *)(param_1 + 4)));
    uVar2 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
    local_8 = (undefined4 *)FUN_00490210((*(uint *)(param_2 + 0xc) ^ uVar2) - uVar2);
    if ((local_8 == (undefined4 *)0x0) || (psVar3 == (short *)0x0)) {
      if (psVar3 != (short *)0x0) {
        FUN_0048e750(psVar3);
      }
      if (local_8 != (undefined4 *)0x0) {
        FUN_0048e750(local_8);
      }
      return 0xffffffff;
    }
  }
  if (param_6 == (undefined *)0x0) {
    if (*(int *)(param_2 + 8) < *(int *)(param_1 + 8)) {
      uVar1 = FUN_0043aed0(param_1,param_2,param_3,param_4,param_5,psVar3,(int)local_8);
    }
    else if (*(int *)(param_1 + 8) < *(int *)(param_2 + 8)) {
      uVar1 = FUN_0043af90(param_1,param_2,param_3,param_4,param_5,psVar3,(int)local_8);
    }
    else if (*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) {
      uVar1 = FUN_0043b130(param_1,param_2,param_3,param_5);
    }
    else {
      uVar1 = FUN_0043b060(param_1,param_2,param_3,param_4,param_5,psVar3,local_8);
    }
  }
  else if (*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) {
    if (*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) {
      if ((((*(int *)(param_3 + 0xc) == 0) && (*(char *)(param_3 + 0x22) == '\0')) &&
          (*(char *)(param_3 + 0x21) == '\0')) && (*(char *)(param_3 + 0x20) == '\0')) {
        uVar1 = FUN_0043b860(param_1,param_2,param_3,param_6);
      }
      else {
        uVar1 = FUN_0043b710(param_1,param_2,param_3,param_5,param_6,local_8);
      }
    }
    else {
      uVar1 = FUN_0043b570(param_1,param_2,param_3,param_4,param_5,param_6,psVar3,local_8);
    }
  }
  else if (*(int *)(param_2 + 8) < *(int *)(param_1 + 8)) {
    uVar1 = FUN_0043b1b0(param_1,param_2,param_3,param_4,param_5,param_6,psVar3,(int)local_8);
  }
  else {
    uVar1 = FUN_0043b380(param_1,param_2,param_3,param_4,param_5,param_6,psVar3,(int)local_8);
  }
  if (psVar3 != (short *)0x0) {
    FUN_0048e750(psVar3);
  }
  if (local_8 != (undefined4 *)0x0) {
    FUN_0048e750(local_8);
  }
  return uVar1;
}


