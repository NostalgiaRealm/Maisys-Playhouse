
/* ==== CWnd::GetTopLevelParent @ 004aa3a0 ==== 
 * signature: CWnd * __thiscall GetTopLevelParent(CWnd * this)
 * body: 004aa3a0-004aa3c5
 * note: Library Function - Single Match  public: class CWnd * __thiscall CWnd::GetTopLevelParent(void)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CWnd * __thiscall CWnd::GetTopLevelParent(void)const 
   
   Library: Visual Studio 1998 Release */

CWnd * __thiscall CWnd::GetTopLevelParent(CWnd *this)

{
  HWND__ *pHVar1;
  CWnd *pCVar2;
  HWND__ *pHVar3;
  
  if ((this == (CWnd *)0x0) ||
     (pHVar1 = *(HWND__ **)(this + 0x1c), *(HWND__ **)(this + 0x1c) == (HWND__ *)0x0)) {
    pCVar2 = (CWnd *)0x0;
  }
  else {
    do {
      pHVar3 = pHVar1;
      pHVar1 = AfxGetParentOwner(pHVar3);
    } while (pHVar1 != (HWND__ *)0x0);
    pCVar2 = FromHandle(pHVar3);
  }
  return pCVar2;
}


