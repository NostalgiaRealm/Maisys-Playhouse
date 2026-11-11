
/* ==== FUN_00481c10 @ 00481c10 ==== 
 * signature: undefined4 __stdcall FUN_00481c10(undefined4 * param_1, undefined4 * param_2)
 * body: 00481c10-00481c29
 */

undefined4 FUN_00481c10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return 0;
}


