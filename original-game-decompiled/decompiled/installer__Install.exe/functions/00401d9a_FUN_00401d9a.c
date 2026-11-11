
/* ==== FUN_00401d9a @ 00401d9a ==== 
 * signature: undefined __stdcall FUN_00401d9a(void)
 * body: 00401d9a-00401e37
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401d9a(void)

{
  int iVar1;
  byte *pbVar2;
  
  if (DAT_00404384 != 0) {
    if (DAT_0040432c == (byte *)0x0) {
      if ((DAT_004042d4._2_1_ & 1) != 0) {
        _DAT_004042b4 = _DAT_004042b4 + DAT_00404384;
      }
      iVar1 = (*DAT_00404344)(DAT_0040438c,DAT_0040436c,DAT_00404384);
      if (iVar1 != DAT_00404384) {
        DAT_004042bc = 1;
        DAT_004042c0 = 1;
      }
    }
    DAT_00404394 = FUN_004020b6(DAT_0040436c,DAT_00404384);
    if (DAT_0040432c == (byte *)0x0) {
      DAT_00404384 = 0;
    }
    else {
      pbVar2 = DAT_0040436c;
      if (DAT_00404384 != 0) {
        do {
          *DAT_0040432c = *pbVar2;
          DAT_0040432c = DAT_0040432c + 1;
          pbVar2 = pbVar2 + 1;
          DAT_00404384 = DAT_00404384 + -1;
        } while (DAT_00404384 != 0);
        return;
      }
    }
  }
  return;
}


