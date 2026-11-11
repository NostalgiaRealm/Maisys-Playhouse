
/* ==== FUN_13001a60 @ 13001a60 ==== 
 * signature: undefined4 __cdecl FUN_13001a60(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 13001a60-13001b16
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13001a60(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 4),1,4,&local_c);
  _DAT_13008d34 = (*pcVar1)(local_c,param_2,param_3,param_1);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 4),1,4,&iStack_8);
  _DAT_13008d34 = (*pcVar1)(iStack_8,param_2,param_3,param_1 + 10);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 4),1,4,&iStack_4);
  _DAT_13008d34 = (*pcVar1)(iStack_4,param_2,param_3,param_1 + 0x14);
  return 0;
}


