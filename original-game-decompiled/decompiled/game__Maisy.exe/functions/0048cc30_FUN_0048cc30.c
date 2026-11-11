
/* ==== FUN_0048cc30 @ 0048cc30 ==== 
 * signature: int __stdcall FUN_0048cc30(void)
 * body: 0048cc30-0048cd39
 */

int FUN_0048cc30(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  FARPROC pFVar2;
  FARPROC pFVar3;
  DWORD DVar4;
  int iVar5;
  int local_914;
  int iStack_910;
  undefined4 local_90c;
  undefined1 auStack_908 [4];
  CHAR local_904 [260];
  undefined1 auStack_800 [2048];
  
  local_914 = 0;
  hModule = LoadLibraryA(s_version_dll_004dd230);
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,s_GetFileVersionInfoSizeA_004dd218);
    pFVar2 = GetProcAddress(hModule,s_GetFileVersionInfoA_004dd204);
    pFVar3 = GetProcAddress(hModule,s_VerQueryValueA_004dd1f4);
    DVar4 = GetModuleFileNameA(DAT_004dd1ac,local_904,0x104);
    if ((((DVar4 != 0) && (pFVar1 != (FARPROC)0x0)) && (pFVar2 != (FARPROC)0x0)) &&
       (pFVar3 != (FARPROC)0x0)) {
      iVar5 = (*pFVar1)(local_904,&local_90c);
      if (iVar5 != 0) {
        iVar5 = (*pFVar2)(local_904,local_90c,iVar5,auStack_800);
        if (iVar5 != 0) {
          iVar5 = (*pFVar3)(auStack_800,&DAT_004d99a4,&iStack_910,auStack_908);
          if (iVar5 != 0) {
            local_914 = (*(uint *)(iStack_910 + 0x14) & 0xffff) +
                        ((*(uint *)(iStack_910 + 0x10) >> 0x10) * 0x10 +
                         (*(uint *)(iStack_910 + 0x14) >> 0x10) +
                        (*(uint *)(iStack_910 + 0x10) & 0xffff) * 10) * 0x100;
          }
        }
      }
    }
    FreeLibrary(hModule);
  }
  return local_914;
}


