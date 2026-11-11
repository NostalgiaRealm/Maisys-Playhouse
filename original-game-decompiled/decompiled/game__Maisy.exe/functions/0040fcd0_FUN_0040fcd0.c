
/* ==== FUN_0040fcd0 @ 0040fcd0 ==== 
 * signature: undefined __stdcall FUN_0040fcd0(void)
 * body: 0040fcd0-0040fd02
 */

void FUN_0040fcd0(void)

{
  int iVar1;
  
  DAT_004d99b0 = 1;
  iVar1 = FUN_0048caa0((int *)0x0);
  if (iVar1 != 0) {
    DAT_004d99b0 = 0;
    return;
  }
  iVar1 = FUN_0048ceb9();
  if (iVar1 != 0) {
    FUN_0048cdf0();
    DAT_004d99b0 = 0;
  }
  return;
}


