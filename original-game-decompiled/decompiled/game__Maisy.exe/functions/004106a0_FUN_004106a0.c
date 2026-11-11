
/* ==== FUN_004106a0 @ 004106a0 ==== 
 * signature: undefined __fastcall FUN_004106a0(int param_1)
 * body: 004106a0-004106af
 */

void __fastcall FUN_004106a0(int param_1)

{
  if (*(int **)(param_1 + 0x2a) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004106a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x2a) + 0x128))();
    return;
  }
  return;
}


