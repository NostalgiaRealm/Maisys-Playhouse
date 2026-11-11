
/* ==== FUN_10016ec0 @ 10016ec0 ==== 
 * signature: undefined __cdecl FUN_10016ec0(uint param_1)
 * body: 10016ec0-10016ef5
 */

void __cdecl FUN_10016ec0(uint param_1)

{
  if ((0x10022657 < param_1) && (param_1 < 0x100228b9)) {
    FUN_10016e20(((int)(param_1 + 0xeffdd9a8) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}


