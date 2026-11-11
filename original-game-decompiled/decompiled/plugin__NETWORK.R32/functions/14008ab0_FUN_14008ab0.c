
/* ==== FUN_14008ab0 @ 14008ab0 ==== 
 * signature: undefined4 __cdecl FUN_14008ab0(int param_1, int param_2, int param_3, int * param_4)
 * body: 14008ab0-14008b12
 */

undefined4 __cdecl FUN_14008ab0(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + -8);
  if (DAT_140263e0 == -1) {
    iVar2 = *(int *)(iVar1 + 0x14);
  }
  else {
    iVar2 = (int)DAT_140263e0;
    DAT_140263e0 = -1;
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + -4) + 4) + iVar2 * 4) + iVar1;
  }
  iVar1 = *(int *)((*(int **)(iVar2 + -4))[1] +
                  *(int *)(*(int *)(**(int **)(iVar2 + -4) + param_2 * 4) + 4 + param_3 * 8) * 4) +
          iVar1;
  *param_4 = iVar1;
  return *(undefined4 *)(*(int *)(**(int **)(iVar1 + -4) + param_2 * 4) + param_3 * 8);
}


