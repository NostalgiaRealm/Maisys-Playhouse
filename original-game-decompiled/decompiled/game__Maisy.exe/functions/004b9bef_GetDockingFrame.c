
/* ==== CControlBar::GetDockingFrame @ 004b9bef ==== 
 * signature: CFrameWnd * __thiscall GetDockingFrame(CControlBar * this)
 * body: 004b9bef-004b9bff
 * note: Library Function - Single Match  public: class CFrameWnd * __thiscall CControlBar::GetDockingFrame(void)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CFrameWnd * __thiscall CControlBar::GetDockingFrame(void)const 
   
   Library: Visual Studio 1998 Release */

CFrameWnd * __thiscall CControlBar::GetDockingFrame(CControlBar *this)

{
  CFrameWnd *pCVar1;
  
  pCVar1 = CWnd::GetParentFrame((CWnd *)this);
  if (pCVar1 == (CFrameWnd *)0x0) {
    pCVar1 = *(CFrameWnd **)(this + 0x6c);
  }
  return pCVar1;
}


