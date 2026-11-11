
/* ==== CMirrorFile::Open @ 004b01c4 ==== 
 * signature: int __thiscall Open(CMirrorFile * this, char * param_1, uint param_2, CFileException * param_3)
 * body: 004b01c4-004b037a;004b038d-004b03b6
 * note: Library Function - Single Match  public: virtual int __thiscall CMirrorFile::Open(char const *,unsigned int,class CFileException *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CMirrorFile::Open(char const *,unsigned int,class CFileException
   *)
   
   Library: Visual Studio 1998 Release */

int __thiscall
CMirrorFile::Open(CMirrorFile *this,char *param_1,uint param_2,CFileException *param_3)

{
  int iVar1;
  BOOL BVar2;
  LPSTR lpTempFileName;
  LPVOID pSecurityDescriptor;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  *(CString **)(unaff_EBP + -0x18) = (CString *)(extraout_ECX + 0x10);
  FUN_004abc24((CString *)(extraout_ECX + 0x10));
  if ((*(byte *)(unaff_EBP + 0xd) & 0x10) != 0) {
    iVar1 = CFile::GetStatus(*(char **)(unaff_EBP + 8),(CFileStatus *)(unaff_EBP + -0x150));
    if (iVar1 != 0) {
      iVar1 = 0;
      FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
      *(undefined4 *)(unaff_EBP + -4) = 0;
      AfxGetRoot(*(char **)(unaff_EBP + 8),(CString *)(unaff_EBP + -0x10));
      BVar2 = GetDiskFreeSpaceA(*(LPCSTR *)(unaff_EBP + -0x10),(LPDWORD)(unaff_EBP + -0x24),
                                (LPDWORD)(unaff_EBP + -0x2c),(LPDWORD)(unaff_EBP + -0x34),
                                (LPDWORD)(unaff_EBP + -0x38));
      if (BVar2 != 0) {
        iVar1 = *(int *)(unaff_EBP + -0x34) * *(int *)(unaff_EBP + -0x2c) *
                *(int *)(unaff_EBP + -0x24);
      }
      if (*(int *)(unaff_EBP + -0x144) * 2 < iVar1) {
        GetFullPathNameA(*(LPCSTR *)(unaff_EBP + 8),0x104,(LPSTR)(unaff_EBP + -0x254),
                         (LPSTR *)(unaff_EBP + -0x1c));
        **(undefined1 **)(unaff_EBP + -0x1c) = 0;
        lpTempFileName = (LPSTR)FUN_004ac16a(*(void **)(unaff_EBP + -0x18),0x105);
        GetTempFileNameA((LPCSTR)(unaff_EBP + -0x254),"MFC",0,lpTempFileName);
        CString::ReleaseBuffer(*(CString **)(unaff_EBP + -0x18),-1);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004b0385();
    }
  }
  if (*(int *)((char *)**(undefined4 **)(unaff_EBP + -0x18) + -8) != 0) {
    iVar1 = CFile::Open(*(CFile **)(unaff_EBP + -0x14),(char *)**(undefined4 **)(unaff_EBP + -0x18),
                        *(uint *)(unaff_EBP + 0xc),*(CFileException **)(unaff_EBP + 0x10));
    if (iVar1 != 0) {
      CString::operator=((CString *)(*(int *)(unaff_EBP + -0x14) + 0xc),*(char **)(unaff_EBP + 8));
      BVar2 = GetFileTime(*(HANDLE *)(*(int *)(unaff_EBP + -0x14) + 4),
                          (LPFILETIME)(unaff_EBP + -0x20),(LPFILETIME)(unaff_EBP + -0x28),
                          (LPFILETIME)(unaff_EBP + -0x30));
      if (BVar2 != 0) {
        AfxTimeToFileTime((CTime *)(unaff_EBP + -0x150),(_FILETIME *)(unaff_EBP + -0x20));
        SetFileTime(*(HANDLE *)(*(int *)(unaff_EBP + -0x14) + 4),(FILETIME *)(unaff_EBP + -0x20),
                    (FILETIME *)(unaff_EBP + -0x28),(FILETIME *)(unaff_EBP + -0x30));
      }
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      GetFileSecurityA(*(LPCSTR *)(unaff_EBP + 8),4,(PSECURITY_DESCRIPTOR)0x0,0,
                       (LPDWORD)(unaff_EBP + -0x10));
      pSecurityDescriptor = (LPVOID)FUN_004a5fed(*(SIZE_T *)(unaff_EBP + -0x10));
      BVar2 = GetFileSecurityA(*(LPCSTR *)(unaff_EBP + 8),4,pSecurityDescriptor,
                               *(DWORD *)(unaff_EBP + -0x10),(LPDWORD)(unaff_EBP + -0x10));
      if (BVar2 != 0) {
        SetFileSecurityA((LPCSTR)**(undefined4 **)(unaff_EBP + -0x18),4,pSecurityDescriptor);
      }
      FUN_004a602d(pSecurityDescriptor);
      iVar1 = 1;
      goto LAB_004b03a6;
    }
  }
  FUN_004abc24(*(CString **)(unaff_EBP + -0x18));
  iVar1 = CFile::Open(*(CFile **)(unaff_EBP + -0x14),*(char **)(unaff_EBP + 8),
                      *(uint *)(unaff_EBP + 0xc),*(CFileException **)(unaff_EBP + 0x10));
LAB_004b03a6:
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return iVar1;
}


