
/* ==== FUN_00415050 @ 00415050 ==== 
 * signature: undefined __fastcall FUN_00415050(int param_1)
 * body: 00415050-0041506d
 */

void __fastcall FUN_00415050(int param_1)

{
  if (*(int **)(param_1 + 0x3e) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041505b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x3e) + 0x120))();
    return;
  }
  if (*(int *)(param_1 + 0x2a) != 0) {
    FUN_004105b0(*(int *)(param_1 + 0x2a));
    return;
  }
  return;
}


