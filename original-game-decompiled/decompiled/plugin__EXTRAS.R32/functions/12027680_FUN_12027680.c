
/* ==== FUN_12027680 @ 12027680 ==== 
 * signature: undefined __cdecl FUN_12027680(int param_1)
 * body: 12027680-120276be
 */

void __cdecl FUN_12027680(int param_1)

{
  if (*(int *)(param_1 + 6) == 0) {
    if (*(int *)(param_1 + 10) == 0) goto LAB_120276b0;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 6) + 8) = *(undefined4 *)(param_1 + 10);
  }
  if (*(int *)(param_1 + 10) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 10) + 4) = *(undefined4 *)(param_1 + 6);
  }
LAB_120276b0:
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return;
}


