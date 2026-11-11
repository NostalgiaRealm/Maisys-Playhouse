
/* ==== AfxTimeToFileTime @ 004af2fa ==== 
 * signature: void __cdecl AfxTimeToFileTime(CTime * param_1, _FILETIME * param_2)
 * body: 004af2fa-004af3ad
 * note: Library Function - Single Match  void __cdecl AfxTimeToFileTime(class CTime const &,struct _FILETIME *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __cdecl AfxTimeToFileTime(class CTime const &,struct _FILETIME *)
   
   Library: Visual Studio 1998 Release */

void __cdecl AfxTimeToFileTime(CTime *param_1,_FILETIME *param_2)

{
  tm *ptVar1;
  BOOL BVar2;
  DWORD DVar3;
  char *pcVar4;
  _FILETIME local_1c;
  SYSTEMTIME local_14;
  
  ptVar1 = CTime::GetLocalTm(param_1,(tm *)0x0);
  local_14.wYear = (short)ptVar1->tm_year + 0x76c;
  ptVar1 = CTime::GetLocalTm(param_1,(tm *)0x0);
  local_14.wMonth = (short)ptVar1->tm_mon + 1;
  ptVar1 = CTime::GetLocalTm(param_1,(tm *)0x0);
  local_14.wDay = (WORD)ptVar1->tm_mday;
  ptVar1 = CTime::GetLocalTm(param_1,(tm *)0x0);
  local_14.wHour = (WORD)ptVar1->tm_hour;
  ptVar1 = CTime::GetLocalTm(param_1,(tm *)0x0);
  local_14.wMinute = (WORD)ptVar1->tm_min;
  ptVar1 = CTime::GetLocalTm(param_1,(tm *)0x0);
  local_14.wSecond = (WORD)ptVar1->tm_sec;
  local_14.wMilliseconds = 0;
  BVar2 = SystemTimeToFileTime(&local_14,&local_1c);
  if (BVar2 == 0) {
    pcVar4 = (char *)0x0;
    DVar3 = GetLastError();
    CFileException::ThrowOsError(DVar3,pcVar4);
  }
  BVar2 = LocalFileTimeToFileTime(&local_1c,param_2);
  if (BVar2 == 0) {
    pcVar4 = (char *)0x0;
    DVar3 = GetLastError();
    CFileException::ThrowOsError(DVar3,pcVar4);
  }
  return;
}


