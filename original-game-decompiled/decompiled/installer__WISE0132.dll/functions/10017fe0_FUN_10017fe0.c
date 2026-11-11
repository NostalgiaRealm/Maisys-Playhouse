
/* ==== FUN_10017fe0 @ 10017fe0 ==== 
 * signature: undefined __stdcall FUN_10017fe0(void)
 * body: 10017fe0-10018000
 */

void FUN_10017fe0(void)

{
  FUN_10016da0();
  if (DAT_10022334 != 0xffffffff) {
    TlsFree(DAT_10022334);
    DAT_10022334 = 0xffffffff;
  }
  return;
}


