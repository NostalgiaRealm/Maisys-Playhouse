
/* ==== FUN_0043eea0 @ 0043eea0 ==== 
 * signature: undefined1 __stdcall FUN_0043eea0(void)
 * body: 0043eea0-0043eeff
 */

undefined1 FUN_0043eea0(void)

{
  undefined1 uVar1;
  _OSVERSIONINFOA local_98;
  
  uVar1 = 0;
  if (DAT_004db528 == '\0') {
    local_98.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_98);
    if ((local_98.dwPlatformId != 1) && (local_98.dwPlatformId == 2)) {
      uVar1 = 1;
    }
    DAT_004db524 = uVar1;
    DAT_004db528 = 1;
    return uVar1;
  }
  return DAT_004db524;
}


