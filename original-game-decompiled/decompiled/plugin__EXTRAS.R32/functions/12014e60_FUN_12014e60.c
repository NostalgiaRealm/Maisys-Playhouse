
/* ==== FUN_12014e60 @ 12014e60 ==== 
 * signature: int __cdecl FUN_12014e60(int param_1, undefined2 * param_2)
 * body: 12014e60-12014e82
 */

int __cdecl FUN_12014e60(int param_1,undefined2 *param_2)

{
  *param_2 = 1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 100);
  if (*(int *)(param_1 + 100) != 0) {
    return *(int *)(param_1 + 100) + 0x9ffff;
  }
  return 0;
}


