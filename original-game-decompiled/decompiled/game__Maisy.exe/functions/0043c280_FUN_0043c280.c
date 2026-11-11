
/* ==== FUN_0043c280 @ 0043c280 ==== 
 * signature: undefined4 __stdcall FUN_0043c280(void)
 * body: 0043c280-0043c2eb
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0043c280(void)

{
  BOOL BVar1;
  undefined4 uVar2;
  LARGE_INTEGER local_14;
  LARGE_INTEGER local_c;
  
  uVar2 = 2;
  BVar1 = QueryPerformanceFrequency(&local_c);
  if (BVar1 != 0) {
    BVar1 = QueryPerformanceCounter(&local_14);
    if ((BVar1 != 0) && (local_c.s.HighPart == 0)) {
      uVar2 = 1;
      _DAT_004db508 = local_14.s.HighPart;
      _DAT_004db510 = 1000000.0 / (double)local_c._0_4_;
      _DAT_004db518 = _DAT_004db510 * 4294967296.0;
    }
  }
  return uVar2;
}


