
/* ==== CFile::SetStatus @ 004af3ae ==== 
 * signature: void __stdcall SetStatus(char * param_1, CFileStatus * param_2)
 * body: 004af3ae-004af4ed
 * note: Library Function - Single Match  public: static void __stdcall CFile::SetStatus(char const *,struct CFileStatus const &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: static void __stdcall CFile::SetStatus(char const *,struct CFileStatus const &)
   
   Library: Visual Studio 1998 Release */

void CFile::SetStatus(char *param_1,CFileStatus *param_2)

{
  DWORD DVar1;
  BOOL BVar2;
  FILETIME *lpLastAccessTime;
  _FILETIME *lpCreationTime;
  char *pcVar3;
  _FILETIME local_24;
  _FILETIME local_1c;
  _FILETIME local_14;
  HANDLE local_c;
  DWORD local_8;
  
  lpLastAccessTime = (FILETIME *)0x0;
  local_8 = GetFileAttributesA(param_1);
  lpCreationTime = (FILETIME *)0x0;
  if (local_8 == 0xffffffff) {
    pcVar3 = (char *)0x0;
    DVar1 = GetLastError();
    CFileException::ThrowOsError(DVar1,pcVar3);
  }
  if ((local_8 != (byte)param_2[0x10]) && ((local_8 & 1) != 0)) {
    BVar2 = SetFileAttributesA(param_1,(uint)(byte)param_2[0x10]);
    if (BVar2 == 0) {
      pcVar3 = (char *)0x0;
      DVar1 = GetLastError();
      CFileException::ThrowOsError(DVar1,pcVar3);
    }
  }
  if (*(int *)(param_2 + 4) != 0) {
    AfxTimeToFileTime((CTime *)(param_2 + 4),&local_14);
    if (*(int *)(param_2 + 8) != 0) {
      lpLastAccessTime = &local_24;
      AfxTimeToFileTime((CTime *)(param_2 + 8),&local_24);
    }
    if (*(int *)param_2 != 0) {
      lpCreationTime = &local_1c;
      AfxTimeToFileTime((CTime *)param_2,&local_1c);
    }
    local_c = CreateFileA(param_1,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (local_c == (HANDLE)0xffffffff) {
      pcVar3 = (char *)0x0;
      DVar1 = GetLastError();
      CFileException::ThrowOsError(DVar1,pcVar3);
    }
    BVar2 = SetFileTime(local_c,lpCreationTime,lpLastAccessTime,&local_14);
    if (BVar2 == 0) {
      pcVar3 = (char *)0x0;
      DVar1 = GetLastError();
      CFileException::ThrowOsError(DVar1,pcVar3);
    }
    BVar2 = CloseHandle(local_c);
    if (BVar2 == 0) {
      pcVar3 = (char *)0x0;
      DVar1 = GetLastError();
      CFileException::ThrowOsError(DVar1,pcVar3);
    }
  }
  if ((local_8 != (byte)param_2[0x10]) && ((local_8 & 1) == 0)) {
    BVar2 = SetFileAttributesA(param_1,(uint)(byte)param_2[0x10]);
    if (BVar2 == 0) {
      pcVar3 = (char *)0x0;
      DVar1 = GetLastError();
      CFileException::ThrowOsError(DVar1,pcVar3);
    }
  }
  return;
}


