
/* ==== FUN_00447ea0 @ 00447ea0 ==== 
 * signature: undefined4 __stdcall FUN_00447ea0(void)
 * body: 00447ea0-00447ed6
 */

undefined4 FUN_00447ea0(void)

{
  if (((DAT_004db9c4 != '\0') || (DAT_004db9cc != '\0')) && (DAT_004db9a8 != (HGLOBAL)0x0)) {
    FUN_0043f7a0(DAT_004db9a8);
    DAT_004db9a8 = (HGLOBAL)0x0;
    return DAT_004db9b0;
  }
  return 0;
}


