
/* ==== FUN_10016f30 @ 10016f30 ==== 
 * signature: undefined __cdecl FUN_10016f30(uint param_1)
 * body: 10016f30-10016f65
 */

void __cdecl FUN_10016f30(uint param_1)

{
  if ((0x10022657 < param_1) && (param_1 < 0x100228b9)) {
    FUN_10016ea0(((int)(param_1 + 0xeffdd9a8) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}


