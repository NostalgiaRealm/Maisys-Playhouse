
/* ==== FUN_004175b0 @ 004175b0 ==== 
 * signature: undefined4 __cdecl FUN_004175b0(short param_1)
 * body: 004175b0-00417672
 */

undefined4 __cdecl FUN_004175b0(short param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (iVar1 < 0x11) {
    if (iVar1 == 0x10) {
      return 6;
    }
    switch(iVar1) {
    case 1:
      return 6;
    case 3:
      return 6;
    case 4:
      return 6;
    case 6:
      return 0xc;
    case 7:
      return 0x2e;
    }
  }
  else {
    if (iVar1 < 0x16) {
      if (iVar1 == 0x15) {
        return 10;
      }
      if (iVar1 == 0x11) {
        return 10;
      }
      return 0x2e;
    }
    if (iVar1 < 0x1a) {
      if (iVar1 == 0x19) {
        return 6;
      }
      if (iVar1 == 0x16) {
        return 0x12;
      }
      return 0x2e;
    }
    if (iVar1 < 0x1e) {
      if (iVar1 == 0x1d) {
        return 10;
      }
      if (iVar1 == 0x1a) {
        return 4;
      }
      return 0x2e;
    }
    if (iVar1 == 0x1e) {
      return 0xe;
    }
    if (iVar1 == 0x1fd) {
      return 0x14;
    }
  }
  return 0x2e;
}


