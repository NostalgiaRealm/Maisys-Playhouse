
/* ==== FUN_0048b750 @ 0048b750 ==== 
 * signature: undefined __cdecl FUN_0048b750(int param_1)
 * body: 0048b750-0048b78c
 */

void __cdecl FUN_0048b750(int param_1)

{
  if (*(int *)(param_1 + 2) != 0) {
    if (*(int *)(param_1 + 6) == 0) {
      if (*(int *)(param_1 + 10) == 0) goto LAB_0048b783;
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 6) + 8) = *(undefined4 *)(param_1 + 10);
    }
    if (*(int *)(param_1 + 10) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 10) + 4) = *(undefined4 *)(param_1 + 6);
    }
  }
LAB_0048b783:
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return;
}


