
/* ==== CString::Format @ 004a4b72 ==== 
 * signature: void __thiscall Format(CString * this, uint param_1, ...)
 * body: 004a4b72-004a4bc0
 * note: Library Function - Single Match  public: void __cdecl CString::Format(unsigned int,...)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __cdecl CString::Format(unsigned int,...)
   
   Library: Visual Studio 1998 Release */

void __thiscall CString::Format(CString *this,uint param_1,...)

{
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  LoadStringA((CString *)(unaff_EBP + -0x10),*(uint *)(unaff_EBP + 0xc));
  FUN_004a4804(*(void **)(unaff_EBP + 8),*(byte **)(unaff_EBP + -0x10),(int *)(unaff_EBP + 0x10));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004a4bcb();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


