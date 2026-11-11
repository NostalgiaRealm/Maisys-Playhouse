
/* ==== FUN_120212a0 @ 120212a0 ==== 
 * signature: undefined4 __cdecl FUN_120212a0(int param_1, uint * param_2, undefined4 param_3, short * param_4)
 * body: 120212a0-12021590
 */

undefined4 __cdecl FUN_120212a0(int param_1,uint *param_2,undefined4 param_3,short *param_4)

{
  short *psVar1;
  uint uVar2;
  code *pcVar3;
  int local_4;
  
  uVar2 = FUN_120271d0(param_2,(uint *)s_windowtitle_12037c64);
  if (((char)uVar2 != '\0') && (*(short *)(param_1 + 0x44) == 1)) {
    if ((*param_4 != 0x66) && (*param_4 != 0x6a)) {
      pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_4);
      DAT_12039a9c = (*pcVar3)(local_4,param_1,param_1,param_4);
      return DAT_12039a9c;
    }
    *param_4 = 0x66;
    psVar1 = param_4 + 7;
    param_4[1] = -1;
    param_4[2] = -1;
    param_4[3] = 0;
    param_4[4] = 0;
    param_4[5] = 0;
    param_4[6] = 0;
    psVar1[0] = 0;
    psVar1[1] = 0;
    if (*(int *)(param_1 + 10) != -1 && -1 < *(int *)(param_1 + 10) + 1) {
      pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&local_4);
      DAT_12039a9c = (*pcVar3)(local_4,psVar1,*(int *)(param_1 + 10) + 1);
      if (*(undefined1 **)psVar1 != (undefined1 *)0x0) {
        *(int *)(param_4 + 3) = *(int *)(param_1 + 10) + 1;
        **(undefined1 **)psVar1 = 0;
      }
    }
    FUN_120273e0(0,param_4,param_1);
    return 0;
  }
  uVar2 = FUN_120271d0(param_2,(uint *)s_windowstyle_12037c50);
  if ((char)uVar2 != '\0') {
    if ((*param_4 != 0x66) && (*param_4 != 0x6a)) {
      pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_4);
      DAT_12039a9c = (*pcVar3)(local_4,param_1,param_1 + 0x12,param_4);
      return DAT_12039a9c;
    }
    *param_4 = 0x66;
    psVar1 = param_4 + 7;
    param_4[1] = -1;
    param_4[2] = -1;
    param_4[3] = 0;
    param_4[4] = 0;
    param_4[5] = 0;
    param_4[6] = 0;
    psVar1[0] = 0;
    psVar1[1] = 0;
    if (*(int *)(param_1 + 0x1c) != -1 && -1 < *(int *)(param_1 + 0x1c) + 1) {
      pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&local_4);
      DAT_12039a9c = (*pcVar3)(local_4,psVar1,*(int *)(param_1 + 0x1c) + 1);
      if (*(undefined1 **)psVar1 != (undefined1 *)0x0) {
        *(int *)(param_4 + 3) = *(int *)(param_1 + 0x1c) + 1;
        **(undefined1 **)psVar1 = 0;
      }
    }
    FUN_120273e0(0,param_4,param_1 + 0x12);
    return 0;
  }
  uVar2 = FUN_120271d0(param_2,(uint *)s_windowsize_12037c3c);
  if ((char)uVar2 != '\0') {
    if ((*param_4 != 10) && (*param_4 != 0x6a)) {
      pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_4);
      DAT_12039a9c = (*pcVar3)(local_4,param_1,param_1 + 0x2e,param_4);
      return DAT_12039a9c;
    }
    *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x2e);
    param_4[2] = *(short *)(param_1 + 0x32);
    return 0;
  }
  uVar2 = FUN_120271d0(param_2,(uint *)s_windowposition_12037c28);
  if ((char)uVar2 == '\0') {
    return 0x10000;
  }
  if ((*param_4 != 10) && (*param_4 != 0x6a)) {
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_4);
    DAT_12039a9c = (*pcVar3)(local_4,param_1,param_1 + 0x34,param_4);
    return DAT_12039a9c;
  }
  *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x34);
  param_4[2] = *(short *)(param_1 + 0x38);
  return 0;
}


