
/* ==== FUN_13004520 @ 13004520 ==== 
 * signature: undefined4 __cdecl FUN_13004520(int param_1)
 * body: 13004520-13004579
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13004520(int param_1)

{
  code *pcVar1;
  int local_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_13003980(param_1,0,0x21,&local_8);
  _DAT_13008d34 = (*pcVar1)(local_8,1,param_1);
  pcVar1 = (code *)FUN_13003980(param_1,0,0x21,&iStack_4);
  _DAT_13008d34 = (*pcVar1)(iStack_4,1,param_1 + 10);
  return 0;
}


