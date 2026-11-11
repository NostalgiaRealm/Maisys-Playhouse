
/* ==== AfxFullPath @ 004ae330 ==== 
 * signature: int __stdcall AfxFullPath(char * param_1, char * param_2)
 * body: 004ae330-004ae40e
 * note: Library Function - Single Match  int __stdcall AfxFullPath(char *,char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __stdcall AfxFullPath(char *,char const *)
   
   Library: Visual Studio 1998 Release */

int AfxFullPath(char *param_1,char *param_2)

{
  LPSTR lpBuffer;
  LPCSTR lpFileName;
  DWORD DVar1;
  int iVar2;
  BOOL BVar3;
  HANDLE hFindFile;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  lpBuffer = *(LPSTR *)(unaff_EBP + 8);
  lpFileName = *(LPCSTR *)(unaff_EBP + 0xc);
  DVar1 = GetFullPathNameA(lpFileName,0x104,lpBuffer,(LPSTR *)(unaff_EBP + -0x18));
  if (DVar1 == 0) {
    lstrcpynA(lpBuffer,lpFileName,0x104);
  }
  else {
    FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
    *(undefined4 *)(unaff_EBP + -4) = 0;
    AfxGetRoot(lpBuffer,(CString *)(unaff_EBP + -0x10));
    BVar3 = GetVolumeInformationA
                      (*(LPCSTR *)(unaff_EBP + -0x10),(LPSTR)0x0,0,(LPDWORD)0x0,
                       (LPDWORD)(unaff_EBP + -0x1c),(LPDWORD)(unaff_EBP + -0x14),(LPSTR)0x0,0);
    if (BVar3 != 0) {
      if ((*(byte *)(unaff_EBP + -0x14) & 2) == 0) {
        CharUpperA(lpBuffer);
      }
      if ((*(byte *)(unaff_EBP + -0x14) & 4) == 0) {
        hFindFile = FindFirstFileA(lpFileName,(LPWIN32_FIND_DATAA)(unaff_EBP + -0x15c));
        if (hFindFile != (HANDLE)0xffffffff) {
          FindClose(hFindFile);
          lstrcpyA(*(LPSTR *)(unaff_EBP + -0x18),(LPCSTR)(unaff_EBP + -0x130));
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004ae419();
      iVar2 = 1;
      goto LAB_004ae36a;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004ae419();
  }
  iVar2 = 0;
LAB_004ae36a:
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return iVar2;
}


