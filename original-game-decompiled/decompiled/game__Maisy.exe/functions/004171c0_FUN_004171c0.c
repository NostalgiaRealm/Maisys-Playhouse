
/* ==== FUN_004171c0 @ 004171c0 ==== 
 * signature: undefined4 __cdecl FUN_004171c0(short param_1)
 * body: 004171c0-004172b1
 */

undefined4 __cdecl FUN_004171c0(short param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (9 < iVar1) {
    if (iVar1 < 0x65) {
      if (iVar1 == 100) {
        return 10;
      }
      switch(iVar1) {
      case 10:
        return 6;
      case 0xb:
        return 10;
      case 0xd:
        return 10;
      case 0xf:
        return 10;
      case 0x10:
        return 0x1a;
      case 0x14:
        return 4;
      case 0x17:
        return 10;
      }
    }
    else if (iVar1 < 0x7d) {
      if (iVar1 == 0x7c) {
        return 0xe;
      }
      switch(iVar1) {
      case 0x65:
        return 0x12;
      case 0x66:
        return 0x12;
      case 0x68:
        return 0x2a;
      case 0x69:
        return 0x12;
      case 0x6b:
        return 0x1a;
      case 0x6d:
        return 8;
      }
    }
    else if (iVar1 == 0x32d5) {
      return 0x14;
    }
    return 0x2c;
  }
  if (iVar1 == 9) {
    return 0xe;
  }
  if (iVar1 == 0) {
    return 2;
  }
  if (iVar1 != 1) {
    return 0x2c;
  }
  return 6;
}


