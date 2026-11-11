
/* ==== FUN_14008a30 @ 14008a30 ==== 
 * signature: int __cdecl FUN_14008a30(short param_1, int param_2, short param_3)
 * body: 14008a30-14008a78
 */

int __cdecl FUN_14008a30(short param_1,int param_2,short param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + -8);
  if (DAT_140263e0 == -1) {
    iVar2 = *(int *)(iVar1 + 0x14);
  }
  else {
    iVar2 = *(int *)(*(int *)(*(int *)(param_2 + -4) + 4) + DAT_140263e0 * 4) + iVar1;
  }
  return *(int *)((*(int **)(iVar2 + -4))[1] +
                 *(int *)(*(int *)(**(int **)(iVar2 + -4) + param_1 * 4) + 4 + param_3 * 8) * 4) +
         iVar1;
}


