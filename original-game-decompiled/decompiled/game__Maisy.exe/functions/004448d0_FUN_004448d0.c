
/* ==== FUN_004448d0 @ 004448d0 ==== 
 * signature: undefined __cdecl FUN_004448d0(uint param_1, uint param_2)
 * body: 004448d0-00444b02
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004448d0(uint param_1,uint param_2)

{
  if ((param_1 & 4) != 0) {
    _DAT_004db834 = _DAT_004db834 | 0x8000;
  }
  if ((param_1 & 8) != 0) {
    _DAT_004db834 = _DAT_004db834 | 0x4000;
  }
  if ((param_1 & 2) != 0) {
    _DAT_004db834 = _DAT_004db834 | 0x2000;
  }
  _DAT_004db838 = param_2;
  if ((_DAT_004db858 & param_2) == 0) {
    if (DAT_004db850 == 0x10) {
      if (DAT_004db84c == 0xac44) {
        if ((param_2 & 0x80) != 0) {
          FUN_00444b10(0x5622,0x10,2,0x80);
          return;
        }
        if ((param_2 & 0x20) != 0) {
          FUN_00444b10(0x5622,8,2,0x20);
          return;
        }
        if ((param_2 & 2) != 0) {
          FUN_00444b10(0x2b11,8,2,2);
          return;
        }
        if ((param_2 & 0x10) != 0) {
          FUN_00444b10(0x5622,8,1,0x10);
          return;
        }
        FUN_00444b10(0x2b11,8,1,1);
        return;
      }
      if (DAT_004db84c == 0x5622) {
        if ((param_2 & 0x20) != 0) {
          FUN_00444b10(0x5622,8,2,0x20);
          return;
        }
        if ((param_2 & 2) != 0) {
          FUN_00444b10(0x2b11,8,2,2);
          return;
        }
        if ((param_2 & 0x10) != 0) {
          FUN_00444b10(0x5622,8,1,0x10);
          return;
        }
        FUN_00444b10(0x2b11,8,1,1);
        return;
      }
    }
    else if (DAT_004db850 == 8) {
      if (DAT_004db84c == 0xac44) {
        if ((param_2 & 0x20) != 0) {
          FUN_00444b10(0x5622,8,2,0x20);
          return;
        }
        if ((param_2 & 2) != 0) {
          FUN_00444b10(0x2b11,8,2,2);
          return;
        }
        if ((param_2 & 0x10) != 0) {
          FUN_00444b10(0x5622,8,1,0x10);
          return;
        }
        FUN_00444b10(0x2b11,8,1,1);
        return;
      }
      if (DAT_004db84c == 0x5622) {
        if ((param_2 & 2) != 0) {
          FUN_00444b10(0x2b11,8,2,2);
          return;
        }
        if ((param_2 & 0x10) != 0) {
          FUN_00444b10(0x5622,8,1,0x10);
          return;
        }
        FUN_00444b10(0x2b11,8,1,1);
        return;
      }
      if ((param_2 & 2) != 0) {
        FUN_00444b10(0x2b11,8,2,2);
        return;
      }
      FUN_00444b10(0x2b11,8,1,1);
    }
  }
  return;
}


