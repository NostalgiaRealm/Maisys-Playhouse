
/* ==== FUN_100171c0 @ 100171c0 ==== 
 * signature: undefined4 __stdcall FUN_100171c0(void)
 * body: 100171c0-100171f6
 */

undefined4 FUN_100171c0(void)

{
  undefined **ppuVar1;
  
  DAT_1002532c = HeapCreate(0,0x1000,0);
  if (DAT_1002532c == (HANDLE)0x0) {
    return 0;
  }
  ppuVar1 = FUN_10017240();
  if (ppuVar1 == (undefined **)0x0) {
    HeapDestroy(DAT_1002532c);
    return 0;
  }
  return 1;
}


