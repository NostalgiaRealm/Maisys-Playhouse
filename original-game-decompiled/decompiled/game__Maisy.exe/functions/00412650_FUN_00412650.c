
/* ==== FUN_00412650 @ 00412650 ==== 
 * signature: undefined __fastcall FUN_00412650(int param_1)
 * body: 00412650-0041265f
 */

void __fastcall FUN_00412650(int param_1)

{
  if (*(int **)(param_1 + 0x3e) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00412659. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x3e) + 0x21c))();
    return;
  }
  return;
}


