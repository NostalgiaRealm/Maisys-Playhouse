
/* ==== FUN_00475b30 @ 00475b30 ==== 
 * signature: undefined4 __cdecl FUN_00475b30(int param_1)
 * body: 00475b30-00475b52
 */

undefined4 __cdecl FUN_00475b30(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x16) + 4);
  if ((piVar1 != (int *)0x0) && ((*(byte *)((int)piVar1 + 0x1e) & 4) != 0)) {
    param_1 = (**(code **)(*piVar1 + 0x3c0))();
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


