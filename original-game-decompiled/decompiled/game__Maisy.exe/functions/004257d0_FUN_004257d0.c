
/* ==== FUN_004257d0 @ 004257d0 ==== 
 * signature: undefined __fastcall FUN_004257d0(int param_1)
 * body: 004257d0-004257ea
 */

void __fastcall FUN_004257d0(int param_1)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 0x50); piVar1 != (int *)0x0;
      piVar1 = *(int **)((int)piVar1 + 0x3e)) {
    (**(code **)(*piVar1 + 0x234))();
  }
  return;
}


