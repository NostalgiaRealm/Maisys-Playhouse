
/* ==== FUN_12028570 @ 12028570 ==== 
 * signature: int __stdcall FUN_12028570(void)
 * body: 12028570-12028679
 */

int FUN_12028570(void)

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
  hModule = LoadLibraryA(s_version_dll_12037e08);
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,s_GetFileVersionInfoSizeA_12037df0);
    pFVar2 = GetProcAddress(hModule,s_GetFileVersionInfoA_12037ddc);
    pFVar3 = GetProcAddress(hModule,s_VerQueryValueA_12037dcc);
    DVar4 = GetModuleFileNameA(DAT_12037d84,local_904,0x104);
    if ((((DVar4 != 0) && (pFVar1 != (FARPROC)0x0)) && (pFVar2 != (FARPROC)0x0)) &&
       (pFVar3 != (FARPROC)0x0)) {
      iVar5 = (*pFVar1)(local_904,&local_90c);
      if (iVar5 != 0) {
        iVar5 = (*pFVar2)(local_904,local_90c,iVar5,auStack_800);
        if (iVar5 != 0) {
          iVar5 = (*pFVar3)(auStack_800,&DAT_1203724c,&iStack_910,auStack_908);
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


