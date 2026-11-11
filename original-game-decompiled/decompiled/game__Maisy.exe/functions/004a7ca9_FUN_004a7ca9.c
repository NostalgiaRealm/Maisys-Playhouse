
/* ==== FUN_004a7ca9 @ 004a7ca9 ==== 
 * signature: undefined __thiscall FUN_004a7ca9(void * this, int param_1)
 * body: 004a7ca9-004a7d39
 */

void __thiscall FUN_004a7ca9(void *this,int param_1)

{
  int iVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  
  if (*(int *)((int)this + 0xc) == 0) {
    if (param_1 == 0) {
      pHVar2 = GetFocus();
      iVar1 = *(int *)((int)this + 0x14);
      if (pHVar2 == *(HWND *)(iVar1 + 0x1c)) {
        pHVar2 = GetParent(*(HWND *)(iVar1 + 0x1c));
        pCVar3 = CWnd::FromHandle(pHVar2);
        pHVar2 = (HWND)0x0;
        if (iVar1 != 0) {
          pHVar2 = *(HWND *)(iVar1 + 0x1c);
        }
        pHVar2 = GetNextDlgTabItem(*(HWND *)(pCVar3 + 0x1c),pHVar2,0);
        pCVar3 = CWnd::FromHandle(pHVar2);
        CWnd::SetFocus(pCVar3);
      }
    }
    CWnd::EnableWindow(*(CWnd **)((int)this + 0x14),param_1);
  }
  else {
    if (*(int *)((int)this + 0x10) != 0) {
      return;
    }
    EnableMenuItem(*(HMENU *)(*(int *)((int)this + 0xc) + 4),*(UINT *)((int)this + 8),
                   (uint)CONCAT11(4,-(param_1 == 0) & 3));
  }
  *(undefined4 *)((int)this + 0x18) = 1;
  return;
}


