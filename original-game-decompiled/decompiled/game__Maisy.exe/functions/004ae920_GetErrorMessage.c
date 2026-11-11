
/* ==== GetErrorMessage @ 004ae920 ==== 
 * signature: undefined4 __stdcall GetErrorMessage(void)
 * body: 004ae920-004ae9c4
 * note: Library Function - Multiple Matches With Same Base Name  public: virtual int __thiscall CArchiveException::GetErrorMessage(char *,unsigned int,unsigned int *)  public: virtual int __thiscall CFileException::GetErrorMessage(char *,unsigned int,unsigned int *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CArchiveException::GetErrorMessage(char *,unsigned int,unsigned
   int *)
    public: virtual int __thiscall CFileException::GetErrorMessage(char *,unsigned int,unsigned int
   *)
   
   Library: Visual Studio 1998 Release */

undefined4 GetErrorMessage(void)

{
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
    **(int **)(unaff_EBP + 0x10) = *(int *)(extraout_ECX + 8) + 0xf1a0;
  }
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x14));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  CString::CString((CString *)(unaff_EBP + -0x10),(CString *)(extraout_ECX + 0x10));
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(*(int *)(unaff_EBP + -0x10) + -8) == 0) {
    CString::LoadStringA((CString *)(unaff_EBP + -0x10),0xf006);
  }
  AfxFormatString1((CString *)(unaff_EBP + -0x14),*(int *)(extraout_ECX + 8) + 0xf1a0,
                   *(char **)(unaff_EBP + -0x10));
  lstrcpynA(*(LPSTR *)(unaff_EBP + 8),*(LPCSTR *)(unaff_EBP + -0x14),*(int *)(unaff_EBP + 0xc));
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004ae9c5();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004ae9d7();
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return 1;
}


