
/* ==== FUN_00414520 @ 00414520 ==== 
 * signature: undefined __cdecl FUN_00414520(int param_1)
 * body: 00414520-0041455e
 */

void __cdecl FUN_00414520(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(param_1 + 8) == 0) goto LAB_0041454f;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 4) + 8) = *(undefined4 *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 4);
  }
LAB_0041454f:
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


