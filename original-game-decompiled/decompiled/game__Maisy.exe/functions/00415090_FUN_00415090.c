
/* ==== FUN_00415090 @ 00415090 ==== 
 * signature: undefined __fastcall FUN_00415090(int * param_1)
 * body: 00415090-004150a8
 */

void __fastcall FUN_00415090(int *param_1)

{
  if (*(int **)((int)param_1 + 0x3e) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041509b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)((int)param_1 + 0x3e) + 0x128))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004150a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x114))();
  return;
}


