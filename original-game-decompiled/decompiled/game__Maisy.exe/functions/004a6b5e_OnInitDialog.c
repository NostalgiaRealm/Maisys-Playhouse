
/* ==== CDialog::OnInitDialog @ 004a6b5e ==== 
 * signature: int __thiscall OnInitDialog(CDialog * this)
 * body: 004a6b5e-004a6bd8
 * note: Library Function - Single Match  public: virtual int __thiscall CDialog::OnInitDialog(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CDialog::OnInitDialog(void)
   
   Library: Visual Studio 1998 Release */

int __thiscall CDialog::OnInitDialog(CDialog *this)

{
  int iVar1;
  CWnd *this_00;
  
  if (*(void **)(this + 0x4c) == (void *)0x0) {
    iVar1 = CWnd::ExecuteDlgInit((CWnd *)this,*(char **)(this + 0x40));
  }
  else {
    iVar1 = CWnd::ExecuteDlgInit((CWnd *)this,*(void **)(this + 0x4c));
  }
  if (iVar1 == 0) {
    EndDialog(this,-1);
    iVar1 = 0;
  }
  else {
    iVar1 = CWnd::UpdateData((CWnd *)this,0);
    if (iVar1 == 0) {
      EndDialog(this,-1);
      iVar1 = 0;
    }
    else {
      this_00 = CWnd::GetDlgItem((CWnd *)this,0xe146);
      if (this_00 != (CWnd *)0x0) {
        iVar1 = AfxHelpEnabled();
        CWnd::ShowWindow(this_00,(iVar1 == 0) - 1 & 5);
      }
      iVar1 = 1;
    }
  }
  return iVar1;
}


