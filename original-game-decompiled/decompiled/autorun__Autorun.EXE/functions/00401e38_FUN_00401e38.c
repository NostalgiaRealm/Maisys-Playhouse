
/* ==== FUN_00401e38 @ 00401e38 ==== 
 * signature: uint __stdcall FUN_00401e38(void)
 * body: 00401e38-00401ef4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00401e38(void)

{
  UINT UVar1;
  int iVar2;
  UINT uBytes;
  
  if (DAT_004042bc == 0) {
    _DAT_004043b0 = 0;
    uBytes = 0x8000;
    if ((int)DAT_004043a4 < 0x8001) {
      uBytes = DAT_004043a4;
    }
    UVar1 = _lread(DAT_00404368,DAT_00404398,uBytes);
    if ((UVar1 != 0) && (UVar1 != 0xffffffff)) {
LAB_00401eca:
      DAT_004043a4 = DAT_004043a4 - UVar1;
      DAT_004042a8 = DAT_004042a8 + UVar1;
      DAT_0040437c = 1;
      DAT_00404380 = UVar1;
      return (uint)*DAT_00404398;
    }
    if ((DAT_00404290 != (code *)0x0) && (iVar2 = (*DAT_00404290)(DAT_004043a4,uBytes), iVar2 == 0))
    {
      DAT_00404368 = DAT_004042b8;
      _llseek(DAT_004042b8,DAT_004042a8 - _DAT_004042ac,0);
      UVar1 = _lread(DAT_00404368,DAT_00404398,uBytes);
      if ((UVar1 != 0) && (UVar1 != 0xffffffff)) goto LAB_00401eca;
    }
  }
  return 0xffffffff;
}


