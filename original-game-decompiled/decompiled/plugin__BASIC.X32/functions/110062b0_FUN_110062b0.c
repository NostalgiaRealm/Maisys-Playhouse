
/* ==== FUN_110062b0 @ 110062b0 ==== 
 * signature: char __cdecl FUN_110062b0(uint * param_1, char param_2)
 * body: 110062b0-110062ca
 */

char __cdecl FUN_110062b0(uint *param_1,char param_2)

{
  return '\x01' - ((1 << (0x1fU - param_2 & 0x1f) & *param_1) == 0);
}


