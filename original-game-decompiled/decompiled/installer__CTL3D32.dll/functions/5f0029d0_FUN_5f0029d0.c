
/* ==== FUN_5f0029d0 @ 5f0029d0 ==== 
 * signature: undefined4 __cdecl FUN_5f0029d0(HWND param_1)
 * body: 5f0029d0-5f002a08
 */

undefined4 __cdecl FUN_5f0029d0(HWND param_1)

{
  HANDLE pvVar1;
  uint uVar2;
  
  pvVar1 = FUN_5f001000(param_1);
  if (pvVar1 == (HANDLE)0x0) {
    return 0;
  }
  if (0x35e < DAT_5f005150) {
    uVar2 = GetWindowLongA(param_1,-0x10);
    if ((uVar2 & 4) != 0) {
      return 0;
    }
  }
  return 1;
}


