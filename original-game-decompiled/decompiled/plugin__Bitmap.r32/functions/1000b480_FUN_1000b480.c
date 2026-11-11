
/* ==== FUN_1000b480 @ 1000b480 ==== 
 * signature: undefined __stdcall FUN_1000b480(void)
 * body: 1000b480-1000b4bc
 */

void FUN_1000b480(void)

{
  if ((DAT_10016f3c == 1) || ((DAT_10016f3c == 0 && (DAT_10016f40 == 1)))) {
    FUN_1000b4c0(0xfc);
    if (DAT_10017248 != (code *)0x0) {
      (*DAT_10017248)();
    }
    FUN_1000b4c0(0xff);
  }
  return;
}


