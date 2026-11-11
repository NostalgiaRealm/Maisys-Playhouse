
/* ==== FUN_1000a7f0 @ 1000a7f0 ==== 
 * signature: undefined __stdcall FUN_1000a7f0(void)
 * body: 1000a7f0-1000a810
 */

void FUN_1000a7f0(void)

{
  FUN_1000a2a0();
  if (DAT_1001344c != 0xffffffff) {
    TlsFree(DAT_1001344c);
    DAT_1001344c = 0xffffffff;
  }
  return;
}


