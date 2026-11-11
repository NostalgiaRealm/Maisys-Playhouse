
/* ==== FUN_00444810 @ 00444810 ==== 
 * signature: undefined1 __cdecl FUN_00444810(undefined4 * param_1)
 * body: 00444810-004448c2
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __cdecl FUN_00444810(undefined4 *param_1)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if ((param_1 != (undefined4 *)0x0) && (-1 < *(short *)(param_1 + 10))) {
    uVar1 = 0;
    if (((&DAT_004db5a2)[*(short *)(param_1 + 10) * 0x3e] == '\0') &&
       ((&DAT_004db5a2)[*(short *)(param_1 + 10) * 0x3e] = '\x01',
       DAT_004db7aa < *(int *)(&DAT_004db5ac + *(short *)(param_1 + 10) * 0x3e))) {
      DAT_004db87c = 0;
      _DAT_004db834 = _DAT_004db834 | 0x1000;
      FUN_00443760();
    }
    if ((&DAT_004db5df)[*(short *)(param_1 + 10) * 0x3e] == '\0') {
      (&DAT_004db5df)[*(short *)(param_1 + 10) * 0x3e] = '\x01';
      _DAT_004db83c = _DAT_004db83c + -1;
      if (_DAT_004db83c == 0) {
        FUN_004442e0();
      }
    }
    *(undefined2 *)(param_1 + 10) = 0xffff;
    if ((HGLOBAL)*param_1 != (HGLOBAL)0x0) {
      GlobalUnlock((HGLOBAL)*param_1);
    }
  }
  return uVar1;
}


