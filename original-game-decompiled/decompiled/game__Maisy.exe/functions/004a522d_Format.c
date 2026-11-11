
/* ==== CTimeSpan::Format @ 004a522d ==== 
 * signature: CString __thiscall Format(CTimeSpan * this, uint param_1)
 * body: 004a522d-004a528a
 * note: Library Function - Single Match  public: class CString __thiscall CTimeSpan::Format(unsigned int)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CString __thiscall CTimeSpan::Format(unsigned int)const 
   
   Library: Visual Studio 1998 Release */

undefined4 __thiscall CTimeSpan::Format(CTimeSpan *this,uint param_1)

{
  undefined4 uVar1;
  CTimeSpan *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 1;
  CString::LoadStringA((CString *)(unaff_EBP + -0x10),*(uint *)(unaff_EBP + 0xc));
  Format(this_00,*(char **)(unaff_EBP + 8));
  *(byte *)(unaff_EBP + -0x14) = *(byte *)(unaff_EBP + -0x14) | 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004a52a4();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


