
/* ==== FUN_004a92ce @ 004a92ce ==== 
 * signature: undefined __fastcall FUN_004a92ce(int * param_1)
 * body: 004a92ce-004a92e1
 */

void __fastcall FUN_004a92ce(int *param_1)

{
  if (param_1[7] != 0) {
    (**(code **)(*param_1 + 0x5c))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004a92db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa8))();
  return;
}


