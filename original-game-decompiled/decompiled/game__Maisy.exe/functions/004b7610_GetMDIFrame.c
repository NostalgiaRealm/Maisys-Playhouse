
/* ==== CMDIChildWnd::GetMDIFrame @ 004b7610 ==== 
 * signature: CMDIFrameWnd * __thiscall GetMDIFrame(CMDIChildWnd * this)
 * body: 004b7610-004b7626
 * note: Library Function - Single Match  public: class CMDIFrameWnd * __thiscall CMDIChildWnd::GetMDIFrame(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CMDIFrameWnd * __thiscall CMDIChildWnd::GetMDIFrame(void)
   
   Library: Visual Studio 1998 Release */

CMDIFrameWnd * __thiscall CMDIChildWnd::GetMDIFrame(CMDIChildWnd *this)

{
  HWND pHVar1;
  CWnd *pCVar2;
  
  pHVar1 = GetParent(*(HWND *)(this + 0x1c));
  pHVar1 = GetParent(pHVar1);
  pCVar2 = CWnd::FromHandle(pHVar1);
  return (CMDIFrameWnd *)pCVar2;
}


