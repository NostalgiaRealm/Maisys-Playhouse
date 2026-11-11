
/* ==== FUN_1201b950 @ 1201b950 ==== 
 * signature: undefined4 __cdecl FUN_1201b950(int param_1)
 * body: 1201b950-1201bb7f
 */

undefined4 __cdecl FUN_1201b950(int param_1)

{
  short sVar1;
  code *pcVar2;
  longlong lVar3;
  int local_34;
  int iStack_30;
  undefined2 local_2c;
  int local_2a;
  
  if ((*(uint *)(param_1 + 0x16) & 2) != 0) {
    local_2a = 0;
    local_2c = 10;
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_34);
    DAT_12039a9c = (*pcVar2)(local_34,*(undefined4 *)(param_1 + 0x60),s_globaloffset_120379ec,0,
                             &local_2c);
    local_2c = 10;
    local_2a = 0;
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_30);
    DAT_12039a9c = (*pcVar2)(iStack_30,*(undefined4 *)(param_1 + 0x60),&DAT_120379b0,0,&local_2c);
    local_34 = ((int)*(short *)(param_1 + 0x3e) - (int)*(short *)(param_1 + 0x3a)) / 2;
    lVar3 = __ftol();
    sVar1 = (short)lVar3;
    if (sVar1 < -100) {
      sVar1 = -100;
    }
    if (100 < sVar1) {
      sVar1 = 100;
    }
    local_2a = (int)sVar1;
    local_2c = 1;
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,6,&local_34);
    DAT_12039a9c = (*pcVar2)(local_34,*(undefined4 *)(param_1 + 0x60),s_balance_1203799c,0,&local_2c
                            );
    return 0;
  }
  if (*(int *)(param_1 + 0x4e) < 1) {
    local_2c = 1;
    local_2a = *(undefined4 *)(param_1 + 0x1c);
    if ((*(uint *)(param_1 + 0x16) & 1) != 0) {
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x14),1,1,&local_34);
      DAT_12039a9c = (*pcVar2)(local_34,param_1,0);
      *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) ^ 5;
    }
  }
  else {
    local_2c = 1;
    *(int *)(param_1 + 0x4e) = *(int *)(param_1 + 0x4e) + -1;
    lVar3 = __ftol();
    local_2a = (int)lVar3;
  }
  pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,6,&local_34);
  DAT_12039a9c = (*pcVar2)(local_34,*(undefined4 *)(param_1 + 0x60),s_balance_1203799c,0,&local_2c);
  return 0;
}


