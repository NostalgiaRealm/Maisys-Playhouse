
/* ==== FUN_1100d450 @ 1100d450 ==== 
 * signature: undefined __cdecl FUN_1100d450(undefined4 * param_1, undefined4 * param_2, uint param_3)
 * body: 1100d450-1100d468
 */

void __cdecl FUN_1100d450(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = param_3 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


