
/* ==== FUN_13004660 @ 13004660 ==== 
 * signature: undefined4 __cdecl FUN_13004660(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 13004660-130046e6
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13004660(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 4),1,4,&local_8);
  _DAT_13008d34 = (*pcVar1)(local_8,param_2,param_3,param_1);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 4),1,4,&iStack_4);
  _DAT_13008d34 = (*pcVar1)(iStack_4,param_2,param_3,param_1 + 10);
  return 0;
}


