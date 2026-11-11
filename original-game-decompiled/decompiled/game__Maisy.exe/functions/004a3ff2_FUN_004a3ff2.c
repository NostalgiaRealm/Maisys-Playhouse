
/* ==== FUN_004a3ff2 @ 004a3ff2 ==== 
 * signature: undefined __thiscall FUN_004a3ff2(void * this, WPARAM param_1)
 * body: 004a3ff2-004a4017
 */

void __thiscall FUN_004a3ff2(void *this,WPARAM param_1)

{
  HWND pHVar1;
  CWnd *pCVar2;
  
  pHVar1 = GetParent(*(HWND *)((int)this + 0x1c));
  pCVar2 = CWnd::FromHandle(pHVar1);
  SendMessageA(*(HWND *)(pCVar2 + 0x1c),0x469,param_1,0);
  return;
}


