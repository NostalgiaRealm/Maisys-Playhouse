
/* ==== FUN_0040d410 @ 0040d410 ==== 
 * signature: undefined4 __cdecl FUN_0040d410(int param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * body: 0040d410-0040d431
 */

undefined4 __cdecl
FUN_0040d410(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((*(uint *)(param_1 + 4) & 6) != 0) {
    *param_4 = param_2;
    uVar1 = 3;
  }
  return uVar1;
}


