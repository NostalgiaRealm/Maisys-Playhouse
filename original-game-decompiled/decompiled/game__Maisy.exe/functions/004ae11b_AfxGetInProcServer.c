
/* ==== AfxGetInProcServer @ 004ae11b ==== 
 * signature: int __stdcall AfxGetInProcServer(char * param_1, CString * param_2)
 * body: 004ae11b-004ae1ca
 * note: Library Function - Single Match  int __stdcall AfxGetInProcServer(char const *,class CString &)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __stdcall AfxGetInProcServer(char const *,class CString &)
   
   Library: Visual Studio 1998 Release */

int AfxGetInProcServer(char *param_1,CString *param_2)

{
  LSTATUS LVar1;
  LPBYTE lpData;
  uint uVar2;
  DWORD local_18 [2];
  HKEY local_10;
  HKEY local_c;
  HKEY local_8;
  
  uVar2 = 0;
  local_8 = (HKEY)0x0;
  LVar1 = RegOpenKeyA((HKEY)0x80000000,"CLSID",&local_8);
  if (LVar1 == 0) {
    local_c = (HKEY)0x0;
    LVar1 = RegOpenKeyA(local_8,param_1,&local_c);
    if (LVar1 == 0) {
      local_10 = (HKEY)0x0;
      LVar1 = RegOpenKeyA(local_c,"InProcServer32",&local_10);
      if (LVar1 == 0) {
        lpData = (LPBYTE)FUN_004ac16a(param_2,0x104);
        local_18[1] = 0x104;
        LVar1 = RegQueryValueExA(local_10,&DAT_004d99e4,(LPDWORD)0x0,local_18,lpData,local_18 + 1);
        CString::ReleaseBuffer(param_2,-1);
        uVar2 = (uint)(LVar1 == 0);
        RegCloseKey(local_10);
      }
      RegCloseKey(local_c);
    }
    RegCloseKey(local_8);
  }
  return uVar2;
}


