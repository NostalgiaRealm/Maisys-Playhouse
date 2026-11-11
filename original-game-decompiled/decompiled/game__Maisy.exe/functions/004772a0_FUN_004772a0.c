
/* ==== FUN_004772a0 @ 004772a0 ==== 
 * signature: undefined4 __cdecl FUN_004772a0(int param_1)
 * body: 004772a0-004772bc
 */

undefined4 __cdecl FUN_004772a0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x16) + 4);
  if (piVar1 != (int *)0x0) {
    param_1 = (**(code **)(*piVar1 + 0x2e8))();
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


