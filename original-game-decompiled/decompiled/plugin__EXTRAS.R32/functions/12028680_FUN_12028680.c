
/* ==== FUN_12028680 @ 12028680 ==== 
 * signature: undefined __stdcall FUN_12028680(void)
 * body: 12028680-120286dc
 */

void FUN_12028680(void)

{
  _OSVERSIONINFOA local_94;
  
  if ((0 < DAT_12037d88) && (DAT_12037d88 = DAT_12037d88 + -1, DAT_12037d88 == 0)) {
    FUN_12027fac();
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId == 2) {
      FreeLibrary(DAT_12037d84);
    }
    DAT_12037d84 = (HMODULE)0x0;
    PTR_FUN_12037d80 = FUN_12027c8c;
  }
  return;
}


