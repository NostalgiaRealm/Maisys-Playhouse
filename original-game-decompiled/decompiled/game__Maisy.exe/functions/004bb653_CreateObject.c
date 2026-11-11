
/* ==== CreateObject @ 004bb653 ==== 
 * signature: undefined4 __stdcall CreateObject(void)
 * body: 004bb653-004bb69f
 * note: Library Function - Multiple Matches With Same Base Name  public: static class CObject * __stdcall CMDIFrameWnd::CreateObject(void)  public: static class CObject * __stdcall COleDocIPFrameWnd::CreateObject(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Same Base Name
    public: static class CObject * __stdcall CMDIFrameWnd::CreateObject(void)
    public: static class CObject * __stdcall COleDocIPFrameWnd::CreateObject(void)
   
   Library: Visual Studio 1998 Release */

undefined4 CreateObject(void)

{
  CMDIFrameWnd *this;
  undefined4 uVar1;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  this = (CMDIFrameWnd *)FUN_004a5fed(0xc0);
  *(CMDIFrameWnd **)(unaff_EBP + -0x10) = this;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = 0;
  if (this != (CMDIFrameWnd *)0x0) {
    uVar1 = CMDIFrameWnd::CMDIFrameWnd(this);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


