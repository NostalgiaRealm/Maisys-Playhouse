
/* ==== CWnd::DefWindowProcA @ 004a933c ==== 
 * signature: long __thiscall DefWindowProcA(CWnd * this, uint param_1, uint param_2, long param_3)
 * body: 004a933c-004a9384
 * note: Library Function - Single Match  protected: virtual long __thiscall CWnd::DefWindowProcA(unsigned int,unsigned int,long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: virtual long __thiscall CWnd::DefWindowProcA(unsigned int,unsigned int,long)
   
   Library: Visual Studio 1998 Release */

long __thiscall CWnd::DefWindowProcA(CWnd *this,uint param_1,uint param_2,long param_3)

{
  int *piVar1;
  LRESULT LVar2;
  WNDPROC lpPrevWndFunc;
  
  lpPrevWndFunc = *(WNDPROC *)(this + 0x28);
  if (lpPrevWndFunc == (WNDPROC)0x0) {
    piVar1 = (int *)(**(code **)(*(int *)this + 0x84))();
    lpPrevWndFunc = (WNDPROC)*piVar1;
    if (lpPrevWndFunc == (WNDPROC)0x0) {
      LVar2 = ::DefWindowProcA(*(HWND *)(this + 0x1c),param_1,param_2,param_3);
      return LVar2;
    }
  }
  LVar2 = CallWindowProcA(lpPrevWndFunc,*(HWND *)(this + 0x1c),param_1,param_2,param_3);
  return LVar2;
}


