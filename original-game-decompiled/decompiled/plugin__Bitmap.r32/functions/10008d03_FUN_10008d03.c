
/* ==== FUN_10008d03 @ 10008d03 ==== 
 * signature: undefined __cdecl FUN_10008d03(undefined2 * param_1, undefined2 * param_2)
 * body: 10008d03-10008dd6
 */

void __cdecl FUN_10008d03(undefined2 *param_1,undefined2 *param_2)

{
  int local_8;
  
  FUN_10008e60((int)param_1);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  if (*(int *)(param_1 + 7) != 0) {
    if (*(int *)(param_2 + 7) == 0) {
      **(undefined4 **)(param_1 + 7) = 0;
      for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
        *(undefined4 *)(*(int *)(param_1 + 7) + 4 + local_8 * 4) = 0;
      }
    }
    else {
      **(undefined4 **)(param_1 + 7) = **(undefined4 **)(param_2 + 7);
      for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
        *(undefined4 *)(*(int *)(param_1 + 7) + 4 + local_8 * 4) =
             *(undefined4 *)(*(int *)(param_2 + 7) + 4 + local_8 * 4);
      }
    }
  }
  return;
}


