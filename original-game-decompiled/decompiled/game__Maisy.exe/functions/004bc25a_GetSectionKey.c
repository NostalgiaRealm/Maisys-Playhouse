
/* ==== CWinApp::GetSectionKey @ 004bc25a ==== 
 * signature: HKEY__ * __thiscall GetSectionKey(CWinApp * this, char * param_1)
 * body: 004bc25a-004bc2a7
 * note: Library Function - Single Match  public: struct HKEY__ * __thiscall CWinApp::GetSectionKey(char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: struct HKEY__ * __thiscall CWinApp::GetSectionKey(char const *)
   
   Library: Visual Studio 1998 Release */

HKEY__ * __thiscall CWinApp::GetSectionKey(CWinApp *this,char *param_1)

{
  HKEY__ *hKey;
  HKEY__ *pHVar1;
  DWORD local_c;
  HKEY local_8;
  
  local_8 = (HKEY__ *)0x0;
  hKey = GetAppRegistryKey(this);
  pHVar1 = (HKEY__ *)0x0;
  if (hKey != (HKEY__ *)0x0) {
    RegCreateKeyExA(hKey,param_1,0,(LPSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_c
                   );
    RegCloseKey(hKey);
    pHVar1 = local_8;
  }
  return pHVar1;
}


