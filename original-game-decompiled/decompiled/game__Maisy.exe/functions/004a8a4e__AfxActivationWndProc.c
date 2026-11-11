
/* ==== _AfxActivationWndProc @ 004a8a4e ==== 
 * signature: long __stdcall _AfxActivationWndProc(HWND__ * param_1, uint param_2, uint param_3, long param_4)
 * body: 004a8a4e-004a8b7e
 * note: Library Function - Single Match  long __stdcall _AfxActivationWndProc(struct HWND__ *,unsigned int,unsigned int,long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    long __stdcall _AfxActivationWndProc(struct HWND__ *,unsigned int,unsigned int,long)
   
   Library: Visual Studio 1998 Release */

long _AfxActivationWndProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  WNDPROC lpPrevWndFunc;
  CWnd *pCVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  CWnd *pCVar6;
  LRESULT LVar7;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffb0;
  lpPrevWndFunc = GetPropA(*(HWND *)(unaff_EBP + 8),"AfxOldWndProc");
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 1;
  iVar5 = *(int *)(unaff_EBP + 0xc);
  if (iVar5 == 6) {
    pCVar6 = CWnd::FromHandle(*(HWND__ **)(unaff_EBP + 0x14));
    uVar3 = *(uint *)(unaff_EBP + 0x10);
    pCVar2 = CWnd::FromHandle(*(HWND__ **)(unaff_EBP + 8));
    _AfxHandleActivate(pCVar2,uVar3,pCVar6);
  }
  else if (iVar5 == 0x20) {
    uVar3 = *(uint *)(unaff_EBP + 0x14) >> 0x10;
    uVar4 = (uint)*(short *)(unaff_EBP + 0x14);
    pCVar6 = CWnd::FromHandle(*(HWND__ **)(unaff_EBP + 8));
    iVar5 = _AfxHandleSetCursor(pCVar6,uVar4,uVar3);
    *(uint *)(unaff_EBP + -0x18) = (uint)(iVar5 == 0);
  }
  else if (iVar5 == 0x82) {
    SetWindowLongA(*(HWND *)(unaff_EBP + 8),-4,(LONG)lpPrevWndFunc);
    RemovePropA(*(HWND *)(unaff_EBP + 8),"AfxOldWndProc");
  }
  else if (iVar5 == 0x110) {
    pCVar6 = CWnd::FromHandle(*(HWND__ **)(unaff_EBP + 8));
    _AfxPreInitDialog(pCVar6,(tagRECT *)(unaff_EBP + -0x34),(ulong *)(unaff_EBP + -0x20));
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    LVar7 = CallWindowProcA(lpPrevWndFunc,*(HWND *)(unaff_EBP + 8),*(UINT *)(unaff_EBP + 0xc),
                            *(WPARAM *)(unaff_EBP + 0x10),*(LPARAM *)(unaff_EBP + 0x14));
    *(LRESULT *)(unaff_EBP + -0x14) = LVar7;
    _AfxPostInitDialog(pCVar6,(tagRECT *)(unaff_EBP + -0x34),*(ulong *)(unaff_EBP + -0x20));
  }
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    LVar7 = CallWindowProcA(lpPrevWndFunc,*(HWND *)(unaff_EBP + 8),*(UINT *)(unaff_EBP + 0xc),
                            *(WPARAM *)(unaff_EBP + 0x10),*(LPARAM *)(unaff_EBP + 0x14));
    *(LRESULT *)(unaff_EBP + -0x14) = LVar7;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  lVar1 = *(long *)(unaff_EBP + -0x14);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return lVar1;
}


