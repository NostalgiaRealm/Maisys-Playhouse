
/* ==== FUN_120139e0 @ 120139e0 ==== 
 * signature: undefined4 __cdecl FUN_120139e0(int param_1, int param_2)
 * body: 120139e0-12013e2d
 */

undefined4 __cdecl FUN_120139e0(int param_1,int param_2)

{
  code *pcVar1;
  short local_a;
  int local_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_12027370(param_2,1,8,&local_8);
  DAT_12039a9c = (*pcVar1)(local_8,&local_a,1);
  if (local_a == 2) {
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_8);
    DAT_12039a9c = (*pcVar1)(local_8,param_1);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_4);
    DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 10);
    if (*(int *)(param_1 + 0x22) != 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_8);
      DAT_12039a9c = (*pcVar1)(local_8,*(undefined4 *)(param_1 + 0x22));
      *(undefined4 *)(param_1 + 0x22) = 0;
      *(undefined4 *)(param_1 + 0x1a) = 0;
      *(undefined4 *)(param_1 + 0x1e) = 0;
    }
    *(undefined2 *)(param_1 + 0x14) = 0x66;
    *(undefined4 *)(param_1 + 0x1a) = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0;
    *(undefined4 *)(param_1 + 0x22) = 0;
    *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_8);
    DAT_12039a9c = (*pcVar1)(local_8,(undefined2 *)(param_1 + 0x14));
    if (*(int *)(param_1 + 0x34) != 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_8);
      DAT_12039a9c = (*pcVar1)(local_8,*(undefined4 *)(param_1 + 0x34));
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    *(undefined2 *)(param_1 + 0x26) = 0x66;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_8);
    DAT_12039a9c = (*pcVar1)(local_8,(undefined2 *)(param_1 + 0x26));
    if (*(int *)(param_1 + 0x46) != 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_8);
      DAT_12039a9c = (*pcVar1)(local_8,*(undefined4 *)(param_1 + 0x46));
      *(undefined4 *)(param_1 + 0x46) = 0;
      *(undefined4 *)(param_1 + 0x3e) = 0;
      *(undefined4 *)(param_1 + 0x42) = 0;
    }
    *(undefined2 *)(param_1 + 0x38) = 0x66;
    *(undefined4 *)(param_1 + 0x3e) = 0;
    *(undefined4 *)(param_1 + 0x42) = 0;
    *(undefined4 *)(param_1 + 0x46) = 0;
    *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_8);
    DAT_12039a9c = (*pcVar1)(local_8,(undefined2 *)(param_1 + 0x38));
    if (*(int *)(param_1 + 0x58) != 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_8);
      DAT_12039a9c = (*pcVar1)(local_8,*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    *(undefined2 *)(param_1 + 0x4a) = 0x66;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_8);
    DAT_12039a9c = (*pcVar1)(local_8,(undefined2 *)(param_1 + 0x4a));
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_4);
    DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x5c);
    return 0;
  }
  if (local_a == 1) {
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_8);
    DAT_12039a9c = (*pcVar1)(local_8,param_1);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_4);
    DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 10);
    if (*(int *)(param_1 + 0x22) != 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_8);
      DAT_12039a9c = (*pcVar1)(local_8,*(undefined4 *)(param_1 + 0x22));
      *(undefined4 *)(param_1 + 0x22) = 0;
      *(undefined4 *)(param_1 + 0x1a) = 0;
      *(undefined4 *)(param_1 + 0x1e) = 0;
    }
    *(undefined2 *)(param_1 + 0x14) = 0x66;
    *(undefined4 *)(param_1 + 0x1a) = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0;
    *(undefined4 *)(param_1 + 0x22) = 0;
    *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_8);
    DAT_12039a9c = (*pcVar1)(local_8,(undefined2 *)(param_1 + 0x14));
    if (*(int *)(param_1 + 0x34) != 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_8);
      DAT_12039a9c = (*pcVar1)(local_8,*(undefined4 *)(param_1 + 0x34));
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    *(undefined2 *)(param_1 + 0x26) = 0x66;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_8);
    DAT_12039a9c = (*pcVar1)(local_8,(undefined2 *)(param_1 + 0x26));
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_4);
    DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x5c);
    return 0;
  }
  return 0x10000;
}


