
/* ==== FUN_100088df @ 100088df ==== 
 * signature: int __cdecl FUN_100088df(short param_1, int param_2, short param_3)
 * body: 100088df-10008966
 */

int __cdecl FUN_100088df(short param_1,int param_2,short param_3)

{
  int iVar1;
  int local_8;
  
  iVar1 = *(int *)(param_2 + -8);
  if (DAT_100131c8 == -1) {
    local_8 = *(int *)(iVar1 + 0x14);
  }
  else {
    local_8 = *(int *)(*(int *)(*(int *)(param_2 + -4) + 4) + DAT_100131c8 * 4) + iVar1;
  }
  return *(int *)((*(int **)(local_8 + -4))[1] +
                 *(int *)(*(int *)(**(int **)(local_8 + -4) + param_1 * 4) + 4 + param_3 * 8) * 4) +
         iVar1;
}


