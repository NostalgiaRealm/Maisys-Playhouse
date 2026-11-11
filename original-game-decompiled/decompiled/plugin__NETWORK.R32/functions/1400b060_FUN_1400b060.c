
/* ==== FUN_1400b060 @ 1400b060 ==== 
 * signature: undefined4 __cdecl FUN_1400b060(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 1400b060-1400b1a0
 */

undefined4 __cdecl FUN_1400b060(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  int local_1c;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  *param_4 = 2;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&local_18);
  DAT_14028e48 = (*pcVar1)(local_18,param_1,&local_1c);
  *param_4 = *param_4 + local_1c;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_14);
  DAT_14028e48 = (*pcVar1)(iStack_14,param_1 + 10,&local_1c);
  *param_4 = *param_4 + local_1c;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_10);
  DAT_14028e48 = (*pcVar1)(iStack_10,param_1 + 0x98,&local_1c);
  *param_4 = *param_4 + local_1c;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_1 + 0x40,&local_1c);
  *param_4 = *param_4 + local_1c;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 0x14,&local_1c);
  *param_4 = *param_4 + local_1c;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 0x6c,&local_1c);
  *param_4 = *param_4 + local_1c;
  return 0;
}


