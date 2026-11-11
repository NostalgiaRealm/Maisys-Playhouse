
/* ==== CFrameWnd::ActivateFrame @ 004b9b6b ==== 
 * signature: void __thiscall ActivateFrame(CFrameWnd * this, int param_1)
 * body: 004b9b6b-004b9bbf
 * note: Library Function - Single Match  public: virtual void __thiscall CFrameWnd::ActivateFrame(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CFrameWnd::ActivateFrame(int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CFrameWnd::ActivateFrame(CFrameWnd *this,int param_1)

{
  BOOL BVar1;
  
  if (param_1 == -1) {
    BVar1 = IsWindowVisible(*(HWND *)(this + 0x1c));
    if (BVar1 == 0) {
      param_1 = 1;
    }
    else {
      BVar1 = IsIconic(*(HWND *)(this + 0x1c));
      if (BVar1 != 0) {
        param_1 = 9;
      }
    }
  }
  BringToTop(this,param_1);
  if (param_1 != -1) {
    CWnd::ShowWindow((CWnd *)this,param_1);
    BringToTop(this,param_1);
  }
  return;
}


