
/* ==== FUN_0048b500 @ 0048b500 ==== 
 * signature: int __cdecl FUN_0048b500(short param_1, int param_2, short param_3)
 * body: 0048b500-0048b54a
 */

int __cdecl FUN_0048b500(short param_1,int param_2,short param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + -8);
  if (DAT_004dd160 == -1) {
    iVar2 = *(int *)(iVar1 + 0x14);
  }
  else {
    iVar2 = *(int *)(*(int *)(*(int *)(param_2 + -4) + 4) + DAT_004dd160 * 4) + iVar1;
  }
  return *(int *)((*(int **)(iVar2 + -4))[1] +
                 *(int *)(*(int *)(**(int **)(iVar2 + -4) + param_1 * 4) + 4 + param_3 * 8) * 4) +
         iVar1;
}


