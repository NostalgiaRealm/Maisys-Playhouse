
/* ==== CFileDialog::GetPathName @ 004a382e ==== 
 * signature: CString __thiscall GetPathName(CFileDialog * this)
 * body: 004a382e-004a394e
 * note: Library Function - Single Match  public: class CString __thiscall CFileDialog::GetPathName(void)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CString __thiscall CFileDialog::GetPathName(void)const 
   
   Library: Visual Studio 1998 Release */

undefined4 __thiscall CFileDialog::GetPathName(CFileDialog *this)

{
  int *piVar1;
  undefined4 uVar2;
  LPARAM LVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  LRESULT LVar6;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (((*(byte *)(*(int *)(unaff_EBP + -0x18) + 0x92) & 8) != 0) &&
     (piVar1 = (int *)(*(int *)(unaff_EBP + -0x18) + 0x1c), *piVar1 != 0)) {
    FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
    *(undefined4 *)(unaff_EBP + -4) = 1;
    LVar3 = FUN_004ac16a((void *)(unaff_EBP + -0x10),0x104);
    pHVar4 = GetParent((HWND)*piVar1);
    pCVar5 = CWnd::FromHandle(pHVar4);
    LVar6 = SendMessageA(*(HWND *)(pCVar5 + 0x1c),0x464,0x104,LVar3);
    if (LVar6 < 0) {
      FUN_004abc24((CString *)(unaff_EBP + -0x10));
    }
    else {
      CString::ReleaseBuffer((CString *)(unaff_EBP + -0x10),-1);
    }
    if (*(int *)(*(int *)(unaff_EBP + -0x10) + -8) != 0) {
      LVar3 = FUN_004ac16a((void *)(unaff_EBP + -0x10),0x104);
      pHVar4 = GetParent((HWND)*piVar1);
      pCVar5 = CWnd::FromHandle(pHVar4);
      LVar6 = SendMessageA(*(HWND *)(pCVar5 + 0x1c),0x465,0x104,LVar3);
      if (-1 < LVar6) {
        CString::ReleaseBuffer((CString *)(unaff_EBP + -0x10),-1);
        CString::CString(*(CString **)(unaff_EBP + 8),(CString *)(unaff_EBP + -0x10));
        *(byte *)(unaff_EBP + -0x14) = *(byte *)(unaff_EBP + -0x14) | 1;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_004a394f();
        goto LAB_004a3914;
      }
      FUN_004abc24((CString *)(unaff_EBP + -0x10));
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_004a394f();
  }
  CString::CString(*(CString **)(unaff_EBP + 8),*(char **)(*(int *)(unaff_EBP + -0x18) + 0x78));
  *(byte *)(unaff_EBP + -0x14) = *(byte *)(unaff_EBP + -0x14) | 1;
LAB_004a3914:
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar2;
}


