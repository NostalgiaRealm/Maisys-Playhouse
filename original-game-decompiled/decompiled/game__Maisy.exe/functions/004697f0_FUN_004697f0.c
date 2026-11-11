
/* ==== FUN_004697f0 @ 004697f0 ==== 
 * signature: undefined __fastcall FUN_004697f0(int * param_1)
 * body: 004697f0-00469899
 */

void __fastcall FUN_004697f0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  *(uint *)((int)param_1 + 0x7e) = *(uint *)((int)param_1 + 0x7e) & 0x7fffffff;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 8;
  *(undefined4 *)((int)param_1 + 0x3a) = 0;
  DAT_004dc59c = DAT_004dc59c + -1;
  if (*(int **)((int)param_1 + 0x5a) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x5a) + 0x208))(0);
    (**(code **)(**(int **)((int)param_1 + 0x5a) + 4))();
    *(undefined4 *)((int)param_1 + 0x5a) = 0;
  }
  if (*(int **)((int)param_1 + 0x52) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x52) + 0x1c8))(param_1,0);
  }
  *(undefined4 *)((int)param_1 + 0x52) = 0;
  piVar1 = *(int **)((int)param_1 + 0x4e);
  while (piVar2 = piVar1, piVar2 != (int *)0x0) {
    piVar1 = *(int **)((int)piVar2 + 0x3e);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x1fc))(0);
      (**(code **)(*piVar2 + 8))(1,0);
    }
  }
  if (*(int *)((int)param_1 + 0x1a) - (int)param_1 != 0x12) {
    (**(code **)(*param_1 + 0xcc))();
  }
  (**(code **)(*param_1 + 0x2c0))();
  FUN_0040afd0(param_1);
  return;
}


