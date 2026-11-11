
/* ==== CDialog::CDialog @ 004a6761 ==== 
 * signature: undefined __thiscall CDialog(CDialog * this, char * param_1, CWnd * param_2)
 * body: 004a6761-004a67c9
 * note: Library Function - Single Match  public: __thiscall CDialog::CDialog(char const *,class CWnd *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CDialog::CDialog(char const *,class CWnd *)
   
   Library: Visual Studio 1998 Release */

CWnd * __thiscall CDialog::CDialog(CDialog *this,char *param_1,CWnd *param_2)

{
  uint uVar1;
  CWnd *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(CWnd **)(unaff_EBP + -0x10) = this_00;
  CWnd::CWnd(this_00);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined ***)this_00 = &PTR_FUN_004cae4c;
  _memset(this_00 + 0x3c,0,0x20);
  *(undefined4 *)(this_00 + 0x50) = *(undefined4 *)(unaff_EBP + 0xc);
  uVar1 = *(uint *)(unaff_EBP + 8);
  *(uint *)(this_00 + 0x40) = uVar1;
  if ((short)(uVar1 >> 0x10) == 0) {
    *(uint *)(this_00 + 0x3c) = uVar1 & 0xffff;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return this_00;
}


