
/* ==== FUN_00466140 @ 00466140 ==== 
 * signature: undefined __cdecl FUN_00466140(undefined1 * param_1, undefined1 * param_2, int param_3)
 * body: 00466140-0046615e
 */

void __cdecl FUN_00466140(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = uVar1;
    param_2 = param_2 + 1;
  }
  return;
}


