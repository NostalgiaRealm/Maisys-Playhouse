
/* ==== CMirrorFile::Close @ 004b03d0 ==== 
 * signature: void __thiscall Close(CMirrorFile * this)
 * body: 004b03d0-004b042e
 * note: Library Function - Single Match  public: virtual void __thiscall CMirrorFile::Close(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CMirrorFile::Close(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CMirrorFile::Close(CMirrorFile *this)

{
  CFile *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  CString::CString((CString *)(unaff_EBP + -0x10),(CString *)(this_00 + 0xc));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  CFile::Close(this_00);
  if (*(int *)(*(int *)(this_00 + 0x10) + -8) != 0) {
    CFile::Remove(*(char **)(unaff_EBP + -0x10));
    CFile::Rename(*(char **)(this_00 + 0x10),*(char **)(unaff_EBP + -0x10));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b0439();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


