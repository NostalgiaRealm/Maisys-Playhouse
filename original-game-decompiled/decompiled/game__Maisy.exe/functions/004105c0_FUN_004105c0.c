
/* ==== FUN_004105c0 @ 004105c0 ==== 
 * signature: undefined __fastcall FUN_004105c0(int param_1)
 * body: 004105c0-004105cf
 */

void __fastcall FUN_004105c0(int param_1)

{
  if (*(int **)(param_1 + 0x2a) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004105c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x2a) + 0x120))();
    return;
  }
  return;
}


