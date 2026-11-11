
/* ==== FUN_11006290 @ 11006290 ==== 
 * signature: undefined __cdecl FUN_11006290(uint * param_1, char param_2)
 * body: 11006290-110062a5
 */

void __cdecl FUN_11006290(uint *param_1,char param_2)

{
  *param_1 = *param_1 & ~(1 << (0x1fU - param_2 & 0x1f));
  return;
}


