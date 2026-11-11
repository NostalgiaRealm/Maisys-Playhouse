
/* ==== FUN_14009fd0 @ 14009fd0 ==== 
 * signature: undefined4 __cdecl FUN_14009fd0(int param_1, int param_2)
 * body: 14009fd0-1400a05a
 */

undefined4 __cdecl FUN_14009fd0(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 local_e;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  local_e = 1;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,7,&local_c);
  DAT_14028e48 = (*pcVar1)(local_c,&local_e,1);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 10);
  return 0;
}


