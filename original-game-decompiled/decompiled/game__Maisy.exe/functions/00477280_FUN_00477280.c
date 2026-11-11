
/* ==== FUN_00477280 @ 00477280 ==== 
 * signature: undefined4 __cdecl FUN_00477280(int param_1)
 * body: 00477280-0047729c
 */

undefined4 __cdecl FUN_00477280(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x16) + 4);
  if (piVar1 != (int *)0x0) {
    param_1 = (**(code **)(*piVar1 + 0x2fc))();
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


