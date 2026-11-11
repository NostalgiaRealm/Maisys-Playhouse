
/* ==== FUN_110062d0 @ 110062d0 ==== 
 * signature: undefined __cdecl FUN_110062d0(ushort * param_1, char param_2)
 * body: 110062d0-110062e4
 */

void __cdecl FUN_110062d0(ushort *param_1,char param_2)

{
  *param_1 = *param_1 | 1 << (0xfU - param_2 & 0x1f);
  return;
}


