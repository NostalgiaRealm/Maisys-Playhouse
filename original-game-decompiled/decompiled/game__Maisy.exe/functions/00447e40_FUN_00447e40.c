
/* ==== FUN_00447e40 @ 00447e40 ==== 
 * signature: undefined __stdcall FUN_00447e40(void)
 * body: 00447e40-00447e94
 */

void FUN_00447e40(void)

{
  if (DAT_004db9a8 != (HGLOBAL)0x0) {
    FUN_0043f7a0(DAT_004db9a8);
    DAT_004db9a8 = (HGLOBAL)0x0;
  }
  if (DAT_004db9b8 != (HGLOBAL)0x0) {
    FUN_0043f7a0(DAT_004db9b8);
    DAT_004db9b8 = (HGLOBAL)0x0;
  }
  if (DAT_004db9ac != (HGLOBAL)0x0) {
    FUN_0043f7a0(DAT_004db9ac);
    DAT_004db9ac = (HGLOBAL)0x0;
  }
  return;
}


