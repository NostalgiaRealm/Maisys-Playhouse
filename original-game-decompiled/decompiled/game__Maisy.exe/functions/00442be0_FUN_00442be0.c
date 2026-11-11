
/* ==== FUN_00442be0 @ 00442be0 ==== 
 * signature: int __cdecl FUN_00442be0(int param_1)
 * body: 00442be0-00442c08
 */

int __cdecl FUN_00442be0(int param_1)

{
  if (0x7fff < param_1) {
    return 0x7fff0000;
  }
  if (param_1 < 0x8000) {
    param_1 = 0x8000;
  }
  return param_1 << 0x10;
}


