
/* ==== FUN_00477240 @ 00477240 ==== 
 * signature: undefined4 __cdecl FUN_00477240(int param_1)
 * body: 00477240-0047725c
 */

undefined4 __cdecl FUN_00477240(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x16) + 4);
  if (piVar1 != (int *)0x0) {
    param_1 = (**(code **)(*piVar1 + 0x308))();
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


