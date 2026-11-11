
/* ==== FUN_00424900 @ 00424900 ==== 
 * signature: undefined __fastcall FUN_00424900(int param_1)
 * body: 00424900-00424917
 */

void __fastcall FUN_00424900(int param_1)

{
  if ((((*(byte *)(param_1 + 100) & 1) == 0) || ((*(byte *)(param_1 + 100) & 2) != 0)) &&
     (*(int **)(param_1 + 0x50) != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00424914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x50) + 0x7c))();
    return;
  }
  return;
}


