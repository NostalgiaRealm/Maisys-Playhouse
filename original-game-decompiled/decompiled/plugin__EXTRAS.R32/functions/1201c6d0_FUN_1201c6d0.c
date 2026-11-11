
/* ==== FUN_1201c6d0 @ 1201c6d0 ==== 
 * signature: undefined4 __cdecl FUN_1201c6d0(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 1201c6d0-1201c816
 */

undefined4 __cdecl FUN_1201c6d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,4,&local_18);
  DAT_12039a9c = (*pcVar1)(local_18,param_2,param_3,param_1);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,4,&iStack_14);
  DAT_12039a9c = (*pcVar1)(iStack_14,param_2,param_3,param_1 + 10);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,4,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,param_2,param_3,param_1 + 0x14);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,4,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,param_2,param_3,param_1 + 0x36);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,4,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_2,param_3,param_1 + 0x24);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,4,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_2,param_3,param_1 + 0x62);
  return 0;
}


