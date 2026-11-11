
/* ==== FUN_12017880 @ 12017880 ==== 
 * signature: undefined4 __cdecl FUN_12017880(int param_1, int param_2)
 * body: 12017880-12017a0d
 */

undefined4 __cdecl FUN_12017880(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  char local_35;
  int local_34;
  int iStack_30;
  short sStack_2c;
  int iStack_2a;
  undefined4 uStack_26;
  undefined4 uStack_22;
  undefined4 uStack_1e;
  
  if ((*(int *)(param_1 + 2) != *(int *)(param_2 + 0xc)) ||
     (*(int *)(param_1 + 6) != *(int *)(param_2 + 0x10))) {
    return 0x10000;
  }
  local_35 = '\0';
  pcVar1 = (code *)FUN_12027370(param_1,0,0x2a,&local_34);
  DAT_12039a9c = (*pcVar1)(local_34,&local_35);
  if (*(int *)(param_2 + 8) == 0) {
    return 0x10000;
  }
  sStack_2c = 0x69;
  uStack_26 = 0;
  uStack_22 = 0;
  iStack_2a = 0;
  uStack_1e = 0;
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_34);
  DAT_12039a9c = (*pcVar1)(local_34,*(undefined4 *)(param_2 + 8),s_parent_1203790c,0,&sStack_2c);
  if (((DAT_12039a9c == 0) && (sStack_2c == 0x69)) && (iStack_2a != 0)) {
    if (local_35 == '\0') {
      uVar2 = FUN_12018630(param_1,(int)&sStack_2c);
      return uVar2;
    }
    pcVar1 = (code *)FUN_12027370(param_1,0,0x30,&local_34);
    DAT_12039a9c = (*pcVar1)(local_34,&iStack_30);
    if (iStack_30 != 0) {
      uVar2 = FUN_12018630(iStack_30,(int)&sStack_2c);
      return uVar2;
    }
    return 0x10002;
  }
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&local_34);
  DAT_12039a9c = (*pcVar1)(local_34,param_1,&sStack_2c);
  return 0x10000;
}


