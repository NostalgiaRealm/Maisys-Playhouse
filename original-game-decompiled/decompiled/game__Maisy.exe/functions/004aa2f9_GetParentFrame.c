
/* ==== CWnd::GetParentFrame @ 004aa2f9 ==== 
 * signature: CFrameWnd * __thiscall GetParentFrame(CWnd * this)
 * body: 004aa2f9-004aa344
 * note: Library Function - Single Match  public: class CFrameWnd * __thiscall CWnd::GetParentFrame(void)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CFrameWnd * __thiscall CWnd::GetParentFrame(void)const 
   
   Library: Visual Studio 1998 Release */

CFrameWnd * __thiscall CWnd::GetParentFrame(CWnd *this)

{
  HWND pHVar1;
  CWnd *pCVar2;
  int iVar3;
  
  if ((this != (CWnd *)0x0) && (*(HWND *)(this + 0x1c) != (HWND)0x0)) {
    pHVar1 = GetParent(*(HWND *)(this + 0x1c));
    pCVar2 = FromHandle(pHVar1);
    while (pCVar2 != (CWnd *)0x0) {
      iVar3 = (**(code **)(*(int *)pCVar2 + 0xb4))();
      if (iVar3 != 0) {
        return (CFrameWnd *)pCVar2;
      }
      pHVar1 = GetParent(*(HWND *)(pCVar2 + 0x1c));
      pCVar2 = FromHandle(pHVar1);
    }
  }
  return (CFrameWnd *)0x0;
}


