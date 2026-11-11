
/* ==== CWnd::ActivateTopParent @ 004aa462 ==== 
 * signature: void __thiscall ActivateTopParent(CWnd * this)
 * body: 004aa462-004aa49e
 * note: Library Function - Single Match  public: void __thiscall CWnd::ActivateTopParent(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CWnd::ActivateTopParent(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CWnd::ActivateTopParent(CWnd *this)

{
  CWnd *pCVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  BOOL BVar4;
  
  pCVar1 = GetTopLevelParent(this);
  pHVar2 = GetForegroundWindow();
  pCVar3 = FromHandle(pHVar2);
  if (pCVar3 != (CWnd *)0x0) {
    if (*(HWND *)(this + 0x1c) == *(HWND *)(pCVar3 + 0x1c)) {
      return;
    }
    BVar4 = IsChild(*(HWND *)(pCVar3 + 0x1c),*(HWND *)(this + 0x1c));
    if (BVar4 != 0) {
      return;
    }
  }
  SetForegroundWindow(*(HWND *)(pCVar1 + 0x1c));
  return;
}


