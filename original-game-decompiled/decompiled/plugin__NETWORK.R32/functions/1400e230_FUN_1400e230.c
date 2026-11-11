
/* ==== FUN_1400e230 @ 1400e230 ==== 
 * signature: undefined4 __cdecl FUN_1400e230(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 1400e230-1400e2b6
 */

undefined4 __cdecl FUN_1400e230(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,4,&local_8);
  DAT_14028e48 = (*pcVar1)(local_8,param_2,param_3,param_1);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,4,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_2,param_3,param_1 + 0x36);
  return 0;
}


