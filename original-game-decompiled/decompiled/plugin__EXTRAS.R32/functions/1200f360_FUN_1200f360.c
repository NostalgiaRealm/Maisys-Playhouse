
/* ==== FUN_1200f360 @ 1200f360 ==== 
 * signature: undefined4 __cdecl FUN_1200f360(int param_1, int param_2, undefined4 param_3, short param_4)
 * body: 1200f360-1200f631
 */

undefined4 __cdecl FUN_1200f360(int param_1,int param_2,undefined4 param_3,short param_4)

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
      if (*(int *)(param_1 + 0x28) != 0) {
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_18);
        DAT_12039a9c = (*pcVar1)(local_18,*(undefined4 *)(param_1 + 0x28));
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_18);
      DAT_12039a9c = (*pcVar1)(local_18,param_1);
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_14);
      DAT_12039a9c = (*pcVar1)(iStack_14,param_1 + 10);
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_10);
      DAT_12039a9c = (*pcVar1)(iStack_10,param_1 + 0xe);
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_c);
      DAT_12039a9c = (*pcVar1)(iStack_c,param_1 + 0x12);
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_8);
      DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 0x1a);
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_4);
      DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x16);
      return 0;
    }
    return 0x10000;
  }
  local_1a = 1;
  pcVar1 = (code *)FUN_12027370(param_2,1,8,&local_18);
  DAT_12039a9c = (*pcVar1)(local_18,&local_1a,1);
  if (local_1a == 1) {
    if (*(int *)(param_1 + 0x28) != 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_18);
      DAT_12039a9c = (*pcVar1)(local_18,*(undefined4 *)(param_1 + 0x28));
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_18);
    DAT_12039a9c = (*pcVar1)(local_18,param_1);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_14);
    DAT_12039a9c = (*pcVar1)(iStack_14,param_1 + 10);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_10);
    DAT_12039a9c = (*pcVar1)(iStack_10,param_1 + 0xe);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_c);
    DAT_12039a9c = (*pcVar1)(iStack_c,param_1 + 0x12);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_8);
    DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 0x1a);
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_4);
    DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x16);
    return 0;
  }
  return 0x10000;
}


