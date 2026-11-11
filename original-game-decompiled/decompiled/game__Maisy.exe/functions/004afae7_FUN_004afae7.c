
/* ==== FUN_004afae7 @ 004afae7 ==== 
 * signature: undefined __fastcall FUN_004afae7(int * param_1)
 * body: 004afae7-004afb05
 */

void __fastcall FUN_004afae7(int *param_1)

{
  if ((param_1[0xd] == 0) && (param_1[0x12] != 0)) {
    (**(code **)(*param_1 + 0x80))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004afaff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa4))();
  return;
}


