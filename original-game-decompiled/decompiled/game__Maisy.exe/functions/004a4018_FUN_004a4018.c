
/* ==== FUN_004a4018 @ 004a4018 ==== 
 * signature: undefined __thiscall FUN_004a4018(void * this, LPARAM param_1)
 * body: 004a4018-004a403d
 */

void __thiscall FUN_004a4018(void *this,LPARAM param_1)

{
  HWND pHVar1;
  CWnd *pCVar2;
  
  pHVar1 = GetParent(*(HWND *)((int)this + 0x1c));
  pCVar2 = CWnd::FromHandle(pHVar1);
  SendMessageA(*(HWND *)(pCVar2 + 0x1c),0x46a,0,param_1);
  return;
}


