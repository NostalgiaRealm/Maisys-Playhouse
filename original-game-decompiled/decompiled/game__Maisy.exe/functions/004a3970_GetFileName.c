
/* ==== CFileDialog::GetFileName @ 004a3970 ==== 
 * signature: CString __thiscall GetFileName(CFileDialog * this)
 * body: 004a3970-004a3a3a
 * note: Library Function - Single Match  public: class CString __thiscall CFileDialog::GetFileName(void)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CString __thiscall CFileDialog::GetFileName(void)const 
   
   Library: Visual Studio 1998 Release */

undefined4 __thiscall CFileDialog::GetFileName(CFileDialog *this)

{
  byte bVar1;
  undefined4 uVar2;
  LPARAM lParam;
  HWND pHVar3;
  CWnd *pCVar4;
  LRESULT LVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  bVar1 = *(byte *)(extraout_ECX + 0x92);
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (((bVar1 & 8) != 0) && (*(int *)(extraout_ECX + 0x1c) != 0)) {
    FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
    *(undefined4 *)(unaff_EBP + -4) = 1;
    lParam = FUN_004ac16a((void *)(unaff_EBP + -0x10),0x104);
    pHVar3 = GetParent(*(HWND *)(*(int *)(unaff_EBP + -0x14) + 0x1c));
    pCVar4 = CWnd::FromHandle(pHVar3);
    LVar5 = SendMessageA(*(HWND *)(pCVar4 + 0x1c),0x464,0x104,lParam);
    if (-1 < LVar5) {
      CString::ReleaseBuffer((CString *)(unaff_EBP + -0x10),-1);
      CString::CString(*(CString **)(unaff_EBP + 8),(CString *)(unaff_EBP + -0x10));
      *(byte *)(unaff_EBP + -0x18) = *(byte *)(unaff_EBP + -0x18) | 1;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_004a3a3b();
      goto LAB_004a3a00;
    }
    FUN_004abc24((CString *)(unaff_EBP + -0x10));
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_004a3a3b();
  }
  CString::CString(*(CString **)(unaff_EBP + 8),*(char **)(*(int *)(unaff_EBP + -0x14) + 0x80));
  *(byte *)(unaff_EBP + -0x18) = *(byte *)(unaff_EBP + -0x18) | 1;
LAB_004a3a00:
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar2;
}


