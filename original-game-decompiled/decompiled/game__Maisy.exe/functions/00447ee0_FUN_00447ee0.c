
/* ==== FUN_00447ee0 @ 00447ee0 ==== 
 * signature: undefined4 __stdcall FUN_00447ee0(void)
 * body: 00447ee0-00447f0d
 */

undefined4 FUN_00447ee0(void)

{
  if ((DAT_004db9c0 != '\0') && (DAT_004db9b8 != (HGLOBAL)0x0)) {
    FUN_0043f7a0(DAT_004db9b8);
    DAT_004db9b8 = (HGLOBAL)0x0;
    return DAT_004db9bc;
  }
  return 0;
}


