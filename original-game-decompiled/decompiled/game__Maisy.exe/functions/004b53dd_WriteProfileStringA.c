
/* ==== CWinApp::WriteProfileStringA @ 004b53dd ==== 
 * signature: int __thiscall WriteProfileStringA(CWinApp * this, char * param_1, char * param_2, char * param_3)
 * body: 004b53dd-004b5490
 * note: Library Function - Single Match  public: int __thiscall CWinApp::WriteProfileStringA(char const *,char const *,char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CWinApp::WriteProfileStringA(char const *,char const *,char const *)
   
   Library: Visual Studio 1998 Release */

int __thiscall CWinApp::WriteProfileStringA(CWinApp *this,char *param_1,char *param_2,char *param_3)

{
  HKEY__ *hKey;
  LSTATUS LVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x74) == 0) {
    uVar3 = WritePrivateProfileStringA(param_1,param_2,param_3,*(LPCSTR *)(this + 0x88));
  }
  else {
    if (param_2 == (char *)0x0) {
      hKey = GetAppRegistryKey(this);
      if (hKey == (HKEY__ *)0x0) {
        return 0;
      }
      LVar1 = RegDeleteKeyA(hKey,param_1);
    }
    else if (param_3 == (char *)0x0) {
      hKey = GetSectionKey(this,param_1);
      if (hKey == (HKEY__ *)0x0) {
        return 0;
      }
      LVar1 = RegDeleteValueA(hKey,param_2);
    }
    else {
      hKey = GetSectionKey(this,param_1);
      if (hKey == (HKEY__ *)0x0) {
        return 0;
      }
      iVar2 = lstrlenA(param_3);
      LVar1 = RegSetValueExA(hKey,param_2,0,1,(BYTE *)param_3,iVar2 + 1);
    }
    RegCloseKey(hKey);
    uVar3 = (uint)(LVar1 == 0);
  }
  return uVar3;
}


