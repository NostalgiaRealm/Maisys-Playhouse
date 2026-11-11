
/* ==== FUN_14008d80 @ 14008d80 ==== 
 * signature: undefined __cdecl FUN_14008d80(int param_1)
 * body: 14008d80-14008db8
 */

void __cdecl FUN_14008d80(int param_1)

{
  if (*(int *)(param_1 + 2) != 0) {
    if (*(int *)(param_1 + 6) == 0) {
      if (*(int *)(param_1 + 10) == 0) goto LAB_14008db0;
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 6) + 8) = *(undefined4 *)(param_1 + 10);
    }
    if (*(int *)(param_1 + 10) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 10) + 4) = *(undefined4 *)(param_1 + 6);
    }
  }
LAB_14008db0:
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return;
}


