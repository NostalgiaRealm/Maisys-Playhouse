
/* ==== FUN_00468540 @ 00468540 ==== 
 * signature: undefined __fastcall FUN_00468540(int * param_1)
 * body: 00468540-0046858f
 */

void __fastcall FUN_00468540(int *param_1)

{
  if ((char)param_1[0x13] != '\0') {
    if ((*(int *)((int)param_1 + 0x3a) != 0) && (param_1[0x12] != 0)) {
      if ((*(byte *)((int)param_1 + 0x29) & 1) != 0) {
        (**(code **)(*param_1 + 0x148))(0);
      }
      (**(code **)(**(int **)((int)param_1 + 0x3a) + 0x20c))(param_1[0x12]);
      *(undefined1 *)(param_1[0x12] + 0x26) = 0;
      (**(code **)(**(int **)((int)param_1 + 0x3a) + 0x208))(param_1[0x12]);
    }
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  return;
}


