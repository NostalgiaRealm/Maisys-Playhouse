
/* ==== CWnd::IsTopParentActive @ 004aa434 ==== 
 * signature: int __thiscall IsTopParentActive(CWnd * this)
 * body: 004aa434-004aa461
 * note: Library Function - Single Match  public: int __thiscall CWnd::IsTopParentActive(void)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CWnd::IsTopParentActive(void)const 
   
   Library: Visual Studio 1998 Release */

int __thiscall CWnd::IsTopParentActive(CWnd *this)

{
  CWnd *pCVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  
  pCVar1 = GetTopLevelParent(this);
  pHVar2 = GetLastActivePopup(*(HWND *)(pCVar1 + 0x1c));
  pCVar1 = FromHandle(pHVar2);
  pHVar2 = GetForegroundWindow();
  pCVar3 = FromHandle(pHVar2);
  return (uint)(pCVar1 == pCVar3);
}


