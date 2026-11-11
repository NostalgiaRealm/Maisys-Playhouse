
/* ==== FUN_14021390 @ 14021390 ==== 
 * signature: undefined __stdcall FUN_14021390(void)
 * body: 14021390-140213c1
 */

void FUN_14021390(void)

{
  if (DAT_140284d4 == 0) {
    __lock(0xb);
    if (DAT_140284d4 == 0) {
      FUN_140213f0();
      DAT_140284d4 = DAT_140284d4 + 1;
    }
    FUN_1401a650(0xb);
  }
  return;
}


