
/* ==== FUN_14013900 @ 14013900 ==== 
 * signature: undefined4 __cdecl FUN_14013900(undefined4 param_1, undefined4 param_2, short * param_3)
 * body: 14013900-14013b9d
 */

undefined4 __cdecl FUN_14013900(undefined4 param_1,undefined4 param_2,short *param_3)

{
  short sVar1;
  code *pcVar2;
  int local_34;
  int iStack_30;
  undefined2 local_2c;
  undefined4 uStack_2a;
  
  sVar1 = *param_3;
  if (sVar1 == 0x73) {
    local_2c = 0x6a;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_34);
    DAT_14028e48 = (*pcVar2)(local_34,param_1,param_3,&local_2c);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,1,&iStack_30);
    DAT_14028e48 = (*pcVar2)(iStack_30,uStack_2a,0x2f,param_2,0);
    return DAT_14028e48;
  }
  if (sVar1 == 0x69) {
    local_2c = 0x6a;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_34);
    DAT_14028e48 = (*pcVar2)(local_34,param_1,param_3,&local_2c);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,1,&iStack_30);
    DAT_14028e48 = (*pcVar2)(iStack_30,uStack_2a,0x2f,param_2,0);
    return DAT_14028e48;
  }
  if ((sVar1 == 0x76) && (*(int *)(param_3 + 7) != 0)) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_34);
    DAT_14028e48 = (*pcVar2)(local_34,param_2,*(undefined4 *)(param_3 + 7));
    return DAT_14028e48;
  }
  if (sVar1 == 100) {
    if (*(int *)(param_3 + 3) == 5) {
      FUN_140123c0(0x14026a90,param_2,*(int *)(param_3 + 1));
      return 0;
    }
    if (*(int *)(param_3 + 3) == 6) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_34);
      DAT_14028e48 = (*pcVar2)(local_34,param_2,s_<error>_14026bbc);
      return 0x10000;
    }
  }
  if (sVar1 == 100) {
    if (*(int *)(param_3 + 3) == 1) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_34);
      DAT_14028e48 = (*pcVar2)(local_34,param_2,s_<error>_14026bbc);
      return 0x10000;
    }
    if (*(int *)(param_3 + 3) == 0xb) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_34);
      DAT_14028e48 = (*pcVar2)(local_34,param_2,s_<error>_14026bbc);
      return 0x10000;
    }
  }
  return 0;
}


