
/* ==== FUN_0048cd40 @ 0048cd40 ==== 
 * signature: undefined __stdcall FUN_0048cd40(void)
 * body: 0048cd40-0048cd9c
 */

void FUN_0048cd40(void)

{
  _OSVERSIONINFOA local_94;
  
  if ((0 < DAT_004dd1b0) && (DAT_004dd1b0 = DAT_004dd1b0 + -1, DAT_004dd1b0 == 0)) {
    FUN_0048d11c();
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId == 2) {
      FreeLibrary(DAT_004dd1ac);
    }
    DAT_004dd1ac = (HMODULE)0x0;
    PTR_FUN_004dd1a8 = FUN_0048cdfc;
  }
  return;
}


