
/* ==== FUN_5f001170 @ 5f001170 ==== 
 * signature: LRESULT __stdcall FUN_5f001170(int param_1, WPARAM param_2, int param_3)
 * body: 5f001170-5f00121e
 */

LRESULT FUN_5f001170(int param_1,WPARAM param_2,int param_3)

{
  LRESULT LVar1;
  uint uVar2;
  int local_4;
  
  LVar1 = CallNextHookEx(DAT_5f00520c,param_1,param_2,param_3);
  if (*(int *)(param_3 + 0xc) != DAT_5f005208) {
    return LVar1;
  }
  UnhookWindowsHookEx(DAT_5f00520c);
  if (0x35e < DAT_5f005260) {
    uVar2 = GetWindowLongW(*(HWND *)(param_3 + 0xc),-0x10);
    local_4 = 0;
    if ((uVar2 & 4) != 0) goto LAB_5f0011d5;
  }
  local_4 = 1;
LAB_5f0011d5:
  SendMessageW(*(HWND *)(param_3 + 0xc),0x11f0,0,(LPARAM)&local_4);
  if (local_4 != 0) {
    FUN_5f001070(*(HWND *)(param_3 + 0xc),DAT_5f005210);
  }
  DAT_5f005210 = 0;
  DAT_5f00520c = (HHOOK)0x0;
  DAT_5f005208 = 0;
  return LVar1;
}


