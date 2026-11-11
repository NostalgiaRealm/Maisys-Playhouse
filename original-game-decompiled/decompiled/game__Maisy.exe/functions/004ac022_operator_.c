
/* ==== operator+ @ 004ac022 ==== 
 * signature: CString __stdcall operator+(char * param_1, CString * param_2)
 * body: 004ac022-004ac095
 * note: Library Function - Single Match  class CString __stdcall operator+(char const *,class CString const &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    class CString __stdcall operator+(char const *,class CString const &)
   
   Library: Visual Studio 1998 Release */

undefined4 operator+(char *param_1,CString *param_2)

{
  LPCSTR lpString;
  undefined4 uVar1;
  int unaff_EBP;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  iVar2 = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 1;
  lpString = *(LPCSTR *)(unaff_EBP + 0xc);
  if (lpString != (LPCSTR)0x0) {
    iVar2 = lstrlenA(lpString);
  }
  CString::ConcatCopy((CString *)(unaff_EBP + -0x10),iVar2,lpString,
                      *(int *)((char *)**(undefined4 **)(unaff_EBP + 0x10) + -8),
                      (char *)**(undefined4 **)(unaff_EBP + 0x10));
  CString::CString(*(CString **)(unaff_EBP + 8),(CString *)(unaff_EBP + -0x10));
  *(byte *)(unaff_EBP + -0x14) = *(byte *)(unaff_EBP + -0x14) | 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004ac0af();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


