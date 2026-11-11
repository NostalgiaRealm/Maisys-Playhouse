
/* ==== FUN_10006a8b @ 10006a8b ==== 
 * signature: undefined __stdcall FUN_10006a8b(void)
 * body: 10006a8b-10006d9e
 */

void FUN_10006a8b(void)

{
  int iVar1;
  LPCSTR pCVar2;
  BOOL BVar3;
  FARPROC pFVar4;
  HMODULE hModule;
  DWORD DVar5;
  int iVar6;
  char *pcVar7;
  CHAR local_7c0 [512];
  CHAR local_5c0 [512];
  CHAR local_3c0 [512];
  CHAR local_1c0 [256];
  _STARTUPINFOA local_c0;
  _STARTUPINFOA local_7c;
  _PROCESS_INFORMATION local_38;
  _PROCESS_INFORMATION local_28;
  HMODULE local_18;
  HMODULE local_14;
  DWORD local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  if (0 < DAT_10024188) {
    do {
      iVar6 = local_c * 4;
      lstrcpyA(local_1c0,*(LPCSTR *)(DAT_1002417c + iVar6));
      FUN_10010cf9(local_1c0);
      FUN_10012386(local_1c0,0);
      FUN_10016240(local_1c0);
      UpdateScreen(0);
      if (DAT_10023ea8 != '\0') {
        FUN_1001277f((HWND)0x0,*(char **)(DAT_1002417c + iVar6),*(undefined4 *)(DAT_100240b8 + 0x48)
                     ,2);
      }
      pCVar2 = *(LPCSTR *)(DAT_1002417c + iVar6);
      iVar1 = lstrlenA(pCVar2);
      pCVar2 = pCVar2 + iVar1 + -3;
      if (pCVar2 < *(LPCSTR *)(DAT_1002417c + iVar6)) {
        pCVar2 = *(LPCSTR *)(DAT_1002417c + iVar6);
      }
      iVar1 = lstrcmpiA(pCVar2,&DAT_1001f670);
      if (iVar1 == 0) {
        _memset(&local_7c,0,0x44);
        local_7c.cb = 0x44;
        wsprintfA(local_5c0,s__s__REGSERVER_1001f660,*(undefined4 *)(DAT_1002417c + iVar6));
        BVar3 = CreateProcessA((LPCSTR)0x0,local_5c0,(LPSECURITY_ATTRIBUTES)0x0,
                               (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,(LPCSTR)0x0,&local_7c,
                               &local_38);
        local_14 = (HMODULE)(uint)(BVar3 == 0);
        if (local_14 == (HMODULE)0x0) {
          local_8 = 0;
          FUN_1000ba4c(local_38.hProcess);
        }
        else {
          local_8 = 1;
        }
      }
      else {
        iVar1 = FUN_100138b1(*(LPCSTR *)(DAT_1002417c + iVar6));
        local_8 = 1;
        if (iVar1 == 0) {
LAB_10006c8a:
          local_14 = LoadLibraryA(s_OLE2_DLL_1001f64c);
          if (local_14 != (HMODULE)0x0) {
            pFVar4 = GetProcAddress(local_14,s_OleInitialize_1001f63c);
            if ((pFVar4 != (FARPROC)0x0) && (iVar1 = (*pFVar4)(0), iVar1 == 0)) {
              local_18 = LoadLibraryA(s_OC25_DLL_1001f630);
              hModule = LoadLibraryA(*(LPCSTR *)(DAT_1002417c + iVar6));
              if (hModule != (HMODULE)0x0) {
                pFVar4 = GetProcAddress(hModule,s_DllRegisterServer_1001f61c);
                if ((pFVar4 != (FARPROC)0x0) && (iVar1 = (*pFVar4)(), iVar1 == 0)) {
                  local_8 = 0;
                }
                FreeLibrary(hModule);
              }
              if (local_18 != (HMODULE)0x0) {
                FreeLibrary(local_18);
              }
            }
            pFVar4 = GetProcAddress(local_14,s_OleUninitialize_1001f60c);
            if (pFVar4 != (FARPROC)0x0) {
              (*pFVar4)();
            }
            FreeLibrary(local_14);
          }
        }
        else if (DAT_100241e8 != 0) {
          if (iVar1 == 0) goto LAB_10006c8a;
          _memset(&local_c0,0,0x44);
          local_c0.cb = 0x44;
          wsprintfA(local_7c0,s___s___s_1001f658,DAT_10024190,*(undefined4 *)(DAT_1002417c + iVar6))
          ;
          BVar3 = CreateProcessA((LPCSTR)0x0,local_7c0,(LPSECURITY_ATTRIBUTES)0x0,
                                 (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,(LPCSTR)0x0,&local_c0,
                                 &local_28);
          if (BVar3 != 0) {
            do {
              UpdateScreen(0);
              BVar3 = GetExitCodeProcess(local_28.hProcess,&local_10);
              if (BVar3 == 0) {
                local_10 = 1;
              }
            } while (local_10 == 0x103);
            if (local_10 == 0) {
              local_8 = 0;
            }
          }
        }
      }
      if ((DAT_1001f030 != (HANDLE)0xffffffff) && (DAT_10023edc == 0)) {
        if (local_8 == 0) {
          pcVar7 = s_Self_Register___s_1001f5d8;
        }
        else {
          pcVar7 = s_Could_not_Self_Register___s_1001f5ec;
        }
        wsprintfA(local_3c0,pcVar7,*(undefined4 *)(DAT_1002417c + iVar6));
        DVar5 = lstrlenA(local_3c0);
        FileWrite(DAT_1001f030,local_3c0,DVar5);
      }
      FUN_10015a50(*(undefined **)(DAT_1002417c + iVar6));
      local_c = local_c + 1;
    } while (local_c < DAT_10024188);
  }
  DAT_10024188 = 0;
  return;
}


