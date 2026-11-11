
/* ==== FUN_12018cb0 @ 12018cb0 ==== 
 * signature: int __cdecl FUN_12018cb0(undefined4 param_1, short * param_2, short * param_3)
 * body: 12018cb0-12018edd
 */

int __cdecl FUN_12018cb0(undefined4 param_1,short *param_2,short *param_3)

{
  code *pcVar1;
  int iVar2;
  char local_d;
  int local_c;
  undefined4 local_8;
  int iStack_4;
  
  iVar2 = 0;
  local_8 = 0;
  if ((*param_3 != -1) || (*param_2 != 0x69)) {
    return 0x10002;
  }
  if (*(int *)(param_3 + 1) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_c);
    DAT_12039a9c = (*pcVar1)(local_c,*(undefined4 *)(param_3 + 1));
  }
  param_3[1] = 0;
  param_3[2] = 0;
  if (*(int *)(param_2 + 1) != 0) {
    local_d = '\0';
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x38),1,0xb,&local_c);
    DAT_12039a9c = (*pcVar1)(local_c,*(undefined4 *)(param_2 + 1),&local_d);
    if (local_d == '\0') {
      iVar2 = 0x10000;
    }
    if (iVar2 == 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x38),1,8,&local_c);
      DAT_12039a9c = (*pcVar1)(local_c,*(undefined4 *)(param_2 + 1),&local_8,1);
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&iStack_4);
      DAT_12039a9c = (*pcVar1)(iStack_4,param_3 + 1,local_8);
      *param_3 = -1;
      iVar2 = DAT_12039a9c;
      if (DAT_12039a9c == 0) {
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x38),1,1,&local_c);
        iVar2 = (*pcVar1)(local_c,*(undefined4 *)(param_2 + 1),0x2f,*(undefined4 *)(param_3 + 1),1);
        DAT_12039a9c = iVar2;
        if (iVar2 == 0) {
          pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x38),1,10,&local_c);
          iVar2 = 0;
          DAT_12039a9c = (*pcVar1)(local_c,param_2,param_3 + 3);
        }
      }
    }
    if ((*(int *)(param_2 + 1) != 0) && (iVar2 == 0)) {
      return 0;
    }
  }
  if (*(int *)(param_3 + 1) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_c);
    DAT_12039a9c = (*pcVar1)(local_c,*(undefined4 *)(param_3 + 1));
  }
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  *param_3 = -1;
  return iVar2;
}


