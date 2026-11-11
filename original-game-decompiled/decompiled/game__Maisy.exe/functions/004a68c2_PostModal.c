
/* ==== CDialog::PostModal @ 004a68c2 ==== 
 * signature: void __thiscall PostModal(CDialog * this)
 * body: 004a68c2-004a6900
 * note: Library Function - Single Match  protected: void __thiscall CDialog::PostModal(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: void __thiscall CDialog::PostModal(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CDialog::PostModal(CDialog *this)

{
  BOOL BVar1;
  int iVar2;
  CDialog *pCVar3;
  int iVar4;
  
  FUN_004a8f79();
  pCVar3 = this + 0x54;
  CWnd::Detach((CWnd *)this);
  BVar1 = IsWindow(*(HWND *)pCVar3);
  if (BVar1 != 0) {
    EnableWindow(*(HWND *)pCVar3,1);
  }
  iVar4 = 1;
  *(undefined4 *)pCVar3 = 0;
  iVar2 = FUN_004bafca();
  CWinApp::EnableModeless(*(CWinApp **)(iVar2 + 4),iVar4);
  return;
}


