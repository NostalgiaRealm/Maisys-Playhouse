
/* ==== FUN_12012490 @ 12012490 ==== 
 * signature: undefined4 __cdecl FUN_12012490(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 12012490-12012549
 */

undefined4 __cdecl FUN_12012490(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,4,&local_c);
  DAT_12039a9c = (*pcVar1)(local_c,param_2,param_3,param_1 + 0x2e);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,4,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_2,param_3,param_1 + 0x50);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,4,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_2,param_3,param_1 + 0x3e);
  return 0;
}


