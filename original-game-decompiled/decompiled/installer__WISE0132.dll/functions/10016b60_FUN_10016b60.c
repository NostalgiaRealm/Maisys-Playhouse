
/* ==== FUN_10016b60 @ 10016b60 ==== 
 * signature: undefined4 __stdcall FUN_10016b60(undefined4 param_1, int param_2)
 * body: 10016b60-10016c7a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10016b60(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 1) {
    if (param_2 != 0) {
      if (param_2 == 3) {
        FUN_100180b0((undefined *)0x0);
      }
      return 1;
    }
    if (0 < DAT_10023318) {
      DAT_10023318 = DAT_10023318 + -1;
      if (DAT_100233cc == 0) {
        FUN_100170b0();
      }
      FUN_100184f0();
      FUN_10017fe0();
      FUN_10017200();
      return 1;
    }
    return 0;
  }
  DAT_10023394 = GetVersion();
  iVar1 = FUN_100171c0();
  if (iVar1 == 0) {
    return 0;
  }
  _DAT_100233a0 = DAT_10023394 >> 8 & 0xff;
  _DAT_1002339c = DAT_10023394 & 0xff;
  _DAT_10023398 = _DAT_1002339c * 0x100 + _DAT_100233a0;
  DAT_10023394 = DAT_10023394 >> 0x10;
  iVar1 = FUN_10017f80();
  if (iVar1 == 0) {
    FUN_10017200();
    return 0;
  }
  DAT_1002533c = GetCommandLineA();
  DAT_1002331c = FUN_10018e00();
  if ((DAT_1002533c != (LPSTR)0x0) && (DAT_1002331c != (LPSTR)0x0)) {
    FUN_100182e0();
    FUN_10018df0();
    FUN_10018640();
    FUN_10018550();
    FUN_10017060();
    DAT_10023318 = DAT_10023318 + 1;
    return 1;
  }
  FUN_10017fe0();
  FUN_10017200();
  return 0;
}


