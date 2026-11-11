
/* ==== CFile::Write @ 004add0b ==== 
 * signature: void __thiscall Write(CFile * this, void * param_1, uint param_2)
 * body: 004add0b-004add5a
 * note: Library Function - Single Match  public: virtual void __thiscall CFile::Write(void const *,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CFile::Write(void const *,unsigned int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CFile::Write(CFile *this,void *param_1,uint param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  char *pcVar3;
  uint local_8;
  
  if (param_2 != 0) {
    BVar1 = WriteFile(*(HANDLE *)(this + 4),param_1,param_2,&local_8,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      pcVar3 = *(char **)(this + 0xc);
      DVar2 = GetLastError();
      CFileException::ThrowOsError(DVar2,pcVar3);
    }
    if (local_8 != param_2) {
      AfxThrowFileException(0xd,-1,*(char **)(this + 0xc));
    }
  }
  return;
}


