
/* ==== FUN_1201e920 @ 1201e920 ==== 
 * signature: undefined __cdecl FUN_1201e920(undefined4 param_1, int param_2)
 * body: 1201e920-1201e9e2
 */

void __cdecl FUN_1201e920(undefined4 param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 local_c;
  undefined2 uStack_8;
  int iStack_4;
  
  pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_c);
  DAT_12039a9c = (*pcVar2)(CONCAT22(local_c._2_2_,(undefined2)local_c),param_1,s_range_12037b04,0,
                           param_2);
  if (DAT_12039a9c != 0) {
    local_c._0_2_ = 1;
    local_c._2_2_ = 0;
    uStack_8 = 0;
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_4);
    DAT_12039a9c = (*pcVar2)(iStack_4,param_1,s_celcount_12037af0,0,&local_c);
    piVar1 = (int *)(param_2 + 6);
    if (DAT_12039a9c == 0) {
      *piVar1 = 0x7fffffff;
    }
    else {
      *piVar1 = CONCAT22(uStack_8,local_c._2_2_);
    }
    *(uint *)(param_2 + 2) = (uint)(0 < *piVar1);
  }
  return;
}


