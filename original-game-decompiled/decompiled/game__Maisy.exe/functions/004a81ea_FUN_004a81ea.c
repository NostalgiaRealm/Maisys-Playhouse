
/* ==== FUN_004a81ea @ 004a81ea ==== 
 * signature: undefined __fastcall FUN_004a81ea(int param_1)
 * body: 004a81ea-004a8206
 */

void __fastcall FUN_004a81ea(int param_1)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    GetDlgCtrlID(*(HWND *)(param_1 + 0x1c));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004a8200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x38) + 0x94))();
  return;
}


