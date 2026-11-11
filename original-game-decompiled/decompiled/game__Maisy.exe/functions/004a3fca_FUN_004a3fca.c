
/* ==== FUN_004a3fca @ 004a3fca ==== 
 * signature: undefined __thiscall FUN_004a3fca(void * this, WPARAM param_1, LPARAM param_2)
 * body: 004a3fca-004a3ff1
 */

void __thiscall FUN_004a3fca(void *this,WPARAM param_1,LPARAM param_2)

{
  HWND pHVar1;
  CWnd *pCVar2;
  
  pHVar1 = GetParent(*(HWND *)((int)this + 0x1c));
  pCVar2 = CWnd::FromHandle(pHVar1);
  SendMessageA(*(HWND *)(pCVar2 + 0x1c),0x468,param_1,param_2);
  return;
}


