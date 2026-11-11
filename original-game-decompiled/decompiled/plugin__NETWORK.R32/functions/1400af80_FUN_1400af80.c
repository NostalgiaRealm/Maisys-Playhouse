
/* ==== FUN_1400af80 @ 1400af80 ==== 
 * signature: undefined4 __cdecl FUN_1400af80(int param_1)
 * body: 1400af80-1400b05c
 */

undefined4 __cdecl FUN_1400af80(int param_1)

{
  code *pcVar1;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_10);
  DAT_14028e48 = (*pcVar1)(local_10,param_1,param_1 + 0x40);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_1,param_1 + 0x14);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1,param_1 + 0x6c);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1,param_1 + 0xd6);
  return 0;
}


