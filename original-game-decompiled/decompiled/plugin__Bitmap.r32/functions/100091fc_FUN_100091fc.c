
/* ==== FUN_100091fc @ 100091fc ==== 
 * signature: undefined __cdecl FUN_100091fc(undefined4 param_1, undefined2 * param_2, int param_3)
 * body: 100091fc-10009378
 */

void __cdecl FUN_100091fc(undefined4 param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  int local_14;
  code *local_10;
  int local_c;
  int local_8;
  
  *param_2 = 0x65;
  if ((*(int *)(param_3 + 0xe) == 0) || (*(int *)(param_3 + 10) == 0)) {
    *(undefined4 *)(param_2 + 5) = 0;
  }
  else {
    local_c = *(int *)(param_3 + 10);
    if ((*(int *)(param_2 + 7) == 0) || (*(int *)(param_2 + 3) == 0)) {
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
      *(undefined4 *)(param_2 + 3) = 0;
      *(undefined4 *)(param_2 + 5) = 0;
      local_10 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 8),1,0,&local_14);
      DAT_100173bc = (*local_10)(local_14,*(undefined4 *)(param_3 + 10),param_2 + 7);
      if (*(int *)(param_2 + 7) != 0) {
        *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_3 + 10);
        *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_3 + 10);
        for (local_8 = 0; local_8 < *(int *)(param_2 + 5); local_8 = local_8 + 1) {
          *(undefined1 *)(*(int *)(param_2 + 7) + local_8) =
               *(undefined1 *)(*(int *)(param_3 + 0xe) + local_8);
        }
      }
    }
    else {
      iVar1 = *(int *)(param_2 + 3);
      if (local_c <= *(int *)(param_2 + 3)) {
        iVar1 = local_c;
      }
      for (local_8 = 0; local_8 < iVar1; local_8 = local_8 + 1) {
        *(undefined1 *)(*(int *)(param_2 + 7) + local_8) =
             *(undefined1 *)(*(int *)(param_3 + 0xe) + local_8);
      }
      *(int *)(param_2 + 5) = iVar1;
    }
  }
  return;
}


