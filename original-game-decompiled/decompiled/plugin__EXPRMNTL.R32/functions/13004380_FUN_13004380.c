
/* ==== FUN_13004380 @ 13004380 ==== 
 * signature: undefined4 __cdecl FUN_13004380(int param_1, int param_2)
 * body: 13004380-1300440a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13004380(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 local_e;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  local_e = 1;
  pcVar1 = (code *)FUN_13003980(param_2,1,7,&local_c);
  _DAT_13008d34 = (*pcVar1)(local_c,&local_e,1);
  pcVar1 = (code *)FUN_13003980(param_2,1,5,&iStack_8);
  _DAT_13008d34 = (*pcVar1)(iStack_8,param_1);
  pcVar1 = (code *)FUN_13003980(param_2,1,5,&iStack_4);
  _DAT_13008d34 = (*pcVar1)(iStack_4,param_1 + 10);
  return 0;
}


