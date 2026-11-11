
/* ==== FUN_14008dc0 @ 14008dc0 ==== 
 * signature: undefined __cdecl FUN_14008dc0(int param_1)
 * body: 14008dc0-14008dfe
 */

void __cdecl FUN_14008dc0(int param_1)

{
  if (*(int *)(param_1 + 6) == 0) {
    if (*(int *)(param_1 + 10) == 0) goto LAB_14008df0;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 6) + 8) = *(undefined4 *)(param_1 + 10);
  }
  if (*(int *)(param_1 + 10) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 10) + 4) = *(undefined4 *)(param_1 + 6);
  }
LAB_14008df0:
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return;
}


