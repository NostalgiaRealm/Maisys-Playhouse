
/* ==== FUN_11006270 @ 11006270 ==== 
 * signature: undefined __cdecl FUN_11006270(uint * param_1, char param_2)
 * body: 11006270-11006283
 */

void __cdecl FUN_11006270(uint *param_1,char param_2)

{
  *param_1 = *param_1 | 1 << (0x1fU - param_2 & 0x1f);
  return;
}


