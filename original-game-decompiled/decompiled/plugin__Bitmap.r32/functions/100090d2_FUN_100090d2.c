
/* ==== FUN_100090d2 @ 100090d2 ==== 
 * signature: undefined __cdecl FUN_100090d2(short * param_1, int param_2)
 * body: 100090d2-100091fb
 */

void __cdecl FUN_100090d2(short *param_1,int param_2)

{
  int local_18;
  code *local_14;
  int local_10;
  code *local_c;
  int local_8;
  
  if ((*(short *)(param_2 + 2) != param_1[1]) || (*param_1 != 0x6d)) {
    if ((*(int *)(param_1 + 2) != 0) && (*param_1 == 0x6d)) {
      local_c = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 8),1,1,&local_10);
      DAT_100173bc = (*local_c)(local_10,*(undefined4 *)(param_1 + 2));
      param_1[2] = 0;
      param_1[3] = 0;
    }
    *param_1 = 0x6d;
    param_1[1] = *(short *)(param_2 + 2);
    local_14 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 8),1,0,&local_18);
    DAT_100173bc = (*local_14)(local_18,(int)*(short *)(param_2 + 2) << 2,param_1 + 2);
  }
  for (local_8 = 0; local_8 < *(short *)(param_2 + 2); local_8 = local_8 + 1) {
    *(undefined4 *)(*(int *)(param_1 + 2) + local_8 * 4) =
         *(undefined4 *)(*(int *)(param_2 + 4) + local_8 * 4);
  }
  return;
}


