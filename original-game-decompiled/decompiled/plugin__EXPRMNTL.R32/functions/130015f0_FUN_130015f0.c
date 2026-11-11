
/* ==== FUN_130015f0 @ 130015f0 ==== 
 * signature: undefined4 __cdecl FUN_130015f0(int param_1, int param_2)
 * body: 130015f0-1300169f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_130015f0(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 local_12;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  local_12 = 2;
  pcVar1 = (code *)FUN_13003980(param_2,1,7,&local_10);
  _DAT_13008d34 = (*pcVar1)(local_10,&local_12,1);
  pcVar1 = (code *)FUN_13003980(param_2,1,5,&iStack_c);
  _DAT_13008d34 = (*pcVar1)(iStack_c,param_1);
  pcVar1 = (code *)FUN_13003980(param_2,1,5,&iStack_8);
  _DAT_13008d34 = (*pcVar1)(iStack_8,param_1 + 10);
  pcVar1 = (code *)FUN_13003980(param_2,1,5,&iStack_4);
  _DAT_13008d34 = (*pcVar1)(iStack_4,param_1 + 0x14);
  return 0;
}


