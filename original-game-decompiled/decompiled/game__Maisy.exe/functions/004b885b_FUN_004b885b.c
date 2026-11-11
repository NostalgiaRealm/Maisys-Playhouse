
/* ==== FUN_004b885b @ 004b885b ==== 
 * signature: undefined __fastcall FUN_004b885b(int param_1)
 * body: 004b885b-004b8883
 */

void __fastcall FUN_004b885b(int param_1)

{
  int iVar1;
  _AFX_THREAD_STATE *p_Var2;
  
  iVar1 = FUN_004b8d18(param_1);
  if (iVar1 != 0) {
    p_Var2 = FUN_004a8846();
    SendMessageA(*(HWND *)(iVar1 + 0x1c),0x114,*(WPARAM *)(p_Var2 + 8),*(LPARAM *)(p_Var2 + 0xc));
  }
  return;
}


