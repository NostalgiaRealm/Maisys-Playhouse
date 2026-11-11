
/* ==== CFile::Remove @ 004adf14 ==== 
 * signature: void __stdcall Remove(char * param_1)
 * body: 004adf14-004adf32
 * note: Library Function - Single Match  public: static void __stdcall CFile::Remove(char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: static void __stdcall CFile::Remove(char const *)
   
   Library: Visual Studio 1998 Release */

void CFile::Remove(char *param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  char *pcVar3;
  
  BVar1 = DeleteFileA(param_1);
  if (BVar1 == 0) {
    pcVar3 = (char *)0x0;
    DVar2 = GetLastError();
    CFileException::ThrowOsError(DVar2,pcVar3);
  }
  return;
}


