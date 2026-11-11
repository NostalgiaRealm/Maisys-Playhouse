
/* ==== FUN_12024ea0 @ 12024ea0 ==== 
 * signature: undefined4 __cdecl FUN_12024ea0(int param_1, int param_2, undefined4 param_3, short param_4)
 * body: 12024ea0-120253d4
 */

undefined4 __cdecl FUN_12024ea0(int param_1,int param_2,undefined4 param_3,short param_4)

{
  code *pcVar1;
  short local_1a;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (param_4 < 1) {
    if (param_4 == 0) {
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_18);
      DAT_12039a9c = (*pcVar1)(local_18,param_1 + 0x58);
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_14);
      DAT_12039a9c = (*pcVar1)(iStack_14,param_1 + 0x62);
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_10);
      DAT_12039a9c = (*pcVar1)(iStack_10,param_1 + 0x6c);
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_c);
      DAT_12039a9c = (*pcVar1)(iStack_c,param_1);
      pcVar1 = (code *)FUN_12027370(param_2,1,10,&iStack_8);
      DAT_12039a9c = (*pcVar1)(iStack_8,*(undefined4 *)(param_1 + 0x1e),3);
      **(undefined4 **)(param_1 + 0xe) = **(undefined4 **)(param_1 + 0x1e);
      **(undefined4 **)(param_1 + 0x16) = **(undefined4 **)(param_1 + 0xe);
      *(undefined4 *)(*(int *)(param_1 + 0x16) + 4) = *(undefined4 *)(*(int *)(param_1 + 0x1e) + 4);
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_4);
      DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x76);
      return 0;
    }
    return 0x10000;
  }
  pcVar1 = (code *)FUN_12027370(param_2,1,8,&local_18);
  DAT_12039a9c = (*pcVar1)(local_18,&local_1a,1);
  if (local_1a == 2) {
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_18);
    DAT_12039a9c = (*pcVar1)(local_18,param_1 + 0x58);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_14);
    DAT_12039a9c = (*pcVar1)(iStack_14,param_1 + 0x62);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_10);
    DAT_12039a9c = (*pcVar1)(iStack_10,param_1 + 0x6c);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_c);
    DAT_12039a9c = (*pcVar1)(iStack_c,param_1);
    pcVar1 = (code *)FUN_12027370(param_2,1,10,&iStack_8);
    DAT_12039a9c = (*pcVar1)(iStack_8,*(undefined4 *)(param_1 + 0x1e),3);
    **(undefined4 **)(param_1 + 0xe) = **(undefined4 **)(param_1 + 0x1e);
    **(undefined4 **)(param_1 + 0x16) = **(undefined4 **)(param_1 + 0xe);
    *(undefined4 *)(*(int *)(param_1 + 0x16) + 4) = *(undefined4 *)(*(int *)(param_1 + 0x1e) + 4);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_4);
    DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x76);
    if ((*(byte *)(param_1 + 0x7b) & 0x20) != 0) {
      if (*(int *)(param_1 + 0x30) != 0) {
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_18);
        DAT_12039a9c = (*pcVar1)(local_18,*(undefined4 *)(param_1 + 0x30));
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      *(undefined2 *)(param_1 + 0x22) = 0x66;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_18);
      DAT_12039a9c = (*pcVar1)(local_18,(undefined2 *)(param_1 + 0x22));
    }
    if ((*(byte *)(param_1 + 0x7b) & 0x40) != 0) {
      if (*(int *)(param_1 + 0x42) != 0) {
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_18);
        DAT_12039a9c = (*pcVar1)(local_18,*(undefined4 *)(param_1 + 0x42));
        *(undefined4 *)(param_1 + 0x42) = 0;
        *(undefined4 *)(param_1 + 0x3a) = 0;
        *(undefined4 *)(param_1 + 0x3e) = 0;
      }
      *(undefined2 *)(param_1 + 0x34) = 0x66;
      *(undefined4 *)(param_1 + 0x3a) = 0;
      *(undefined4 *)(param_1 + 0x3e) = 0;
      *(undefined4 *)(param_1 + 0x42) = 0;
      *(undefined4 *)(param_1 + 0x36) = 0xffffffff;
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_18);
      DAT_12039a9c = (*pcVar1)(local_18,(undefined2 *)(param_1 + 0x34));
    }
    if ((*(byte *)(param_1 + 0x7b) & 0x80) != 0) {
      if (*(int *)(param_1 + 0x54) != 0) {
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_18);
        DAT_12039a9c = (*pcVar1)(local_18,*(undefined4 *)(param_1 + 0x54));
        *(undefined4 *)(param_1 + 0x54) = 0;
        *(undefined4 *)(param_1 + 0x4c) = 0;
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      *(undefined2 *)(param_1 + 0x46) = 0x66;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_18);
      DAT_12039a9c = (*pcVar1)(local_18,(undefined2 *)(param_1 + 0x46));
    }
    return 0;
  }
  if (local_1a == 1) {
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_18);
    DAT_12039a9c = (*pcVar1)(local_18,param_1 + 0x58);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_14);
    DAT_12039a9c = (*pcVar1)(iStack_14,param_1 + 0x62);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_10);
    DAT_12039a9c = (*pcVar1)(iStack_10,param_1 + 0x6c);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_c);
    DAT_12039a9c = (*pcVar1)(iStack_c,param_1);
    pcVar1 = (code *)FUN_12027370(param_2,1,10,&iStack_8);
    DAT_12039a9c = (*pcVar1)(iStack_8,*(undefined4 *)(param_1 + 0x1e),3);
    **(undefined4 **)(param_1 + 0xe) = **(undefined4 **)(param_1 + 0x1e);
    **(undefined4 **)(param_1 + 0x16) = **(undefined4 **)(param_1 + 0xe);
    *(undefined4 *)(*(int *)(param_1 + 0x16) + 4) = *(undefined4 *)(*(int *)(param_1 + 0x1e) + 4);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_4);
    DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x76);
    return 0;
  }
  return 0x10000;
}


