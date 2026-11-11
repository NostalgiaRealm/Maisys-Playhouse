
/* ==== CFileDialog::GetFileTitle @ 004a3bcb ==== 
 * signature: CString __thiscall GetFileTitle(CFileDialog * this)
 * body: 004a3bcb-004a3c3d
 * note: Library Function - Single Match  public: class CString __thiscall CFileDialog::GetFileTitle(void)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CString __thiscall CFileDialog::GetFileTitle(void)const 
   
   Library: Visual Studio 1998 Release */

undefined4 __thiscall CFileDialog::GetFileTitle(CFileDialog *this)

{
  undefined4 uVar1;
  int iVar2;
  CFileDialog *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  GetFileName(this_00);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iVar2 = CString::ReverseFind((CString *)(unaff_EBP + -0x10),'.');
  if (iVar2 < 0) {
    CString::CString(*(CString **)(unaff_EBP + 8),(CString *)(unaff_EBP + -0x10));
    *(byte *)(unaff_EBP + -0x14) = *(byte *)(unaff_EBP + -0x14) | 1;
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    FUN_004a4662();
    *(byte *)(unaff_EBP + -0x14) = *(byte *)(unaff_EBP + -0x14) | 1;
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  FUN_004a3c57();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


