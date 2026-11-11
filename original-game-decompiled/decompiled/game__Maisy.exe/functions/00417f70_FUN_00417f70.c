
/* ==== FUN_00417f70 @ 00417f70 ==== 
 * signature: undefined __fastcall FUN_00417f70(int * param_1)
 * body: 00417f70-00417f7e
 */

void __fastcall FUN_00417f70(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00417f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)*param_1 + 0xe4))();
    return;
  }
  return;
}


