
/* ==== CMDIChildWnd::CMDIChildWnd @ 004b6e54 ==== 
 * signature: undefined __thiscall CMDIChildWnd(CMDIChildWnd * this)
 * body: 004b6e54-004b6e9a
 * note: Library Function - Single Match  public: __thiscall CMDIChildWnd::CMDIChildWnd(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CMDIChildWnd::CMDIChildWnd(void)
   
   Library: Visual Studio 1998 Release */

CFrameWnd * __thiscall CMDIChildWnd::CMDIChildWnd(CMDIChildWnd *this)

{
  undefined4 uVar1;
  CFrameWnd *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(CFrameWnd **)(unaff_EBP + -0x10) = this_00;
  CFrameWnd::CFrameWnd(this_00);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined ***)this_00 = &PTR_FUN_004cc724;
  *(undefined4 *)(this_00 + 0xbc) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar1 = *(undefined4 *)(unaff_EBP + -0xc);
  *(undefined4 *)(this_00 + 0xc0) = 0;
  *unaff_FS_OFFSET = uVar1;
  return this_00;
}


