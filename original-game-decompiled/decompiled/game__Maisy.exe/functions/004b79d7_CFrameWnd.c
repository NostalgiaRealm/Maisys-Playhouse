
/* ==== CFrameWnd::CFrameWnd @ 004b79d7 ==== 
 * signature: undefined __thiscall CFrameWnd(CFrameWnd * this)
 * body: 004b79d7-004b7aa8
 * note: Library Function - Single Match  public: __thiscall CFrameWnd::CFrameWnd(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CFrameWnd::CFrameWnd(void)
   
   Library: Visual Studio 1998 Release */

CWnd * __thiscall CFrameWnd::CFrameWnd(CFrameWnd *this)

{
  CWnd *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(CWnd **)(unaff_EBP + -0x10) = this_00;
  CWnd::CWnd(this_00);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  CPtrList::CPtrList((CPtrList *)(this_00 + 0x6c),10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004abb44((undefined4 *)(this_00 + 0xac));
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(undefined ***)this_00 = &PTR_FUN_004ccc44;
  *(undefined4 *)(this_00 + 0x40) = 0xffffffff;
  *(undefined4 *)(this_00 + 0x9c) = 0;
  *(undefined4 *)(this_00 + 0x44) = 0;
  *(undefined4 *)(this_00 + 0x48) = 0;
  *(undefined4 *)(this_00 + 0x8c) = 0;
  *(undefined4 *)(this_00 + 0x90) = 0;
  *(undefined4 *)(this_00 + 0x94) = 0;
  *(undefined4 *)(this_00 + 0x98) = 0;
  *(undefined4 *)(this_00 + 0xa0) = 0;
  *(undefined4 *)(this_00 + 0xa4) = 0;
  *(undefined4 *)(this_00 + 0x68) = 0;
  *(undefined4 *)(this_00 + 0xa8) = 0;
  *(undefined4 *)(this_00 + 0xb8) = 0;
  *(undefined4 *)(this_00 + 0x3c) = 1;
  SetRectEmpty((LPRECT)(this_00 + 0x58));
  *(undefined4 *)(this_00 + 0x50) = 0;
  *(undefined4 *)(this_00 + 0x4c) = 0;
  *(undefined4 *)(this_00 + 0x54) = 0;
  *(undefined4 *)(this_00 + 0xb0) = 0;
  *(undefined4 *)(this_00 + 0xb4) = 0;
  *(undefined4 *)(this_00 + 0x88) = 0xffffffff;
  FUN_004b7b6a(this_00);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return this_00;
}


