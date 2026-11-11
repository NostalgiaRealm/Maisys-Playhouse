
/* ==== FUN_140173c0 @ 140173c0 ==== 
 * signature: undefined4 __cdecl FUN_140173c0(int param_1)
 * body: 140173c0-14017476
 */

undefined4 __cdecl FUN_140173c0(int param_1)

{
  code *pcVar1;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_c);
  DAT_14028e48 = (*pcVar1)(local_c,param_1,param_1 + 0x36);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1,param_1 + 10);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1,param_1 + 0x86);
  FUN_14018100(param_1);
  return 0;
}


