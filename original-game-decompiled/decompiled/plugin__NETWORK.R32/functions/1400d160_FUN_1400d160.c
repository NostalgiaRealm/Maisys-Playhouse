
/* ==== FUN_1400d160 @ 1400d160 ==== 
 * signature: undefined __stdcall FUN_1400d160(void)
 * body: 1400d160-1400d185
 */

void FUN_1400d160(void)

{
  DAT_14026030 = DAT_14026030 + -1;
  if (DAT_14026030 == 0) {
    FUN_14009590();
    if (DAT_14026718 != (HWND)0x0) {
      FUN_14009650(DAT_14026718);
    }
  }
  return;
}


