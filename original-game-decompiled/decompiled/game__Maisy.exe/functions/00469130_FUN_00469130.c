
/* ==== FUN_00469130 @ 00469130 ==== 
 * signature: undefined __cdecl FUN_00469130(undefined1 * param_1, undefined1 * param_2, int param_3)
 * body: 00469130-00469158
 */

void __cdecl FUN_00469130(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
  }
  return;
}


