
/* ==== FUN_00477260 @ 00477260 ==== 
 * signature: undefined4 __cdecl FUN_00477260(int param_1)
 * body: 00477260-0047727c
 */

undefined4 __cdecl FUN_00477260(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x16) + 4);
  if (piVar1 != (int *)0x0) {
    param_1 = (**(code **)(*piVar1 + 0x304))();
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


