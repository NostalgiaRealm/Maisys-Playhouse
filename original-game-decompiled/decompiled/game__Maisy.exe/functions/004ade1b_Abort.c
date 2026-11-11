
/* ==== CFile::Abort @ 004ade1b ==== 
 * signature: void __thiscall Abort(CFile * this)
 * body: 004ade1b-004ade3d
 * note: Library Function - Single Match  public: virtual void __thiscall CFile::Abort(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CFile::Abort(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall CFile::Abort(CFile *this)

{
  if (*(HANDLE *)(this + 4) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(this + 4));
    *(undefined4 *)(this + 4) = 0xffffffff;
    FUN_004abc24((CString *)(this + 0xc));
  }
  return;
}


