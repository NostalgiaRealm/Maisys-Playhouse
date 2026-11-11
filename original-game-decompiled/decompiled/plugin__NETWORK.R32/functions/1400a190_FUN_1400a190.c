
/* ==== FUN_1400a190 @ 1400a190 ==== 
 * signature: undefined4 __cdecl FUN_1400a190(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 1400a190-1400a276
 */

undefined4 __cdecl FUN_1400a190(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,4,&local_10);
  DAT_14028e48 = (*pcVar1)(local_10,param_2,param_3,param_1);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,4,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_2,param_3,param_1 + 0x36);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,4,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_2,param_3,param_1 + 0x40);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,4,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_2,param_3,param_1 + 0x4a);
  return 0;
}


