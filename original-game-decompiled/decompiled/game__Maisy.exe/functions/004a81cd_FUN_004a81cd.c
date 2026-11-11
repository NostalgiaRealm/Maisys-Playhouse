
/* ==== FUN_004a81cd @ 004a81cd ==== 
 * signature: undefined __fastcall FUN_004a81cd(int param_1)
 * body: 004a81cd-004a81e9
 */

void __fastcall FUN_004a81cd(int param_1)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    GetWindowTextLengthA(*(HWND *)(param_1 + 0x1c));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004a81e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x38) + 0x90))();
  return;
}


