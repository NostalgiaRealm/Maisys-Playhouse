
/* ==== FUN_004b478b @ 004b478b ==== 
 * signature: undefined4 __fastcall FUN_004b478b(int param_1)
 * body: 004b478b-004b479c
 */

undefined4 __fastcall FUN_004b478b(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x78) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b4799. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x78) + 0x18))();
    return uVar1;
  }
  return 0;
}


