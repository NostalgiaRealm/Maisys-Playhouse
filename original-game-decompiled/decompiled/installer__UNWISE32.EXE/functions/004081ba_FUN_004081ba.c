
/* ==== FUN_004081ba @ 004081ba ==== 
 * signature: undefined __cdecl FUN_004081ba(LPCSTR param_1, LPCSTR param_2, int param_3)
 * body: 004081ba-0040836e
 */

void __cdecl FUN_004081ba(LPCSTR param_1,LPCSTR param_2,int param_3)

{
  HWND pHVar1;
  char *pcVar2;
  int iVar3;
  LPCSTR lpString1;
  BOOL BVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  HMODULE hModule_00;
  LPSTR pCVar6;
  CHAR local_458 [512];
  CHAR local_258 [256];
  CHAR local_158 [256];
  _STARTUPINFOA local_58;
  _PROCESS_INFORMATION local_14;
  
  lstrcpyA(DAT_004138b0,param_1);
  lstrcatA(DAT_004138b0,param_2);
  pCVar6 = DAT_004138b0;
  pHVar1 = GetDlgItem(DAT_00413818,0x3ef);
  FUN_00407bc7(pHVar1,pCVar6);
  FUN_004073c5((int)DAT_004138b0);
  lstrcpyA(local_158,param_2);
  pcVar2 = FUN_004097b1(local_158);
  if (local_158 < pcVar2) {
    pcVar2[-1] = '\0';
  }
  FUN_00408a39(local_158,0);
  FUN_00409fe0(local_158);
  iVar3 = lstrlenA(param_2);
  lpString1 = param_2 + iVar3 + -3;
  if (param_2 + iVar3 + -3 < param_2) {
    lpString1 = param_2;
  }
  iVar3 = lstrcmpiA(lpString1,&DAT_00410190);
  if (iVar3 == 0) {
    lstrcpyA(local_258,param_2);
    FUN_00408a39(local_258,0);
    _memset(&local_58,0,0x44);
    local_58.cb = 0x44;
    wsprintfA(local_458,s__s__UNREGSERVER_00410648,local_258);
    BVar4 = CreateProcessA((LPCSTR)0x0,local_458,(LPSECURITY_ATTRIBUTES)0x0,
                           (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,(LPCSTR)0x0,&local_58,
                           &local_14);
    if (BVar4 != 0) {
      WaitForSingleObject(local_14.hProcess,0xffffffff);
    }
  }
  else {
    iVar3 = FUN_00408be3(param_2);
    if (iVar3 != 0) {
      hModule = LoadLibraryA(s_OLE32_DLL_0041063c);
      if (hModule != (HMODULE)0x0) {
        pFVar5 = GetProcAddress(hModule,s_OleInitialize_0041062c);
        if (pFVar5 != (FARPROC)0x0) {
          iVar3 = (*pFVar5)(0);
          if (iVar3 == 0) {
            hModule_00 = LoadLibraryA(param_2);
            if (hModule_00 != (HMODULE)0x0) {
              pcVar2 = s_DllRegisterServer_00410618;
              if (param_3 == 0) {
                pcVar2 = s_DllUnregisterServer_00410604;
              }
              pFVar5 = GetProcAddress(hModule_00,pcVar2);
              if (pFVar5 != (FARPROC)0x0) {
                (*pFVar5)();
              }
              FreeLibrary(hModule_00);
            }
          }
        }
        pFVar5 = GetProcAddress(hModule,s_OleUninitialize_004105f4);
        if (pFVar5 != (FARPROC)0x0) {
          (*pFVar5)();
        }
        FreeLibrary(hModule);
      }
    }
  }
  return;
}


