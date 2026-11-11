
/* ==== CFile::Close @ 004addd5 ==== 
 * signature: void __thiscall Close(CFile * this)
 * body: 004addd5-004ade1a
 * note: Library Function - Single Match  public: virtual void __thiscall CFile::Close(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CFile::Close(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CFile::Close(CFile *this)

{
  BOOL BVar1;
  DWORD DVar2;
  bool bVar3;
  char *pcVar4;
  
  bVar3 = false;
  if (*(HANDLE *)(this + 4) != (HANDLE)0xffffffff) {
    BVar1 = CloseHandle(*(HANDLE *)(this + 4));
    bVar3 = BVar1 == 0;
  }
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 8) = 0;
  FUN_004abc24((CString *)(this + 0xc));
  if (bVar3) {
    pcVar4 = (char *)0x0;
    DVar2 = GetLastError();
    CFileException::ThrowOsError(DVar2,pcVar4);
  }
  return;
}


