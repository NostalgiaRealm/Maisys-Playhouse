
/* ==== CToolTipCtrl::CToolTipCtrl @ 004a2ada ==== 
 * signature: undefined __thiscall CToolTipCtrl(CToolTipCtrl * this)
 * body: 004a2ada-004a2b24
 * note: Library Function - Single Match  public: __thiscall CToolTipCtrl::CToolTipCtrl(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CToolTipCtrl::CToolTipCtrl(void)
   
   Library: Visual Studio 1998 Release */

CWnd * __thiscall CToolTipCtrl::CToolTipCtrl(CToolTipCtrl *this)

{
  CWnd *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(CWnd **)(unaff_EBP + -0x10) = this_00;
  CWnd::CWnd(this_00);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  CMapStringToPtr::CMapStringToPtr((CMapStringToPtr *)(this_00 + 0x3c),10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined ***)this_00 = &PTR_FUN_004ce8b4;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return this_00;
}


