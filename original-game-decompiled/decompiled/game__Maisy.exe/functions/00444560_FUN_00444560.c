
/* ==== FUN_00444560 @ 00444560 ==== 
 * signature: undefined1 __cdecl FUN_00444560(int param_1)
 * body: 00444560-004445a4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __cdecl FUN_00444560(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if ((param_1 != 0) && (-1 < *(short *)(param_1 + 0x28))) {
    uVar1 = 0;
    (&DAT_004db5a2)[*(short *)(param_1 + 0x28) * 0x3e] = 0;
    _DAT_004db834 = _DAT_004db834 | 0x1000;
  }
  FUN_00443760();
  return uVar1;
}


