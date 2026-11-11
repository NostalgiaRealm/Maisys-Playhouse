
/* ==== FUN_14016140 @ 14016140 ==== 
 * signature: undefined4 __cdecl FUN_14016140(int param_1)
 * body: 14016140-140161bb
 */

undefined4 __cdecl FUN_14016140(int param_1)

{
  code *pcVar1;
  int local_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_8);
  DAT_14028e48 = (*pcVar1)(local_8,param_1,param_1 + 10);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1,param_1 + 0x36);
  return 0;
}


