
/* ==== CWinApp::WriteProfileInt @ 004b5362 ==== 
 * signature: int __thiscall WriteProfileInt(CWinApp * this, char * param_1, char * param_2, int param_3)
 * body: 004b5362-004b53dc
 * note: Library Function - Single Match  public: int __thiscall CWinApp::WriteProfileInt(char const *,char const *,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CWinApp::WriteProfileInt(char const *,char const *,int)
   
   Library: Visual Studio 1998 Release */

int __thiscall CWinApp::WriteProfileInt(CWinApp *this,char *param_1,char *param_2,int param_3)

{
  HKEY__ *hKey;
  uint uVar1;
  LSTATUS LVar2;
  CHAR local_14 [16];
  
  if (*(int *)(this + 0x74) == 0) {
    wsprintfA(local_14,&DAT_004db558,param_3);
    uVar1 = WritePrivateProfileStringA(param_1,param_2,local_14,*(LPCSTR *)(this + 0x88));
  }
  else {
    hKey = GetSectionKey(this,param_1);
    if (hKey == (HKEY__ *)0x0) {
      uVar1 = 0;
    }
    else {
      LVar2 = RegSetValueExA(hKey,param_2,0,4,(BYTE *)&param_3,4);
      RegCloseKey(hKey);
      uVar1 = (uint)(LVar2 == 0);
    }
  }
  return uVar1;
}


