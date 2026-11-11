
/* ==== CWnd::WinHelpA @ 004a9917 ==== 
 * signature: void __thiscall WinHelpA(CWnd * this, ulong param_1, uint param_2)
 * body: 004a9917-004a99f7
 * note: Library Function - Single Match  public: virtual void __thiscall CWnd::WinHelpA(unsigned long,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CWnd::WinHelpA(unsigned long,unsigned int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CWnd::WinHelpA(CWnd *this,ulong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CWnd *pCVar4;
  HWND hWnd;
  BOOL BVar5;
  CWnd *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  iVar1 = FUN_004bafca();
  iVar1 = *(int *)(iVar1 + 4);
  iVar2 = FUN_004bafca();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(iVar2 + 4));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar2 = *(int *)this_00;
  iVar3 = (**(code **)(iVar2 + 0xb4))();
  if (iVar3 != 0) {
    (**(code **)(iVar2 + 0xf4))();
  }
  SendMessageA(*(HWND *)(this_00 + 0x1c),0x1f,0,0);
  SendMessageToDescendants(*(HWND__ **)(this_00 + 0x1c),0x1f,0,0,1,1);
  pCVar4 = GetTopLevelParent(this_00);
  pCVar4 = pCVar4 + 0x1c;
  SendMessageA(*(HWND *)pCVar4,0x1f,0,0);
  SendMessageToDescendants(*(HWND__ **)pCVar4,0x1f,0,0,1,1);
  hWnd = GetCapture();
  if (hWnd != (HWND)0x0) {
    SendMessageA(hWnd,0x1f,0,0);
  }
  BVar5 = ::WinHelpA(*(HWND *)pCVar4,*(LPCSTR *)(iVar1 + 0x84),*(UINT *)(unaff_EBP + 0xc),
                     *(ULONG_PTR *)(unaff_EBP + 8));
  if (BVar5 == 0) {
    AfxMessageBox(0xf107,0,0xffffffff);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004a9a02();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


