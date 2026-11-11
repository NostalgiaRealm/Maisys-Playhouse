
/* ==== CWnd::GetParentOwner @ 004aa3ef ==== 
 * signature: CWnd * __thiscall GetParentOwner(CWnd * this)
 * body: 004aa3ef-004aa433
 * note: Library Function - Single Match  public: class CWnd * __thiscall CWnd::GetParentOwner(void)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CWnd * __thiscall CWnd::GetParentOwner(void)const 
   
   Library: Visual Studio 1998 Release */

CWnd * __thiscall CWnd::GetParentOwner(CWnd *this)

{
  HWND hWnd;
  uint uVar1;
  HWND hWnd_00;
  CWnd *pCVar2;
  
  if ((this == (CWnd *)0x0) || (hWnd = *(HWND *)(this + 0x1c), hWnd == (HWND)0x0)) {
    pCVar2 = (CWnd *)0x0;
  }
  else {
    uVar1 = GetWindowLongA(hWnd,-0x10);
    while (((uVar1 & 0x40000000) != 0 && (hWnd_00 = GetParent(hWnd), hWnd_00 != (HWND)0x0))) {
      uVar1 = GetWindowLongA(hWnd_00,-0x10);
      hWnd = hWnd_00;
    }
    pCVar2 = FromHandle(hWnd);
  }
  return pCVar2;
}


