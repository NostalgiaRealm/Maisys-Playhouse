
/* ==== FUN_11031ef0 @ 11031ef0 ==== 
 * signature: undefined __stdcall FUN_11031ef0(void)
 * body: 11031ef0-11031f21
 */

void FUN_11031ef0(void)

{
  if (DAT_11037edc == 0) {
    __lock(0xb);
    if (DAT_11037edc == 0) {
      FUN_11031f50();
      DAT_11037edc = DAT_11037edc + 1;
    }
    FUN_1102b240(0xb);
  }
  return;
}


