
/* ==== CWinApp::HideApplication @ 004b43c8 ==== 
 * signature: void __thiscall HideApplication(CWinApp * this)
 * body: 004b43c8-004b43f7
 * note: Library Function - Single Match  public: void __thiscall CWinApp::HideApplication(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CWinApp::HideApplication(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CWinApp::HideApplication(CWinApp *this)

{
  CWinApp *pCVar1;
  
  pCVar1 = this + 0x1c;
  CWnd::ShowWindow(*(CWnd **)pCVar1,0);
  ShowOwnedPopups(*(HWND *)(*(int *)pCVar1 + 0x1c),0);
  CWnd::SetWindowPos(*(CWnd **)pCVar1,(CWnd *)&DAT_004e4f00,0,0,0,0,0x13);
  return;
}


