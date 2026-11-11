
/* ==== FUN_100089c7 @ 100089c7 ==== 
 * signature: undefined4 __cdecl FUN_100089c7(int param_1, int param_2, int param_3, int * param_4)
 * body: 100089c7-10008a7f
 */

undefined4 __cdecl FUN_100089c7(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int local_8;
  
  iVar1 = *(int *)(param_1 + -8);
  if (DAT_100131c8 == -1) {
    local_8 = *(int *)(iVar1 + 0x14);
  }
  else {
    local_8 = *(int *)(*(int *)(*(int *)(param_1 + -4) + 4) + DAT_100131c8 * 4) + iVar1;
    DAT_100131c8 = -1;
  }
  *param_4 = *(int *)((*(int **)(local_8 + -4))[1] +
                     *(int *)(*(int *)(**(int **)(local_8 + -4) + param_2 * 4) + 4 + param_3 * 8) *
                     4) + iVar1;
  return *(undefined4 *)(*(int *)(**(int **)(*param_4 + -4) + param_2 * 4) + param_3 * 8);
}


