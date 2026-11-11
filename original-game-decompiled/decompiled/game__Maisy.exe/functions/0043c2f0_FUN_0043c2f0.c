
/* ==== FUN_0043c2f0 @ 0043c2f0 ==== 
 * signature: float10 __stdcall FUN_0043c2f0(void)
 * body: 0043c2f0-0043c376
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0043c2f0(void)

{
  BOOL BVar1;
  uint uVar2;
  LARGE_INTEGER local_c;
  
  if (DAT_004db504 == 0) {
    DAT_004db504 = FUN_0043c280();
  }
  if (DAT_004db504 == 1) {
    BVar1 = QueryPerformanceCounter(&local_c);
    if (BVar1 != 0) {
      uVar2 = local_c.s.HighPart - _DAT_004db508;
      local_c.s = local_c.s & 0xffffffff;
      return (float10)((double)(longlong)local_c * _DAT_004db510 + (double)uVar2 * _DAT_004db518);
    }
  }
  local_c.s.LowPart = timeGetTime();
  local_c.s.HighPart = 0;
  return (float10)((double)(longlong)local_c * 1000.0);
}


