
/* ==== CFile::Rename @ 004adef1 ==== 
 * signature: void __stdcall Rename(char * param_1, char * param_2)
 * body: 004adef1-004adf13
 * note: Library Function - Single Match  public: static void __stdcall CFile::Rename(char const *,char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: static void __stdcall CFile::Rename(char const *,char const *)
   
   Library: Visual Studio 1998 Release */

void CFile::Rename(char *param_1,char *param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  char *pcVar3;
  
  BVar1 = MoveFileA(param_1,param_2);
  if (BVar1 == 0) {
    pcVar3 = (char *)0x0;
    DVar2 = GetLastError();
    CFileException::ThrowOsError(DVar2,pcVar3);
  }
  return;
}


