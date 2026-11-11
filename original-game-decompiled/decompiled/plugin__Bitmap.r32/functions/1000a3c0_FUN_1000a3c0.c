
/* ==== FUN_1000a3c0 @ 1000a3c0 ==== 
 * signature: undefined __cdecl FUN_1000a3c0(uint param_1)
 * body: 1000a3c0-1000a3f5
 */

void __cdecl FUN_1000a3c0(uint param_1)

{
  if ((0x10013857 < param_1) && (param_1 < 0x10013ab9)) {
    FUN_1000a320(((int)(param_1 + 0xeffec7a8) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}


