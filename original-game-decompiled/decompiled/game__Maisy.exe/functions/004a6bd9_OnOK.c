
/* ==== CDialog::OnOK @ 004a6bd9 ==== 
 * signature: void __thiscall OnOK(CDialog * this)
 * body: 004a6bd9-004a6bf1
 * note: Library Function - Single Match  protected: virtual void __thiscall CDialog::OnOK(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: virtual void __thiscall CDialog::OnOK(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CDialog::OnOK(CDialog *this)

{
  int iVar1;
  
  iVar1 = CWnd::UpdateData((CWnd *)this,1);
  if (iVar1 != 0) {
    EndDialog(this,1);
  }
  return;
}


