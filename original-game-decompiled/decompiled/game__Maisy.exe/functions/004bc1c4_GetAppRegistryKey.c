
/* ==== CWinApp::GetAppRegistryKey @ 004bc1c4 ==== 
 * signature: HKEY__ * __thiscall GetAppRegistryKey(CWinApp * this)
 * body: 004bc1c4-004bc259
 * note: Library Function - Single Match  public: struct HKEY__ * __thiscall CWinApp::GetAppRegistryKey(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: struct HKEY__ * __thiscall CWinApp::GetAppRegistryKey(void)
   
   Library: Visual Studio 1998 Release */

HKEY__ * __thiscall CWinApp::GetAppRegistryKey(CWinApp *this)

{
  LSTATUS LVar1;
  DWORD local_14;
  HKEY local_10;
  HKEY local_c;
  HKEY local_8;
  
  local_10 = (HKEY__ *)0x0;
  local_c = (HKEY)0x0;
  local_8 = (HKEY)0x0;
  LVar1 = RegOpenKeyExA((HKEY)0x80000001,"Software",0,0x2001f,&local_c);
  if (LVar1 == 0) {
    LVar1 = RegCreateKeyExA(local_c,*(LPCSTR *)(this + 0x74),0,(LPSTR)0x0,0,0x2001f,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_14);
    if (LVar1 == 0) {
      RegCreateKeyExA(local_8,*(LPCSTR *)(this + 0x88),0,(LPSTR)0x0,0,0x2001f,
                      (LPSECURITY_ATTRIBUTES)0x0,&local_10,&local_14);
    }
  }
  if (local_c != (HKEY)0x0) {
    RegCloseKey(local_c);
  }
  if (local_8 != (HKEY)0x0) {
    RegCloseKey(local_8);
  }
  return local_10;
}


