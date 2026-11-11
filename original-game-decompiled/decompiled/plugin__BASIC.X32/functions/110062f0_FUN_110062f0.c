
/* ==== FUN_110062f0 @ 110062f0 ==== 
 * signature: undefined __cdecl FUN_110062f0(ushort * param_1, char param_2)
 * body: 110062f0-11006307
 */

void __cdecl FUN_110062f0(ushort *param_1,char param_2)

{
  *param_1 = *param_1 & ~(1 << (0xfU - param_2 & 0x1f));
  return;
}


