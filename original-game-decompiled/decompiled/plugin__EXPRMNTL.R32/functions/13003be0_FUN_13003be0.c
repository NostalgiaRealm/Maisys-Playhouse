
/* ==== FUN_13003be0 @ 13003be0 ==== 
 * signature: undefined __cdecl FUN_13003be0(int param_1)
 * body: 13003be0-13003c18
 */

void __cdecl FUN_13003be0(int param_1)

{
  if (*(int *)(param_1 + 2) != 0) {
    if (*(int *)(param_1 + 6) == 0) {
      if (*(int *)(param_1 + 10) == 0) goto LAB_13003c10;
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 6) + 8) = *(undefined4 *)(param_1 + 10);
    }
    if (*(int *)(param_1 + 10) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 10) + 4) = *(undefined4 *)(param_1 + 6);
    }
  }
LAB_13003c10:
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return;
}


