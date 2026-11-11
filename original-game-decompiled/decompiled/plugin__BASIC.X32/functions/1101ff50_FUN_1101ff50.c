
/* ==== FUN_1101ff50 @ 1101ff50 ==== 
 * signature: undefined4 __cdecl FUN_1101ff50(int param_1, int param_2, int param_3, undefined * param_4, undefined * param_5, undefined * param_6)
 * body: 1101ff50-11020116
 */

undefined4 __cdecl
FUN_1101ff50(int param_1,int param_2,int param_3,undefined *param_4,undefined *param_5,
            undefined *param_6)

{
  undefined4 uVar1;
  uint uVar2;
  short *psVar3;
  undefined4 *puVar4;
  
  psVar3 = (short *)0x0;
  puVar4 = (undefined4 *)0x0;
  if (param_4 != (undefined *)0x0) {
    psVar3 = FUN_1101fd40(*(uint *)(param_2 + 4),*(uint *)(param_1 + 4),
                          (uint)((int)*(uint *)(param_2 + 4) <= (int)*(uint *)(param_1 + 4)));
    uVar2 = (int)*(uint *)(param_2 + 0xc) >> 0x1f;
    puVar4 = (undefined4 *)FUN_11029420((*(uint *)(param_2 + 0xc) ^ uVar2) - uVar2);
    if ((puVar4 == (undefined4 *)0x0) || (psVar3 == (short *)0x0)) {
      if (psVar3 != (short *)0x0) {
        FUN_11029180(psVar3);
      }
      if (puVar4 != (undefined4 *)0x0) {
        FUN_11029180(puVar4);
      }
      return 0xffffffff;
    }
  }
  if (param_6 == (undefined *)0x0) {
    if (*(int *)(param_2 + 8) < *(int *)(param_1 + 8)) {
      uVar1 = FUN_11020120(param_1,param_2,param_3,param_4,param_5,psVar3,(int)puVar4);
    }
    else if (*(int *)(param_1 + 8) < *(int *)(param_2 + 8)) {
      uVar1 = FUN_110201f0(param_1,param_2,param_3,param_4,param_5,psVar3,(int)puVar4);
    }
    else if (*(int *)(param_2 + 4) == *(int *)(param_1 + 4)) {
      uVar1 = FUN_110203a0(param_1,param_2,param_3,param_5);
    }
    else {
      uVar1 = FUN_110202d0(param_1,param_2,param_3,param_4,param_5,psVar3,puVar4);
    }
  }
  else if (*(int *)(param_2 + 8) == *(int *)(param_1 + 8)) {
    if (*(int *)(param_2 + 4) == *(int *)(param_1 + 4)) {
      if ((((*(int *)(param_3 + 0xc) == 0) && (*(char *)(param_3 + 0x22) == '\0')) &&
          (*(char *)(param_3 + 0x21) == '\0')) && (*(char *)(param_3 + 0x20) == '\0')) {
        uVar1 = FUN_11020b90(param_1,param_2,param_3,param_6);
      }
      else {
        uVar1 = FUN_11020a20(param_1,param_2,param_3,param_5,param_6,puVar4);
      }
    }
    else {
      uVar1 = FUN_11020850(param_1,param_2,param_3,param_4,param_5,param_6,psVar3,puVar4);
    }
  }
  else if (*(int *)(param_2 + 8) < *(int *)(param_1 + 8)) {
    uVar1 = FUN_11020420(param_1,param_2,param_3,param_4,param_5,param_6,psVar3,(int)puVar4);
  }
  else {
    uVar1 = FUN_11020630(param_1,param_2,param_3,param_4,param_5,param_6,psVar3,(int)puVar4);
  }
  if (psVar3 != (short *)0x0) {
    FUN_11029180(psVar3);
  }
  if (puVar4 != (undefined4 *)0x0) {
    FUN_11029180(puVar4);
  }
  return uVar1;
}


