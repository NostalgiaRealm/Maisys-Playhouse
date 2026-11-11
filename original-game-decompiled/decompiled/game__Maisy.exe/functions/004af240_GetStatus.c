
/* ==== CFile::GetStatus @ 004af240 ==== 
 * signature: int __stdcall GetStatus(char * param_1, CFileStatus * param_2)
 * body: 004af240-004af2f9
 * note: Library Function - Single Match  public: static int __stdcall CFile::GetStatus(char const *,struct CFileStatus &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: static int __stdcall CFile::GetStatus(char const *,struct CFileStatus &)
   
   Library: Visual Studio 1998 Release */

int CFile::GetStatus(char *param_1,CFileStatus *param_2)

{
  CFileStatus *pCVar1;
  int iVar2;
  HANDLE hFindFile;
  undefined4 *puVar3;
  int *piVar4;
  _WIN32_FIND_DATAA local_148;
  CTime local_8 [4];
  
  iVar2 = AfxFullPath((char *)(param_2 + 0x12),param_1);
  if (iVar2 == 0) {
    iVar2 = 0;
    param_2[0x12] = (CFileStatus)0x0;
  }
  else {
    hFindFile = FindFirstFileA(param_1,&local_148);
    if (hFindFile == (HANDLE)0xffffffff) {
      iVar2 = 0;
    }
    else {
      FindClose(hFindFile);
      param_2[0x10] = (CFileStatus)((byte)local_148.dwFileAttributes & 0x7f);
      *(DWORD *)(param_2 + 0xc) = local_148.nFileSizeLow;
      puVar3 = (undefined4 *)CTime::CTime(local_8,&local_148.ftCreationTime,-1);
      pCVar1 = param_2 + 8;
      *(undefined4 *)param_2 = *puVar3;
      piVar4 = (int *)CTime::CTime(local_8,&local_148.ftLastAccessTime,-1);
      *(int *)pCVar1 = *piVar4;
      piVar4 = (int *)CTime::CTime(local_8,&local_148.ftLastWriteTime,-1);
      iVar2 = *piVar4;
      *(int *)(param_2 + 4) = iVar2;
      if (*(int *)param_2 == 0) {
        *(int *)param_2 = iVar2;
      }
      if (*(int *)pCVar1 == 0) {
        *(int *)pCVar1 = iVar2;
      }
      iVar2 = 1;
    }
  }
  return iVar2;
}


