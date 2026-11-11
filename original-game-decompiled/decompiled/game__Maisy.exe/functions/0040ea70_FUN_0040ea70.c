
/* ==== FUN_0040ea70 @ 0040ea70 ==== 
 * signature: undefined __cdecl FUN_0040ea70(uint * param_1, uint * param_2, int param_3)
 * body: 0040ea70-0040ea94
 */

void __cdecl FUN_0040ea70(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = ~uVar1;
    param_2 = param_2 + 1;
  }
  return;
}


