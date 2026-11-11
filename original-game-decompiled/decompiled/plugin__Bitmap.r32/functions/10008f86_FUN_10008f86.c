
/* ==== FUN_10008f86 @ 10008f86 ==== 
 * signature: undefined __cdecl FUN_10008f86(undefined4 param_1, undefined2 * param_2, int param_3)
 * body: 10008f86-100090d1
 */

void __cdecl FUN_10008f86(undefined4 param_1,undefined2 *param_2,int param_3)

{
  int local_20;
  code *local_1c;
  int local_18;
  code *local_14;
  int local_10;
  code *local_c;
  undefined4 local_8;
  
  if (param_3 == 0) {
    *param_2 = 0x66;
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
    *(undefined4 *)(param_2 + 7) = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
  }
  else {
    local_8 = 0;
    *param_2 = 0x66;
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
    local_c = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x34),1,0xc,&local_10);
    DAT_100173bc = (*local_c)(local_10,&local_8,param_3);
    *(undefined4 *)(param_2 + 5) = local_8;
    if (*(int *)(param_2 + 5) == 0) {
      local_1c = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x34),1,0xe,&local_20);
      DAT_100173bc = (*local_1c)(local_20,param_2 + 7,1);
      **(undefined1 **)(param_2 + 7) = 0;
    }
    else {
      local_14 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x34),1,0xf,&local_18);
      DAT_100173bc = (*local_14)(local_18,param_2 + 7,param_3);
    }
    *(int *)(param_2 + 3) = *(int *)(param_2 + 5) + 1;
  }
  return;
}


