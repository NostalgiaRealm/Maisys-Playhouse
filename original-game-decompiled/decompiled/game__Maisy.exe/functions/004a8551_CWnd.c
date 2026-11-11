
/* ==== CWnd::CWnd @ 004a8551 ==== 
 * signature: undefined __thiscall CWnd(CWnd * this)
 * body: 004a8551-004a859a
 * note: Library Function - Single Match  public: __thiscall CWnd::CWnd(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CWnd::CWnd(void)
   
   Library: Visual Studio 1998 Release */

CCmdTarget * __thiscall CWnd::CWnd(CWnd *this)

{
  CCmdTarget *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(CCmdTarget **)(unaff_EBP + -0x10) = this_00;
  CCmdTarget::CCmdTarget(this_00);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined ***)this_00 = &PTR_FUN_004cb6c4;
  _memset(this_00 + 0x1c,0,0x20);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return this_00;
}


