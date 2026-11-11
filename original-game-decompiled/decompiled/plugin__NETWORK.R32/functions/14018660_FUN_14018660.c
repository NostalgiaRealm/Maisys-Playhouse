
/* ==== FUN_14018660 @ 14018660 ==== 
 * signature: undefined __stdcall FUN_14018660(void)
 * body: 14018660-140186bc
 */

void FUN_14018660(void)

{
  _OSVERSIONINFOA local_94;
  
  if ((0 < DAT_14026d74) && (DAT_14026d74 = DAT_14026d74 + -1, DAT_14026d74 == 0)) {
    FUN_14018c1c();
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId == 2) {
      FreeLibrary(DAT_14026d70);
    }
    DAT_14026d70 = (HMODULE)0x0;
    PTR_FUN_14026d6c = FUN_140188fc;
  }
  return;
}


