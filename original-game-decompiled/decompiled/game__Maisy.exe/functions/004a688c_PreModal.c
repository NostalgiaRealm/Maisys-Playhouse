
/* ==== CDialog::PreModal @ 004a688c ==== 
 * signature: HWND__ * __thiscall PreModal(CDialog * this)
 * body: 004a688c-004a68c1
 * note: Library Function - Single Match  protected: struct HWND__ * __thiscall CDialog::PreModal(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: struct HWND__ * __thiscall CDialog::PreModal(void)
   
   Library: Visual Studio 1998 Release */

HWND__ * __thiscall CDialog::PreModal(CDialog *this)

{
  int iVar1;
  HWND__ *pHVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_004bafca();
  CWinApp::EnableModeless(*(CWinApp **)(iVar1 + 4),iVar3);
  iVar1 = FUN_004aa4dc(*(int *)(this + 0x50),(undefined4 *)(this + 0x54));
  FUN_004a8f34((int)this);
  pHVar2 = (HWND__ *)0x0;
  if (iVar1 != 0) {
    pHVar2 = *(HWND__ **)(iVar1 + 0x1c);
  }
  return pHVar2;
}


