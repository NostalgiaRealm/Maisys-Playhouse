
/* ==== FUN_10008a80 @ 10008a80 ==== 
 * signature: undefined __cdecl FUN_10008a80(undefined4 param_1, undefined2 * param_2, int param_3)
 * body: 10008a80-10008d02
 */

void __cdecl FUN_10008a80(undefined4 param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  int local_34;
  code *local_30;
  int local_2c;
  code *local_28;
  int local_24;
  code *local_20;
  int local_1c;
  code *local_18;
  undefined4 local_14;
  int local_10;
  code *local_c;
  int local_8;
  
  if ((*(int *)(param_3 + 0xe) == 0) || (*(int *)(param_3 + 10) < 1)) {
    if ((*(int *)(param_3 + 0xe) != 0) && (*(int *)(param_2 + 7) == 0)) {
      local_30 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x34),1,0xe,&local_34);
      DAT_100173bc = (*local_30)(local_34,param_2 + 7,1);
      *(undefined4 *)(param_2 + 3) = 1;
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
    }
    *(undefined4 *)(param_2 + 5) = 0;
    if (*(int *)(param_2 + 7) != 0) {
      **(undefined1 **)(param_2 + 7) = 0;
    }
  }
  else {
    *param_2 = 0x66;
    local_8 = *(int *)(param_3 + 10);
    if ((*(int *)(param_2 + 7) == 0) || (*(int *)(param_2 + 3) == 0)) {
      local_14 = 0;
      *param_2 = 0x66;
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
      *(undefined4 *)(param_2 + 3) = 0;
      *(undefined4 *)(param_2 + 5) = 0;
      *(undefined4 *)(param_2 + 7) = 0;
      if (local_8 != -1 && -1 < local_8 + 1) {
        local_18 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x34),1,0xe,&local_1c);
        DAT_100173bc = (*local_18)(local_1c,param_2 + 7,local_8 + 1);
        if (*(int *)(param_2 + 7) != 0) {
          *(int *)(param_2 + 3) = local_8 + 1;
          **(undefined1 **)(param_2 + 7) = 0;
        }
      }
      local_20 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x34),1,0,&local_24);
      DAT_100173bc = (*local_20)(local_24,*(undefined4 *)(param_2 + 7),
                                 *(undefined4 *)(param_3 + 0xe));
      local_28 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x34),1,0xc,&local_2c);
      DAT_100173bc = (*local_28)(local_2c,&local_14,*(undefined4 *)(param_2 + 7));
      *(undefined4 *)(param_2 + 5) = local_14;
    }
    else {
      iVar1 = *(int *)(param_2 + 3) + -1;
      if (local_8 <= *(int *)(param_2 + 3) + -1) {
        iVar1 = local_8;
      }
      local_8 = iVar1;
      local_c = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x34),1,1,&local_10);
      DAT_100173bc = (*local_c)(local_10,*(undefined4 *)(param_2 + 7),*(undefined4 *)(param_3 + 0xe)
                                ,local_8);
      *(int *)(param_2 + 5) = local_8;
      *(undefined1 *)(*(int *)(param_2 + 7) + local_8) = 0;
    }
  }
  return;
}


