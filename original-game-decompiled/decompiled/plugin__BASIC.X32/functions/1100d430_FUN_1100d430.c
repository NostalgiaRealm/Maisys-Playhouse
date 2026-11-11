
/* ==== FUN_1100d430 @ 1100d430 ==== 
 * signature: undefined __cdecl FUN_1100d430(undefined4 * param_1, undefined4 * param_2, undefined4 param_3, uint param_4)
 * body: 1100d430-1100d448
 */

void __cdecl FUN_1100d430(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  for (uVar1 = param_4 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


