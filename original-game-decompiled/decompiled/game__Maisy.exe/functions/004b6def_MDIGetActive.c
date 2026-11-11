
/* ==== CMDIFrameWnd::MDIGetActive @ 004b6def ==== 
 * signature: CMDIChildWnd * __thiscall MDIGetActive(CMDIFrameWnd * this, int * param_1)
 * body: 004b6def-004b6e4d
 * note: Library Function - Single Match  public: class CMDIChildWnd * __thiscall CMDIFrameWnd::MDIGetActive(int *)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CMDIChildWnd * __thiscall CMDIFrameWnd::MDIGetActive(int *)const 
   
   Library: Visual Studio 1998 Release */

CMDIChildWnd * __thiscall CMDIFrameWnd::MDIGetActive(CMDIFrameWnd *this,int *param_1)

{
  CMDIChildWnd *this_00;
  HWND__ *pHVar1;
  ulong uVar2;
  
  if (*(HWND *)(this + 0xbc) == (HWND)0x0) {
    if (param_1 != (int *)0x0) {
      *param_1 = 0;
    }
    this_00 = (CMDIChildWnd *)0x0;
  }
  else {
    pHVar1 = (HWND__ *)SendMessageA(*(HWND *)(this + 0xbc),0x229,0,(LPARAM)param_1);
    this_00 = (CMDIChildWnd *)CWnd::FromHandle(pHVar1);
    if ((((this_00 != (CMDIChildWnd *)0x0) && (*(int *)(this_00 + 0xc0) != 0)) &&
        (uVar2 = CWnd::GetExStyle((CWnd *)this_00), (uVar2 & 0x10000000) == 0)) &&
       (this_00 = (CMDIChildWnd *)0x0, param_1 != (int *)0x0)) {
      *param_1 = 0;
    }
  }
  return this_00;
}


