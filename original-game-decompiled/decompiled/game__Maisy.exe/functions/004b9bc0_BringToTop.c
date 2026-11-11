
/* ==== CFrameWnd::BringToTop @ 004b9bc0 ==== 
 * signature: void __thiscall BringToTop(CFrameWnd * this, int param_1)
 * body: 004b9bc0-004b9bee
 * note: Library Function - Single Match  protected: void __thiscall CFrameWnd::BringToTop(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::BringToTop(int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CFrameWnd::BringToTop(CFrameWnd *this,int param_1)

{
  HWND hWnd;
  
  if ((((param_1 != 0) && (param_1 != 6)) && (param_1 != 7)) && ((param_1 != 8 && (param_1 != 4))))
  {
    hWnd = GetLastActivePopup(*(HWND *)(this + 0x1c));
    BringWindowToTop(hWnd);
  }
  return;
}


