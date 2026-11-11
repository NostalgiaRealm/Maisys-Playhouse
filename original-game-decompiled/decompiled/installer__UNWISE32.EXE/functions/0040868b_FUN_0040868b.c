
/* ==== FUN_0040868b @ 0040868b ==== 
 * signature: undefined __stdcall FUN_0040868b(void)
 * body: 0040868b-004086d1
 */

void FUN_0040868b(void)

{
  _OSVERSIONINFOA local_98;
  
  local_98.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_98);
  DAT_00413834 = (local_98.dwPlatformId != 2) + 1;
  if (3 < local_98.dwMajorVersion) {
    DAT_0041385c = 1;
  }
  return;
}


