
/* ==== FUN_0046d970 @ 0046d970 ==== 
 * signature: undefined __fastcall FUN_0046d970(int param_1)
 * body: 0046d970-0046d9b0
 */

void __fastcall FUN_0046d970(int param_1)

{
  if (*(int **)(param_1 + 0x52) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x52) + 0x80))(0x7fffffff,0x4b);
    (**(code **)(**(int **)(param_1 + 0x52) + 0x1c8))(param_1,0);
    *(undefined4 *)(param_1 + 0x52) = 0;
    if (*(int **)(param_1 + 0x5a) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x5a) + 0x208))(0);
    }
  }
  return;
}


