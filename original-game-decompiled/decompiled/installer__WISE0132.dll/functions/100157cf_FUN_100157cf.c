
/* ==== FUN_100157cf @ 100157cf ==== 
 * signature: uint __stdcall FUN_100157cf(void)
 * body: 100157cf-100157ea
 */

uint FUN_100157cf(void)

{
  BOOL BVar1;
  
  if (DAT_100238d8 == (HWND)0x0) {
    return 0;
  }
  BVar1 = IsWindowVisible(DAT_100238d8);
  return -(uint)(BVar1 != 0) & (uint)DAT_100238d8;
}


