
/* ==== FUN_00461ea0 @ 00461ea0 ==== 
 * signature: undefined __fastcall FUN_00461ea0(int * param_1)
 * body: 00461ea0-00461eda
 */

void __fastcall FUN_00461ea0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  (**(code **)(iVar1 + 0x424))(0);
  (**(code **)(iVar1 + 0x330))();
  for (piVar2 = *(int **)((int)param_1 + 0x6e); piVar2 != (int *)0x0;
      piVar2 = *(int **)((int)piVar2 + 0x6a)) {
    if ((*(uint *)((int)piVar2 + 0x1e) & 4) != 0) {
      (**(code **)(*piVar2 + 0x40c))();
    }
  }
  return;
}


