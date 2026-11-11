
/* ==== FUN_0041d750 @ 0041d750 ==== 
 * signature: undefined __stdcall FUN_0041d750(undefined4 * param_1, undefined4 * param_2)
 * body: 0041d750-0041d767
 */

void FUN_0041d750(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}


