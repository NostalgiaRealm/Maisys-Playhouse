
/* ==== CWinApp::ExitInstance @ 004ba58b ==== 
 * signature: int __thiscall ExitInstance(CWinApp * this)
 * body: 004ba58b-004ba5b0
 * note: Library Function - Single Match  public: virtual int __thiscall CWinApp::ExitInstance(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CWinApp::ExitInstance(void)
   
   Library: Visual Studio 1998 Release */

int __thiscall CWinApp::ExitInstance(CWinApp *this)

{
  int iVar1;
  
  iVar1 = FUN_004bafca();
  if (*(char *)(iVar1 + 0x14) == '\0') {
    SaveStdProfileSettings(this);
  }
  if (*(code **)(this + 0xb4) != (code *)0x0) {
    (**(code **)(this + 0xb4))();
  }
  return *(int *)(this + 0x38);
}


