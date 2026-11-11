
/* ==== FUN_00415780 @ 00415780 ==== 
 * signature: undefined __fastcall FUN_00415780(int param_1)
 * body: 00415780-0041578f
 */

void __fastcall FUN_00415780(int param_1)

{
  if (*(int **)(param_1 + 0x2a) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00415789. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x2a) + 300))();
    return;
  }
  return;
}


