
/* ==== CString::FormatMessageA @ 004a4c1f ==== 
 * signature: void __thiscall FormatMessageA(CString * this, uint param_1, ...)
 * body: 004a4c1f-004a4ca2
 * note: Library Function - Single Match  public: void __cdecl CString::FormatMessageA(unsigned int,...)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __cdecl CString::FormatMessageA(unsigned int,...)
   
   Library: Visual Studio 1998 Release */

void __thiscall CString::FormatMessageA(CString *this,uint param_1,...)

{
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  LoadStringA((CString *)(unaff_EBP + -0x10),*(uint *)(unaff_EBP + 0xc));
  *(int *)(unaff_EBP + -0x18) = unaff_EBP + 0x10;
  ::FormatMessageA(0x500,*(LPCVOID *)(unaff_EBP + -0x10),0,0,(LPSTR)(unaff_EBP + -0x14),0,
                   (va_list *)(unaff_EBP + -0x18));
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    FUN_004a3538();
  }
  operator=(*(CString **)(unaff_EBP + 8),*(char **)(unaff_EBP + -0x14));
  LocalFree(*(HLOCAL *)(unaff_EBP + -0x14));
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004a4cad();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


