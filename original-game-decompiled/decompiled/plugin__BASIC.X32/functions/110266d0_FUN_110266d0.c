
/* ==== FUN_110266d0 @ 110266d0 ==== 
 * signature: undefined __cdecl FUN_110266d0(undefined1 * param_1, undefined1 * param_2, int param_3)
 * body: 110266d0-110266f6
 */

void __cdecl FUN_110266d0(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
  }
  return;
}


