
/* ==== CWinApp::GetProfileIntA @ 004bc2a8 ==== 
 * signature: uint __thiscall GetProfileIntA(CWinApp * this, char * param_1, char * param_2, int param_3)
 * body: 004bc2a8-004bc31b
 * note: Library Function - Single Match  public: unsigned int __thiscall CWinApp::GetProfileIntA(char const *,char const *,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: unsigned int __thiscall CWinApp::GetProfileIntA(char const *,char const *,int)
   
   Library: Visual Studio 1998 Release */

uint __thiscall CWinApp::GetProfileIntA(CWinApp *this,char *param_1,char *param_2,int param_3)

{
  HKEY__ *hKey;
  LSTATUS LVar1;
  DWORD local_10 [2];
  uint local_8;
  
  if (*(int *)(this + 0x74) == 0) {
    param_3 = GetPrivateProfileIntA(param_1,param_2,param_3,*(LPCSTR *)(this + 0x88));
  }
  else {
    hKey = GetSectionKey(this,param_1);
    if (hKey != (HKEY__ *)0x0) {
      local_10[1] = 4;
      LVar1 = RegQueryValueExA(hKey,param_2,(LPDWORD)0x0,local_10,(LPBYTE)&local_8,local_10 + 1);
      RegCloseKey(hKey);
      if (LVar1 == 0) {
        param_3 = local_8;
      }
    }
  }
  return param_3;
}


