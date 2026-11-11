
/* ==== FUN_11009960 @ 11009960 ==== 
 * signature: undefined __cdecl FUN_11009960(undefined1 * param_1, undefined1 * param_2, int param_3)
 * body: 11009960-1100997c
 */

void __cdecl FUN_11009960(undefined1 *param_1,undefined1 *param_2,int param_3)

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


