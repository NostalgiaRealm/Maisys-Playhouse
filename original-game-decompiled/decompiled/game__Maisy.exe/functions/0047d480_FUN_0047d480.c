
/* ==== FUN_0047d480 @ 0047d480 ==== 
 * signature: undefined1 __fastcall FUN_0047d480(int param_1)
 * body: 0047d480-0047d491
 */

undefined1 __fastcall FUN_0047d480(int param_1)

{
  if ((*(byte *)(param_1 + 100) & 8) == 0) {
    *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) | 8;
    return 0;
  }
  return 1;
}


