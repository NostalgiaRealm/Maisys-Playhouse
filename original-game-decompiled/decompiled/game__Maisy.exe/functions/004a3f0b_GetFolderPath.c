
/* ==== CFileDialog::GetFolderPath @ 004a3f0b ==== 
 * signature: CString __thiscall GetFolderPath(CFileDialog * this)
 * body: 004a3f0b-004a3fa8
 * note: Library Function - Single Match  public: class CString __thiscall CFileDialog::GetFolderPath(void)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CString __thiscall CFileDialog::GetFolderPath(void)const 
   
   Library: Visual Studio 1998 Release */

undefined4 __thiscall CFileDialog::GetFolderPath(CFileDialog *this)

{
  undefined4 uVar1;
  LPARAM lParam;
  HWND pHVar2;
  CWnd *pCVar3;
  LRESULT LVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 1;
  lParam = FUN_004ac16a((void *)(unaff_EBP + -0x10),0x104);
  pHVar2 = GetParent(*(HWND *)(extraout_ECX + 0x1c));
  pCVar3 = CWnd::FromHandle(pHVar2);
  LVar4 = SendMessageA(*(HWND *)(pCVar3 + 0x1c),0x466,0x104,lParam);
  if (LVar4 < 0) {
    FUN_004abc24((CString *)(unaff_EBP + -0x10));
  }
  else {
    CString::ReleaseBuffer((CString *)(unaff_EBP + -0x10),-1);
  }
  CString::CString(*(CString **)(unaff_EBP + 8),(CString *)(unaff_EBP + -0x10));
  *(byte *)(unaff_EBP + -0x14) = *(byte *)(unaff_EBP + -0x14) | 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004a3fc2();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


