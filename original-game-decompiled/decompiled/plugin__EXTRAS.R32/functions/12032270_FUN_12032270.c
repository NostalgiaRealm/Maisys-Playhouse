
/* ==== FUN_12032270 @ 12032270 ==== 
 * signature: undefined __stdcall FUN_12032270(void)
 * body: 12032270-120322a1
 */

void FUN_12032270(void)

{
  if (DAT_120397cc == 0) {
    __lock(0xb);
    if (DAT_120397cc == 0) {
      FUN_120322d0();
      DAT_120397cc = DAT_120397cc + 1;
    }
    FUN_1202c520(0xb);
  }
  return;
}


