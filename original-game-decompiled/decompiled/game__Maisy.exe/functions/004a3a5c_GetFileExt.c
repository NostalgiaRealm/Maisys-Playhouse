
/* ==== CFileDialog::GetFileExt @ 004a3a5c ==== 
 * signature: CString __thiscall GetFileExt(CFileDialog * this)
 * body: 004a3a5c-004a3b30;004a3b39-004a3bb1
 * note: Library Function - Single Match  public: class CString __thiscall CFileDialog::GetFileExt(void)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CString __thiscall CFileDialog::GetFileExt(void)const 
   
   Library: Visual Studio 1998 Release */

undefined4 __thiscall CFileDialog::GetFileExt(CFileDialog *this)

{
  undefined4 uVar1;
  LPARAM lParam;
  HWND pHVar2;
  CWnd *pCVar3;
  LRESULT LVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (((*(byte *)(extraout_ECX + 0x92) & 8) == 0) || (*(int *)(extraout_ECX + 0x1c) == 0)) {
    iVar5 = *(int *)(extraout_ECX + 500);
    if (iVar5 == 0) {
      if (*(ushort *)(extraout_ECX + 0x96) == 0) {
        CString::CString(*(CString **)(unaff_EBP + 8),&DAT_004dd6e8);
        *(byte *)(unaff_EBP + -0x14) = *(byte *)(unaff_EBP + -0x14) | 1;
      }
      else {
        CString::CString(*(CString **)(unaff_EBP + 8),
                         (char *)(*(int *)(extraout_ECX + 0x78) +
                                 (uint)*(ushort *)(extraout_ECX + 0x96)));
        *(byte *)(unaff_EBP + -0x14) = *(byte *)(unaff_EBP + -0x14) | 1;
      }
    }
    else if (*(ushort *)(iVar5 + 0x3a) == 0) {
      CString::CString(*(CString **)(unaff_EBP + 8),&DAT_004dd6e8);
      *(byte *)(unaff_EBP + -0x14) = *(byte *)(unaff_EBP + -0x14) | 1;
    }
    else {
      CString::CString(*(CString **)(unaff_EBP + 8),
                       (char *)(*(int *)(iVar5 + 0x1c) + (uint)*(ushort *)(iVar5 + 0x3a)));
      *(byte *)(unaff_EBP + -0x14) = *(byte *)(unaff_EBP + -0x14) | 1;
    }
    goto LAB_004a3b05;
  }
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 1;
  lParam = FUN_004ac16a((void *)(unaff_EBP + -0x10),0x104);
  pHVar2 = GetParent(*(HWND *)(extraout_ECX + 0x1c));
  pCVar3 = CWnd::FromHandle(pHVar2);
  LVar4 = SendMessageA(*(HWND *)(pCVar3 + 0x1c),0x464,0x104,lParam);
  if (LVar4 < 0) {
LAB_004a3b1b:
    FUN_004abc24((CString *)(unaff_EBP + -0x10));
    CString::CString(*(CString **)(unaff_EBP + 8),(CString *)(unaff_EBP + -0x10));
  }
  else {
    CString::ReleaseBuffer((CString *)(unaff_EBP + -0x10),-1);
    iVar5 = CString::ReverseFind((CString *)(unaff_EBP + -0x10),'.');
    if (iVar5 < 0) goto LAB_004a3b1b;
    FUN_004a45c2();
  }
  *(byte *)(unaff_EBP + -0x14) = *(byte *)(unaff_EBP + -0x14) | 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004a3b31();
LAB_004a3b05:
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


