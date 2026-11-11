
/* ==== FUN_00469a80 @ 00469a80 ==== 
 * signature: int __fastcall FUN_00469a80(int param_1)
 * body: 00469a80-00469aa3
 */

int __fastcall FUN_00469a80(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00414290();
  iVar1 = *(int *)(param_1 + 0x7a) + iVar1;
  if (*(int **)(param_1 + 0x5a) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x5a) + 0x84))();
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


