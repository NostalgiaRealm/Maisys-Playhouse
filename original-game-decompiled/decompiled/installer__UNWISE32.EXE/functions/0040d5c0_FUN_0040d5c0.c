
/* ==== FUN_0040d5c0 @ 0040d5c0 ==== 
 * signature: undefined __stdcall FUN_0040d5c0(void)
 * body: 0040d5c0-0040d5fc
 */

void FUN_0040d5c0(void)

{
  if ((DAT_00413430 == 1) || ((DAT_00413430 == 0 && (DAT_00411054 == 1)))) {
    FUN_0040d600(0xfc);
    if (DAT_004137f8 != (code *)0x0) {
      (*DAT_004137f8)();
    }
    FUN_0040d600(0xff);
  }
  return;
}


