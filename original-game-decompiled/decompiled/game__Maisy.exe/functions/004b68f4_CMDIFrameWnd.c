
/* ==== CMDIFrameWnd::CMDIFrameWnd @ 004b68f4 ==== 
 * signature: undefined __thiscall CMDIFrameWnd(CMDIFrameWnd * this)
 * body: 004b68f4-004b6934
 * note: Library Function - Single Match  public: __thiscall CMDIFrameWnd::CMDIFrameWnd(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CMDIFrameWnd::CMDIFrameWnd(void)
   
   Library: Visual Studio 1998 Release */

CFrameWnd * __thiscall CMDIFrameWnd::CMDIFrameWnd(CMDIFrameWnd *this)

{
  CFrameWnd *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(CFrameWnd **)(unaff_EBP + -0x10) = this_00;
  CFrameWnd::CFrameWnd(this_00);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined ***)this_00 = &PTR_FUN_004cc61c;
  *(undefined4 *)(this_00 + 0xbc) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return this_00;
}


