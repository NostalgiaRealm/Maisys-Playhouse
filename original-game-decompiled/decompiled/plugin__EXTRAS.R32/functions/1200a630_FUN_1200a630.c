
/* ==== FUN_1200a630 @ 1200a630 ==== 
 * signature: undefined4 __cdecl FUN_1200a630(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 1200a630-1200a746
 */

undefined4 __cdecl FUN_1200a630(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,4,&local_14);
  DAT_12039a9c = (*pcVar1)(local_14,param_2,param_3,param_1);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,4,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,param_2,param_3,param_1 + 10);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,4,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,param_2,param_3,param_1 + 0x48);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,4,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_2,param_3,param_1 + 0x3e);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,4,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_2,param_3,param_1 + 0x5a);
  return 0;
}


