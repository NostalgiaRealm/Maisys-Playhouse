
/* ==== FUN_11006310 @ 11006310 ==== 
 * signature: char __cdecl FUN_11006310(short * param_1, char param_2)
 * body: 11006310-1100632d
 */

char __cdecl FUN_11006310(short *param_1,char param_2)

{
  return '\x01' - ((1 << (0xfU - param_2 & 0x1f) & (int)*param_1) == 0U);
}


