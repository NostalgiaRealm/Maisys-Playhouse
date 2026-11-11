
/* ==== FUN_14017530 @ 14017530 ==== 
 * signature: undefined4 __cdecl FUN_14017530(int param_1, int param_2)
 * body: 14017530-140175df
 */

undefined4 __cdecl FUN_14017530(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 local_12;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  local_12 = 1;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,7,&local_10);
  DAT_14028e48 = (*pcVar1)(local_10,&local_12,1);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_1);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 0x36);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 10);
  return 0;
}


