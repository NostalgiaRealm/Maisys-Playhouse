
/* ==== FUN_00493b80 @ 00493b80 ==== 
 * signature: undefined __stdcall FUN_00493b80(void)
 * body: 00493b80-00493ba0
 */

void FUN_00493b80(void)

{
  __mtdeletelocks();
  if (DAT_004de440 != 0xffffffff) {
    TlsFree(DAT_004de440);
    DAT_004de440 = 0xffffffff;
  }
  return;
}


