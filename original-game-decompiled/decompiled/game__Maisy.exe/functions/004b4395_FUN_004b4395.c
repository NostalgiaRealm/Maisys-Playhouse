
/* ==== FUN_004b4395 @ 004b4395 ==== 
 * signature: undefined __fastcall FUN_004b4395(int param_1)
 * body: 004b4395-004b43a1
 */

void __fastcall FUN_004b4395(int param_1)

{
  if (*(int **)(param_1 + 0x78) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b439e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x78) + 0x3c))();
    return;
  }
  return;
}


