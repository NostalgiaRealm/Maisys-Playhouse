
/* ==== CDialog::CDialog @ 004a632f ==== 
 * signature: undefined __thiscall CDialog(CDialog * this)
 * body: 004a632f-004a6378
 * note: Library Function - Single Match  public: __thiscall CDialog::CDialog(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CDialog::CDialog(void)
   
   Library: Visual Studio 1998 Release */

CWnd * __thiscall CDialog::CDialog(CDialog *this)

{
  CWnd *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(CWnd **)(unaff_EBP + -0x10) = this_00;
  CWnd::CWnd(this_00);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined ***)this_00 = &PTR_FUN_004cae4c;
  _memset(this_00 + 0x3c,0,0x20);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return this_00;
}


