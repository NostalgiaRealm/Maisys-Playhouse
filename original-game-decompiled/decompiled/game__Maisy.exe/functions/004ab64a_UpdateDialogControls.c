
/* ==== CWnd::UpdateDialogControls @ 004ab64a ==== 
 * signature: void __thiscall UpdateDialogControls(CWnd * this, CCmdTarget * param_1, int param_2)
 * body: 004ab64a-004ab754
 * note: Library Function - Single Match  public: void __thiscall CWnd::UpdateDialogControls(class CCmdTarget *,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CWnd::UpdateDialogControls(class CCmdTarget *,int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CWnd::UpdateDialogControls(CWnd *this,CCmdTarget *param_1,int param_2)

{
  HWND hWnd;
  uint uVar1;
  void *this_00;
  int iVar2;
  ulong uVar3;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  CCmdUI::CCmdUI((CCmdUI *)(unaff_EBP + -0x38));
  CWnd((CWnd *)(unaff_EBP + -0x74));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  hWnd = GetTopWindow(*(HWND *)(*(int *)(unaff_EBP + -0x10) + 0x1c));
  do {
    if (hWnd == (HWND)0x0) {
      *(undefined4 *)(unaff_EBP + -0x58) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004ab75f();
      *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
      return;
    }
    *(HWND *)(unaff_EBP + -0x58) = hWnd;
    uVar1 = GetDlgCtrlID(hWnd);
    *(uint *)(unaff_EBP + -0x34) = uVar1 & 0xffff;
    *(int *)(unaff_EBP + -0x24) = unaff_EBP + -0x74;
    this_00 = FUN_004a8970(hWnd);
    if (((this_00 == (void *)0x0) ||
        (iVar2 = FUN_004a79cb(this_00,0,0xbd11ffff,(void *)(unaff_EBP + -0x38),
                              (AFX_CMDHANDLERINFO *)0x0), iVar2 == 0)) &&
       (iVar2 = FUN_004a79cb(*(void **)(unaff_EBP + -0x10),*(uint *)(unaff_EBP + -0x34),0xffffffff,
                             (void *)(unaff_EBP + -0x38),(AFX_CMDHANDLERINFO *)0x0), iVar2 == 0)) {
      iVar2 = *(int *)(unaff_EBP + 0xc);
      if (iVar2 != 0) {
        uVar1 = SendMessageA(*(HWND *)(unaff_EBP + -0x58),0x87,0,0);
        if ((uVar1 & 0x2000) != 0) {
          uVar3 = GetExStyle((CWnd *)(unaff_EBP + -0x74));
          uVar1 = uVar3 & 0xf;
          if (((uVar1 != 3) && (uVar1 != 6)) && ((uVar1 != 7 && (uVar1 != 9)))) goto LAB_004ab711;
        }
        iVar2 = 0;
      }
LAB_004ab711:
      FUN_004a7e4a((void *)(unaff_EBP + -0x38),*(int **)(unaff_EBP + 8),iVar2);
    }
    hWnd = GetWindow(hWnd,2);
  } while( true );
}


