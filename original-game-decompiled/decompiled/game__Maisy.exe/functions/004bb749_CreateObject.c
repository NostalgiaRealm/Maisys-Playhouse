
/* ==== CFrameWnd::CreateObject @ 004bb749 ==== 
 * signature: CObject * __stdcall CreateObject(void)
 * body: 004bb749-004bb795
 * note: Library Function - Single Match  public: static class CObject * __stdcall CFrameWnd::CreateObject(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: static class CObject * __stdcall CFrameWnd::CreateObject(void)
   
   Library: Visual Studio 1998 Release */

CObject * CFrameWnd::CreateObject(void)

{
  CFrameWnd *this;
  CObject *pCVar1;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  this = (CFrameWnd *)FUN_004a5fed(0xbc);
  *(CFrameWnd **)(unaff_EBP + -0x10) = this;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pCVar1 = (CObject *)0x0;
  if (this != (CFrameWnd *)0x0) {
    pCVar1 = (CObject *)CFrameWnd(this);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return pCVar1;
}


