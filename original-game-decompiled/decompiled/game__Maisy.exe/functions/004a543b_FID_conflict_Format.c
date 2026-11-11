
/* ==== FID_conflict:Format @ 004a543b ==== 
 * signature: undefined4 __stdcall FID_conflict:Format(void)
 * body: 004a543b-004a5498
 * note: Library Function - Multiple Matches With Different Base Names  public: class CString __thiscall CTime::Format(unsigned int)const   public: class CString __thiscall CTime::FormatGmt(unsigned int)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    public: class CString __thiscall CTime::Format(unsigned int)const 
    public: class CString __thiscall CTime::FormatGmt(unsigned int)const 
   
   Library: Visual Studio 1998 Release */

undefined4 FID_conflict_Format(void)

{
  undefined4 uVar1;
  CTime *this;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 1;
  CString::LoadStringA((CString *)(unaff_EBP + -0x10),*(uint *)(unaff_EBP + 0xc));
  CTime::FormatGmt(this,*(char **)(unaff_EBP + 8));
  *(byte *)(unaff_EBP + -0x14) = *(byte *)(unaff_EBP + -0x14) | 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004a54b2();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


