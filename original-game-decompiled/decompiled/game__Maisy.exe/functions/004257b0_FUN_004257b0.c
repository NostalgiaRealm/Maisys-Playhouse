
/* ==== FUN_004257b0 @ 004257b0 ==== 
 * signature: undefined __fastcall FUN_004257b0(int param_1)
 * body: 004257b0-004257ca
 */

void __fastcall FUN_004257b0(int param_1)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 0x50); piVar1 != (int *)0x0;
      piVar1 = *(int **)((int)piVar1 + 0x3e)) {
    (**(code **)(*piVar1 + 0x230))();
  }
  return;
}


