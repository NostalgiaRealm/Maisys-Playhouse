
/* ==== CWnd::CreateObject @ 004bb122 ==== 
 * signature: CObject * __stdcall CreateObject(void)
 * body: 004bb122-004bb16b
 * note: Library Function - Single Match  public: static class CObject * __stdcall CWnd::CreateObject(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: static class CObject * __stdcall CWnd::CreateObject(void)
   
   Library: Visual Studio 1998 Release */

CObject * CWnd::CreateObject(void)

{
  CWnd *this;
  CObject *pCVar1;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  this = (CWnd *)FUN_004a5fed(0x3c);
  *(CWnd **)(unaff_EBP + -0x10) = this;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pCVar1 = (CObject *)0x0;
  if (this != (CWnd *)0x0) {
    pCVar1 = (CObject *)CWnd(this);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return pCVar1;
}


