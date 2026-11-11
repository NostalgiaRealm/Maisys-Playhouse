
/* ==== FUN_0046e790 @ 0046e790 ==== 
 * signature: undefined __fastcall FUN_0046e790(int * param_1)
 * body: 0046e790-0046e876
 */

void __fastcall FUN_0046e790(int *param_1)

{
  if (DAT_004e1c1c != (undefined4 *)0x0) {
    (**(code **)*DAT_004e1c1c)(1);
    DAT_004e1c1c = (undefined4 *)0x0;
  }
  if (*(int **)((int)param_1 + 0x52) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x52) + 4))();
    *(undefined4 *)((int)param_1 + 0x52) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x56) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x56))(1);
    *(undefined4 *)((int)param_1 + 0x56) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x5a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x5a))(1);
    *(undefined4 *)((int)param_1 + 0x5a) = 0;
  }
  if (*(int **)((int)param_1 + 0x92) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x92) + 8))(1,0);
    *(undefined4 *)((int)param_1 + 0x92) = 0;
  }
  if (*(int *)((int)param_1 + 0x96) != 0) {
    FUN_00470bd0((int)param_1);
  }
  if (*(LPVOID *)((int)param_1 + 0x9a) != (LPVOID)0x0) {
    FUN_0043ba20(*(LPVOID *)((int)param_1 + 0x9a));
    *(undefined4 *)((int)param_1 + 0x9a) = 0;
  }
  if (*(LPVOID *)((int)param_1 + 0xa6) != (LPVOID)0x0) {
    FUN_0043f6d0(*(LPVOID *)((int)param_1 + 0xa6));
    *(undefined4 *)((int)param_1 + 0xa6) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x8e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x8e))(1);
    *(undefined4 *)((int)param_1 + 0x8e) = 0;
  }
  FUN_00412db0(param_1);
  return;
}


