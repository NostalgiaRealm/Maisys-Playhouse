
/* ==== FUN_0040c0b0 @ 0040c0b0 ==== 
 * signature: undefined4 __stdcall FUN_0040c0b0(void)
 * body: 0040c0b0-0040c0e6
 */

undefined4 FUN_0040c0b0(void)

{
  undefined **ppuVar1;
  
  DAT_00413ce4 = HeapCreate(1,0x1000,0);
  if (DAT_00413ce4 == (HANDLE)0x0) {
    return 0;
  }
  ppuVar1 = FUN_0040c0f0();
  if (ppuVar1 == (undefined **)0x0) {
    HeapDestroy(DAT_00413ce4);
    return 0;
  }
  return 1;
}


