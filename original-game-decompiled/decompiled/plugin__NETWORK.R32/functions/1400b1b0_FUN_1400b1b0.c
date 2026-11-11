
/* ==== FUN_1400b1b0 @ 1400b1b0 ==== 
 * signature: undefined4 __cdecl FUN_1400b1b0(int param_1, int param_2)
 * body: 1400b1b0-1400b2d1
 */

undefined4 __cdecl FUN_1400b1b0(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 local_1e;
  int local_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  local_1e = 2;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,7,&local_1c);
  DAT_14028e48 = (*pcVar1)(local_1c,&local_1e,1);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_18);
  DAT_14028e48 = (*pcVar1)(iStack_18,param_1);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_14);
  DAT_14028e48 = (*pcVar1)(iStack_14,param_1 + 10);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_10);
  DAT_14028e48 = (*pcVar1)(iStack_10,param_1 + 0x98);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_1 + 0x40);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 0x14);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 0x6c);
  return 0;
}


