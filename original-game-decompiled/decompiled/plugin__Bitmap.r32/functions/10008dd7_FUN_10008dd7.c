
/* ==== FUN_10008dd7 @ 10008dd7 ==== 
 * signature: undefined __cdecl FUN_10008dd7(int param_1)
 * body: 10008dd7-10008e5f
 */

void __cdecl FUN_10008dd7(int param_1)

{
  if ((*(int *)(param_1 + 2) != 0) &&
     ((*(int *)(param_1 + 6) != 0 || (*(int *)(param_1 + 10) != 0)))) {
    if (*(int *)(param_1 + 6) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 6) + 8) = *(undefined4 *)(param_1 + 10);
    }
    if (*(int *)(param_1 + 10) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 10) + 4) = *(undefined4 *)(param_1 + 6);
    }
  }
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return;
}


