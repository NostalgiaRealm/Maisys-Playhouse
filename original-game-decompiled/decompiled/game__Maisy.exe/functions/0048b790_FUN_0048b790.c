
/* ==== FUN_0048b790 @ 0048b790 ==== 
 * signature: undefined __cdecl FUN_0048b790(int param_1)
 * body: 0048b790-0048b7d1
 */

void __cdecl FUN_0048b790(int param_1)

{
  if (*(int *)(param_1 + 6) == 0) {
    if (*(int *)(param_1 + 10) == 0) goto LAB_0048b7c2;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 6) + 8) = *(undefined4 *)(param_1 + 10);
  }
  if (*(int *)(param_1 + 10) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 10) + 4) = *(undefined4 *)(param_1 + 6);
  }
LAB_0048b7c2:
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return;
}


