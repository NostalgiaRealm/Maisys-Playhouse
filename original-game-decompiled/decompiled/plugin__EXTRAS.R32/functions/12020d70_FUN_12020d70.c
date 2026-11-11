
/* ==== FUN_12020d70 @ 12020d70 ==== 
 * signature: undefined4 __cdecl FUN_12020d70(undefined2 * param_1, int param_2)
 * body: 12020d70-12021169
 */

undefined4 __cdecl FUN_12020d70(undefined2 *param_1,int param_2)

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
  
  pcVar1 = (code *)FUN_12027370(param_2,1,8,&local_20);
  DAT_12039a9c = (*pcVar1)(local_20,&local_22,1);
  if (local_22 == 1) {
    if (*(int *)(param_1 + 7) != 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_20);
      DAT_12039a9c = (*pcVar1)(local_20,*(undefined4 *)(param_1 + 7));
      *(undefined4 *)(param_1 + 7) = 0;
      *(undefined4 *)(param_1 + 3) = 0;
      *(undefined4 *)(param_1 + 5) = 0;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_20);
      DAT_12039a9c = (*pcVar1)(local_20,*(undefined4 *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0xe) = 0;
    }
    *param_1 = 0x66;
    param_1[9] = 0x66;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    *(undefined4 *)(param_1 + 10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_20);
    DAT_12039a9c = (*pcVar1)(local_20,param_1);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_1c);
    DAT_12039a9c = (*pcVar1)(iStack_1c,param_1 + 9);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_18);
    DAT_12039a9c = (*pcVar1)(iStack_18,param_1 + 0x12);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_14);
    DAT_12039a9c = (*pcVar1)(iStack_14,param_1 + 0x17);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_10);
    DAT_12039a9c = (*pcVar1)(iStack_10,param_1 + 0x1a);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_c);
    DAT_12039a9c = (*pcVar1)(iStack_c,param_1 + 0x1d);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_8);
    DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 0x1f);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_4);
    DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x21);
    return 0;
  }
  if (local_22 == 0) {
    if (*(int *)(param_1 + 7) != 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_20);
      DAT_12039a9c = (*pcVar1)(local_20,*(undefined4 *)(param_1 + 7));
      *(undefined4 *)(param_1 + 7) = 0;
      *(undefined4 *)(param_1 + 3) = 0;
      *(undefined4 *)(param_1 + 5) = 0;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_20);
      DAT_12039a9c = (*pcVar1)(local_20,*(undefined4 *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0xe) = 0;
    }
    *param_1 = 0x66;
    param_1[9] = 0x66;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    *(undefined4 *)(param_1 + 10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_20);
    DAT_12039a9c = (*pcVar1)(local_20,param_1);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_1c);
    DAT_12039a9c = (*pcVar1)(iStack_1c,param_1 + 9);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_18);
    DAT_12039a9c = (*pcVar1)(iStack_18,param_1 + 0x12);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_14);
    DAT_12039a9c = (*pcVar1)(iStack_14,param_1 + 0x17);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_10);
    DAT_12039a9c = (*pcVar1)(iStack_10,param_1 + 0x1a);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_c);
    DAT_12039a9c = (*pcVar1)(iStack_c,param_1 + 0x1d);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_8);
    DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 0x1f);
    return 0;
  }
  return 0x10000;
}


