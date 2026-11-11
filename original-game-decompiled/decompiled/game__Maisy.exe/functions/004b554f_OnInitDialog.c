
/* ==== CNewTypeDlg::OnInitDialog @ 004b554f ==== 
 * signature: int __thiscall OnInitDialog(CNewTypeDlg * this)
 * body: 004b554f-004b5637;004b564a-004b569a
 * note: Library Function - Single Match  protected: virtual int __thiscall CNewTypeDlg::OnInitDialog(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: virtual int __thiscall CNewTypeDlg::OnInitDialog(void)
   
   Library: Visual Studio 1998 Release */

int __thiscall CNewTypeDlg::OnInitDialog(CNewTypeDlg *this)

{
  int *lParam;
  CWnd *pCVar1;
  int iVar2;
  WPARAM wParam;
  LRESULT LVar3;
  CWnd *this_00;
  CDialog *this_01;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(CWnd **)(unaff_EBP + -0x10) = this_00;
  pCVar1 = CWnd::GetDlgItem(this_00,100);
  *(CWnd **)(unaff_EBP + -0x14) = pCVar1;
  SendMessageA(*(HWND *)(pCVar1 + 0x1c),0x184,0,0);
  iVar2 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x5c) + 4);
  *(int *)(unaff_EBP + -0x18) = iVar2;
  while (iVar2 != 0) {
    lParam = (int *)(*(undefined4 **)(unaff_EBP + -0x18))[2];
    *(undefined4 *)(unaff_EBP + -0x18) = **(undefined4 **)(unaff_EBP + -0x18);
    FUN_004abb44((undefined4 *)(unaff_EBP + -0x1c));
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar2 = (**(code **)(*lParam + 0x68))(unaff_EBP + -0x1c,2);
    if ((iVar2 != 0) && (*(int *)(*(int *)(unaff_EBP + -0x1c) + -8) != 0)) {
      wParam = SendMessageA(*(HWND *)(*(int *)(unaff_EBP + -0x14) + 0x1c),0x180,0,
                            *(int *)(unaff_EBP + -0x1c));
      if (wParam == 0xffffffff) {
        CDialog::EndDialog(*(CDialog **)(unaff_EBP + -0x10),-1);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004b5642();
        iVar2 = 0;
        goto LAB_004b568c;
      }
      SendMessageA(*(HWND *)(*(int *)(unaff_EBP + -0x14) + 0x1c),0x19a,wParam,(LPARAM)lParam);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004b5642();
    iVar2 = *(int *)(unaff_EBP + -0x18);
  }
  LVar3 = SendMessageA(*(HWND *)(*(int *)(unaff_EBP + -0x14) + 0x1c),0x18b,0,0);
  if (LVar3 == 0) {
    iVar2 = -1;
    this_01 = *(CDialog **)(unaff_EBP + -0x10);
  }
  else {
    if (LVar3 != 1) {
      SendMessageA(*(HWND *)(*(int *)(unaff_EBP + -0x14) + 0x1c),0x186,0,0);
      goto LAB_004b5684;
    }
    LVar3 = SendMessageA(*(HWND *)(*(int *)(unaff_EBP + -0x14) + 0x1c),0x199,0,0);
    this_01 = *(CDialog **)(unaff_EBP + -0x10);
    iVar2 = 1;
    *(LRESULT *)(this_01 + 0x60) = LVar3;
  }
  CDialog::EndDialog(this_01,iVar2);
LAB_004b5684:
  iVar2 = CDialog::OnInitDialog(*(CDialog **)(unaff_EBP + -0x10));
LAB_004b568c:
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return iVar2;
}


