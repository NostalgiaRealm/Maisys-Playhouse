
/* ==== FUN_0040cb90 @ 0040cb90 ==== 
 * signature: undefined __cdecl FUN_0040cb90(uint * param_1, char param_2, char param_3)
 * body: 0040cb90-0040cbb9
 */

void __cdecl FUN_0040cb90(uint *param_1,char param_2,char param_3)

{
  if (param_2 != '\0') {
    *param_1 = *param_1 | 1 << (0x1fU - param_3 & 0x1f);
    return;
  }
  *param_1 = *param_1 & ~(1 << (0x1fU - param_3 & 0x1f));
  return;
}


