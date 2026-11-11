
/* ==== FUN_12014e90 @ 12014e90 ==== 
 * signature: undefined4 __cdecl FUN_12014e90(int param_1, undefined2 * param_2)
 * body: 12014e90-12014ea5
 */

undefined4 __cdecl FUN_12014e90(int param_1,undefined2 *param_2)

{
  *param_2 = 1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x68);
  return 0;
}


