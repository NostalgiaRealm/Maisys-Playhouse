
/* ==== FUN_00468950 @ 00468950 ==== 
 * signature: undefined __fastcall FUN_00468950(int * param_1)
 * body: 00468950-0046897d
 */

void __fastcall FUN_00468950(int *param_1)

{
  if (param_1[0x12] == 0) {
    (**(code **)(*param_1 + 0x23c))();
  }
  if ((*(int **)((int)param_1 + 0x3a) != (int *)0x0) && (param_1[0x12] != 0)) {
    (**(code **)(**(int **)((int)param_1 + 0x3a) + 0x210))(param_1[0x12]);
    *(undefined1 *)((int)param_1 + 0x4e) = 1;
  }
  return;
}


