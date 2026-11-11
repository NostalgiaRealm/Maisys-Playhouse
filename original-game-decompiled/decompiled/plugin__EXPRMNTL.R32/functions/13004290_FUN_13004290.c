
/* ==== FUN_13004290 @ 13004290 ==== 
 * signature: undefined4 __cdecl FUN_13004290(int param_1, int param_2)
 * body: 13004290-130042ef
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13004290(int param_1,int param_2)

{
  code *pcVar1;
  int local_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_13003980(param_2,1,1,&local_8);
  _DAT_13008d34 = (*pcVar1)(local_8,6,param_1);
  pcVar1 = (code *)FUN_13003980(param_2,1,1,&iStack_4);
  _DAT_13008d34 = (*pcVar1)(iStack_4,8,param_1 + 10);
  return 0;
}


