
/* ==== FUN_0043d860 @ 0043d860 ==== 
 * signature: uint __cdecl FUN_0043d860(undefined4 * param_1, undefined4 * param_2)
 * body: 0043d860-0043d877
 */

uint __cdecl FUN_0043d860(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  return uVar1 & 0xffffff00;
}


