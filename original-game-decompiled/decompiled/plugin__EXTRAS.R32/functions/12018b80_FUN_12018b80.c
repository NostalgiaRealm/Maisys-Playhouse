
/* ==== FUN_12018b80 @ 12018b80 ==== 
 * signature: undefined4 __cdecl FUN_12018b80(undefined4 param_1, short * param_2, short * param_3)
 * body: 12018b80-12018ca6
 */

undefined4 __cdecl FUN_12018b80(undefined4 param_1,short *param_2,short *param_3)

{
  code *pcVar1;
  int iVar2;
  int local_8;
  undefined4 local_4;
  
  local_4 = 0;
  if ((*param_2 == -1) && (*param_3 == 0x69)) {
    iVar2 = 0x10000;
    if (*(int *)(param_2 + 3) != 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x38),1,9,&local_8);
      iVar2 = (*pcVar1)(local_8,param_3,param_2 + 3);
      DAT_12039a9c = iVar2;
    }
    if (iVar2 != 0) {
      if (*(int *)(param_2 + 1) != 0) {
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x38),1,7,&local_8);
        iVar2 = (*pcVar1)(local_8,param_1,0x2f,*(undefined4 *)(param_2 + 1),&local_4);
        DAT_12039a9c = iVar2;
        if (iVar2 == 0) {
          *(undefined4 *)(param_3 + 1) = local_4;
          pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x38),1,10,&local_8);
          DAT_12039a9c = (*pcVar1)(local_8,param_3,param_2 + 3);
        }
      }
      if (iVar2 != 0) {
        param_3[1] = 0;
        param_3[2] = 0;
      }
    }
    return 0;
  }
  return 0x10002;
}


