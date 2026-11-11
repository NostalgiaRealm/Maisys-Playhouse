
/* ==== FUN_12016310 @ 12016310 ==== 
 * signature: int __cdecl FUN_12016310(int param_1)
 * body: 12016310-12016333
 */

int __cdecl FUN_12016310(int param_1)

{
  if (0x7fff < param_1) {
    return 0x7fff0000;
  }
  if (param_1 < 0x8000) {
    param_1 = 0x8000;
  }
  return param_1 << 0x10;
}


