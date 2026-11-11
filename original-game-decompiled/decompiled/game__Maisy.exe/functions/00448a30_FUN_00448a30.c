
/* ==== FUN_00448a30 @ 00448a30 ==== 
 * signature: undefined4 __thiscall FUN_00448a30(void * this, int param_1)
 * body: 00448a30-00448aca
 */

undefined4 __thiscall FUN_00448a30(void *this,int param_1)

{
  int iVar1;
  LPARAM lParam;
  WPARAM wParam;
  UINT Msg;
  HWND pHVar2;
  CWnd *pCVar3;
  BOOL BVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((((iVar1 == 0x100) || (iVar1 == 0x101)) || (iVar1 == 0x102)) ||
      ((iVar1 == 0x104 || (iVar1 == 0x105)))) || (iVar1 == 0x106)) {
    *(undefined4 *)((int)this + 0x3c) = 0;
    lParam = *(LPARAM *)(param_1 + 0xc);
    wParam = *(WPARAM *)(param_1 + 8);
    Msg = *(UINT *)(param_1 + 4);
    pHVar2 = GetParent(*(HWND *)((int)this + 0x1c));
    pCVar3 = CWnd::FromHandle(pHVar2);
    SendMessageA(*(HWND *)(pCVar3 + 0x1c),Msg,wParam,lParam);
    BVar4 = IsWindowVisible(*(HWND *)((int)this + 0x1c));
    if ((BVar4 == 0) || (*(int *)((int)this + 0x3c) != 0)) {
      return 1;
    }
  }
  return 0;
}


