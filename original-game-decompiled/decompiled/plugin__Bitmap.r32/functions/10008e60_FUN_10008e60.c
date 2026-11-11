
/* ==== FUN_10008e60 @ 10008e60 ==== 
 * signature: undefined __cdecl FUN_10008e60(int param_1)
 * body: 10008e60-10008edc
 */

void __cdecl FUN_10008e60(int param_1)

{
  if ((*(int *)(param_1 + 6) != 0) || (*(int *)(param_1 + 10) != 0)) {
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


