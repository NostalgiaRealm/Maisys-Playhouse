
/* ==== CNewTypeDlg::OnOK @ 004b569b ==== 
 * signature: void __thiscall OnOK(CNewTypeDlg * this)
 * body: 004b569b-004b56e3
 * note: Library Function - Single Match  protected: virtual void __thiscall CNewTypeDlg::OnOK(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: virtual void __thiscall CNewTypeDlg::OnOK(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CNewTypeDlg::OnOK(CNewTypeDlg *this)

{
  CWnd *pCVar1;
  WPARAM wParam;
  LRESULT LVar2;
  
  pCVar1 = CWnd::GetDlgItem((CWnd *)this,100);
  wParam = SendMessageA(*(HWND *)(pCVar1 + 0x1c),0x188,0,0);
  if (wParam == 0xffffffff) {
    *(undefined4 *)(this + 0x60) = 0;
  }
  else {
    LVar2 = SendMessageA(*(HWND *)(pCVar1 + 0x1c),0x199,wParam,0);
    *(LRESULT *)(this + 0x60) = LVar2;
  }
  CDialog::OnOK((CDialog *)this);
  return;
}


