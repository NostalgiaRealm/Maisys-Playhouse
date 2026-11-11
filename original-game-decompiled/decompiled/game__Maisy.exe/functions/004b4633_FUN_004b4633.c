
/* ==== FUN_004b4633 @ 004b4633 ==== 
 * signature: undefined4 __fastcall FUN_004b4633(int param_1)
 * body: 004b4633-004b4644
 */

undefined4 __fastcall FUN_004b4633(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x78) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b4641. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x78) + 0x28))();
    return uVar1;
  }
  return 1;
}


