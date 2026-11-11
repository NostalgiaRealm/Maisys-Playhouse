
/* ==== FUN_1201b050 @ 1201b050 ==== 
 * signature: undefined4 __cdecl FUN_1201b050(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 1201b050-1201b0d6
 */

undefined4 __cdecl FUN_1201b050(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,4,&local_8);
  DAT_12039a9c = (*pcVar1)(local_8,param_2,param_3,param_1);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,4,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_2,param_3,param_1 + 10);
  return 0;
}


