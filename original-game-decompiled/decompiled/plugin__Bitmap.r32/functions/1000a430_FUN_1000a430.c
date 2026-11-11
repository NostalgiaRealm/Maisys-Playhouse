
/* ==== FUN_1000a430 @ 1000a430 ==== 
 * signature: undefined __cdecl FUN_1000a430(uint param_1)
 * body: 1000a430-1000a465
 */

void __cdecl FUN_1000a430(uint param_1)

{
  if ((0x10013857 < param_1) && (param_1 < 0x10013ab9)) {
    FUN_1000a3a0(((int)(param_1 + 0xeffec7a8) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}


