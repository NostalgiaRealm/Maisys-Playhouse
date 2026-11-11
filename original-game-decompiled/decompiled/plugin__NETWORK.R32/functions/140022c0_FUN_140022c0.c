
/* ==== FUN_140022c0 @ 140022c0 ==== 
 * signature: undefined4 __cdecl FUN_140022c0(int param_1, int param_2, undefined4 param_3, short param_4)
 * body: 140022c0-140027f0
 */

undefined4 __cdecl FUN_140022c0(int param_1,int param_2,undefined4 param_3,short param_4)

{
  code *pcVar1;
  short local_22;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (param_4 < 3) {
    if (-1 < param_4) {
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_20);
      DAT_14028e48 = (*pcVar1)(local_20,param_1 + 4);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_1c);
      DAT_14028e48 = (*pcVar1)(iStack_1c,param_1 + 0xe);
      if (0 < param_4) {
        pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_20);
        DAT_14028e48 = (*pcVar1)(local_20,param_1 + 0x2a);
        if (*(int *)(param_1 + 0x3e) != 0) {
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_20);
          DAT_14028e48 = (*pcVar1)(local_20,*(undefined4 *)(param_1 + 0x3e));
          *(undefined4 *)(param_1 + 0x3e) = 0;
          *(undefined4 *)(param_1 + 0x36) = 0;
          *(undefined4 *)(param_1 + 0x3a) = 0;
        }
        pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_20);
        DAT_14028e48 = (*pcVar1)(local_20,param_1 + 0x30);
        if (*(int *)(param_1 + 0x50) != 0) {
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_20);
          DAT_14028e48 = (*pcVar1)(local_20,*(undefined4 *)(param_1 + 0x50));
          *(undefined4 *)(param_1 + 0x50) = 0;
          *(undefined4 *)(param_1 + 0x48) = 0;
          *(undefined4 *)(param_1 + 0x4c) = 0;
        }
        pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_20);
        DAT_14028e48 = (*pcVar1)(local_20,param_1 + 0x42);
        pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_1c);
        DAT_14028e48 = (*pcVar1)(iStack_1c,param_1 + 0x18);
        pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_18);
        DAT_14028e48 = (*pcVar1)(iStack_18,param_1 + 0x1e);
        pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_14);
        DAT_14028e48 = (*pcVar1)(iStack_14,param_1 + 0x24);
        if (param_4 == 2) {
          pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_20);
          DAT_14028e48 = (*pcVar1)(local_20,param_1 + 0x54);
          pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_1c);
          DAT_14028e48 = (*pcVar1)(iStack_1c,param_1 + 0x5a);
          pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_18);
          DAT_14028e48 = (*pcVar1)(iStack_18,param_1 + 0x60);
          pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_14);
          DAT_14028e48 = (*pcVar1)(iStack_14,param_1 + 0x66);
        }
      }
      return 0;
    }
    return 0x10000;
  }
  pcVar1 = (code *)FUN_14008ab0(param_2,1,8,&local_20);
  DAT_14028e48 = (*pcVar1)(local_20,&local_22,1);
  if (local_22 == 3) {
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_20);
    DAT_14028e48 = (*pcVar1)(local_20,param_1 + 4);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_1c);
    DAT_14028e48 = (*pcVar1)(iStack_1c,param_1 + 0xe);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_18);
    DAT_14028e48 = (*pcVar1)(iStack_18,param_1 + 0x2a);
    if (*(int *)(param_1 + 0x3e) != 0) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_20);
      DAT_14028e48 = (*pcVar1)(local_20,*(undefined4 *)(param_1 + 0x3e));
      *(undefined4 *)(param_1 + 0x3e) = 0;
      *(undefined4 *)(param_1 + 0x36) = 0;
      *(undefined4 *)(param_1 + 0x3a) = 0;
    }
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_20);
    DAT_14028e48 = (*pcVar1)(local_20,param_1 + 0x30);
    if (*(int *)(param_1 + 0x50) != 0) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_20);
      DAT_14028e48 = (*pcVar1)(local_20,*(undefined4 *)(param_1 + 0x50));
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_20);
    DAT_14028e48 = (*pcVar1)(local_20,param_1 + 0x42);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_1c);
    DAT_14028e48 = (*pcVar1)(iStack_1c,param_1 + 0x18);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_18);
    DAT_14028e48 = (*pcVar1)(iStack_18,param_1 + 0x1e);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_14);
    DAT_14028e48 = (*pcVar1)(iStack_14,param_1 + 0x24);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_10);
    DAT_14028e48 = (*pcVar1)(iStack_10,param_1 + 0x54);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_c);
    DAT_14028e48 = (*pcVar1)(iStack_c,param_1 + 0x5a);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_8);
    DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 0x60);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_4);
    DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 0x66);
    return 0;
  }
  return 0x10000;
}


