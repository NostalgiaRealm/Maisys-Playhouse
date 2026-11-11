
/* ==== CMDIChildWnd::CreateObject @ 004bb6ce ==== 
 * signature: CObject * __stdcall CreateObject(void)
 * body: 004bb6ce-004bb71a
 * note: Library Function - Single Match  public: static class CObject * __stdcall CMDIChildWnd::CreateObject(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: static class CObject * __stdcall CMDIChildWnd::CreateObject(void)
   
   Library: Visual Studio 1998 Release */

CObject * CMDIChildWnd::CreateObject(void)

{
  CMDIChildWnd *this;
  CObject *pCVar1;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  this = (CMDIChildWnd *)FUN_004a5fed(0xc4);
  *(CMDIChildWnd **)(unaff_EBP + -0x10) = this;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pCVar1 = (CObject *)0x0;
  if (this != (CMDIChildWnd *)0x0) {
    pCVar1 = (CObject *)CMDIChildWnd(this);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return pCVar1;
}


