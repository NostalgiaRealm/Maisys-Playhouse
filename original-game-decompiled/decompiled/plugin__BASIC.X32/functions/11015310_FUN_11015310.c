
/* ==== FUN_11015310 @ 11015310 ==== 
 * signature: undefined __cdecl FUN_11015310(int param_1, int param_2)
 * body: 11015310-11015342
 */

void __cdecl FUN_11015310(int param_1,int param_2)

{
  if (*(int *)(param_1 + 2) == *(int *)(param_2 + 0x18)) {
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 6);
  }
  if (*(int *)(param_1 + 2) == *(int *)(param_2 + 0x1c)) {
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 6);
  }
  if (*(int *)(param_1 + 2) == *(int *)(param_2 + 0x20)) {
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 6);
  }
  return;
}


