
/* ==== FUN_004a7895 @ 004a7895 ==== 
 * signature: undefined __fastcall FUN_004a7895(int param_1)
 * body: 004a7895-004a78af
 */

void __fastcall FUN_004a7895(int param_1)

{
  HWND pHVar1;
  
  if ((*(int *)(param_1 + 0x20) == 0) && (*(int *)(param_1 + 0x1c) == 0)) {
    pHVar1 = GetActiveWindow();
    CWnd::FromHandle(pHVar1);
  }
  return;
}


