
/* ==== FUN_0041ed60 @ 0041ed60 ==== 
 * signature: undefined4 __fastcall FUN_0041ed60(int param_1)
 * body: 0041ed60-0041ed6e
 */

undefined4 __fastcall FUN_0041ed60(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x3e) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041ed69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x3e) + 0x10))();
    return uVar1;
  }
  return 0;
}


