
/* ==== FUN_004432a0 @ 004432a0 ==== 
 * signature: undefined __cdecl FUN_004432a0(int param_1, short param_2)
 * body: 004432a0-0044330b
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004432a0(int param_1,short param_2)

{
  if (param_1 != 0) {
    *(short *)(param_1 + 0x26) = param_2;
    if (((DAT_004db5a0 != '\0') && (-1 < *(short *)(param_1 + 0x28))) &&
       (*(short *)(&DAT_004db5d8 + *(short *)(param_1 + 0x28) * 0x3e) != param_2)) {
      DAT_004db87c = 0;
      *(short *)(&DAT_004db5d8 + *(short *)(param_1 + 0x28) * 0x3e) = param_2;
      _DAT_004db834 = _DAT_004db834 | 0x1000;
      FUN_00443760();
    }
  }
  return;
}


