
/* ==== FUN_10011ff3 @ 10011ff3 ==== 
 * signature: undefined __stdcall FUN_10011ff3(void)
 * body: 10011ff3-1001206f
 */

void FUN_10011ff3(void)

{
  HMODULE hModule;
  _OSVERSIONINFOA local_98;
  
  DAT_100241e8 = 1;
  local_98.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_98);
  if (3 < local_98.dwMajorVersion) {
    DAT_10023930 = 1;
  }
  if (local_98.dwPlatformId == 1) {
    DAT_10024168 = 1;
  }
  if (local_98.dwPlatformId == 2) {
    DAT_100238b8 = 1;
  }
  hModule = LoadLibraryExA(s_KERNEL32_DLL_1001fd34,(HANDLE)0x0,0);
  if (hModule != (HMODULE)0x0) {
    DAT_10023e98 = GetProcAddress(hModule,s_GetDiskFreeSpaceExA_1001fd20);
  }
  return;
}


