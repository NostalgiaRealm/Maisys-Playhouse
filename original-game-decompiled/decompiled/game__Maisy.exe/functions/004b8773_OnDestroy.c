
/* ==== CFrameWnd::OnDestroy @ 004b8773 ==== 
 * signature: void __thiscall OnDestroy(CFrameWnd * this)
 * body: 004b8773-004b87c1
 * note: Library Function - Single Match  protected: void __thiscall CFrameWnd::OnDestroy(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnDestroy(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CFrameWnd::OnDestroy(CFrameWnd *this)

{
  HMENU pHVar1;
  HMENU pHVar2;
  int iVar3;
  
  DestroyDockBars(this);
  pHVar1 = *(HMENU *)(this + 0x44);
  if (pHVar1 != (HMENU)0x0) {
    pHVar2 = GetMenu(*(HWND *)(this + 0x1c));
    if (pHVar2 != pHVar1) {
      SetMenu(*(HWND *)(this + 0x1c),*(HMENU *)(this + 0x44));
    }
  }
  iVar3 = FUN_004bafca();
  if (*(CFrameWnd **)(*(int *)(iVar3 + 4) + 0x1c) == this) {
    WinHelpA(*(HWND *)(this + 0x1c),(LPCSTR)0x0,2,0);
  }
  FUN_004a8882((int *)this);
  return;
}


