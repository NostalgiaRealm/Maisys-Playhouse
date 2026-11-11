
/* ==== FUN_1000b3e0 @ 1000b3e0 ==== 
 * signature: undefined4 __stdcall FUN_1000b3e0(void)
 * body: 1000b3e0-1000b416
 */

undefined4 FUN_1000b3e0(void)

{
  undefined **ppuVar1;
  
  DAT_100183e4 = HeapCreate(0,0x1000,0);
  if (DAT_100183e4 == (HANDLE)0x0) {
    return 0;
  }
  ppuVar1 = FUN_1000d600();
  if (ppuVar1 == (undefined **)0x0) {
    HeapDestroy(DAT_100183e4);
    return 0;
  }
  return 1;
}


