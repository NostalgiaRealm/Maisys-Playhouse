
/* ==== FUN_00433590 @ 00433590 ==== 
 * signature: undefined4 __cdecl FUN_00433590(int param_1, undefined2 * param_2)
 * body: 00433590-004335b6
 */

undefined4 __cdecl FUN_00433590(int param_1,undefined2 *param_2)

{
  if (*(int *)(param_1 + 4) == 0) {
    *param_2 = 0;
    return 0;
  }
  *param_2 = (short)*(undefined4 *)(*(int *)(param_1 + 4) + 0x26);
  return 0;
}


