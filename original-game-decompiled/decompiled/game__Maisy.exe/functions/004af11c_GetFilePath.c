
/* ==== CFile::GetFilePath @ 004af11c ==== 
 * signature: CString __thiscall GetFilePath(CFile * this)
 * body: 004af11c-004af164
 * note: Library Function - Single Match  public: virtual class CString __thiscall CFile::GetFilePath(void)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual class CString __thiscall CFile::GetFilePath(void)const 
   
   Library: Visual Studio 1998 Release */

undefined4 __thiscall CFile::GetFilePath(CFile *this)

{
  undefined4 uVar1;
  CFile *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  GetStatus(this_00,(CFileStatus *)(unaff_EBP + -0x128));
  CString::CString(*(CString **)(unaff_EBP + 8),(char *)(unaff_EBP + -0x116));
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(byte *)(unaff_EBP + -0x10) = *(byte *)(unaff_EBP + -0x10) | 1;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


