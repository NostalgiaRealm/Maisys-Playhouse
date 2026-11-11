
/* ==== FUN_1400b2e0 @ 1400b2e0 ==== 
 * signature: undefined4 __cdecl FUN_1400b2e0(undefined2 * param_1, int param_2, undefined4 param_3, short param_4)
 * body: 1400b2e0-1400b62a
 */

undefined4 __cdecl FUN_1400b2e0(undefined2 *param_1,int param_2,undefined4 param_3,short param_4)

{
  code *pcVar1;
  short local_1a;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (param_4 < 1) {
    if (param_4 == 0) {
      *param_1 = 0x17;
      param_1[5] = 0x17;
      *(undefined4 *)(param_1 + 1) = 0;
      *(undefined4 *)(param_1 + 3) = 0;
      *(undefined4 *)(param_1 + 6) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_18);
      DAT_14028e48 = (*pcVar1)(local_18,param_1);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_14);
      DAT_14028e48 = (*pcVar1)(iStack_14,param_1 + 5);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_10);
      DAT_14028e48 = (*pcVar1)(iStack_10,param_1 + 0x4c);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_c);
      DAT_14028e48 = (*pcVar1)(iStack_c,param_1 + 0x20);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_8);
      DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 10);
      FUN_1400cf70(param_1,param_2);
      FUN_1400cf70(param_1,param_2);
      return 0;
    }
    return 0x10000;
  }
  pcVar1 = (code *)FUN_14008ab0(param_2,1,8,&local_18);
  DAT_14028e48 = (*pcVar1)(local_18,&local_1a,1);
  if (local_1a == 2) {
    *param_1 = 0;
    param_1[0x36] = 0;
    param_1[5] = 0;
    param_1[10] = 0;
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_18);
    DAT_14028e48 = (*pcVar1)(local_18,param_1);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_14);
    DAT_14028e48 = (*pcVar1)(iStack_14,param_1 + 5);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_10);
    DAT_14028e48 = (*pcVar1)(iStack_10,param_1 + 0x4c);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_c);
    DAT_14028e48 = (*pcVar1)(iStack_c,param_1 + 0x20);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_8);
    DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 10);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_4);
    DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 0x36);
    return 0;
  }
  *param_1 = 0x17;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[5] = 0x17;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_18);
  DAT_14028e48 = (*pcVar1)(local_18,param_1);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_14);
  DAT_14028e48 = (*pcVar1)(iStack_14,param_1 + 5);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_10);
  DAT_14028e48 = (*pcVar1)(iStack_10,param_1 + 0x4c);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_1 + 0x20);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 10);
  FUN_1400cf70(param_1,param_2);
  FUN_1400cf70(param_1,param_2);
  return 0;
}


