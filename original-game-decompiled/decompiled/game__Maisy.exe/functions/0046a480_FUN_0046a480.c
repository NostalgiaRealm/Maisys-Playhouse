
/* ==== FUN_0046a480 @ 0046a480 ==== 
 * signature: undefined __fastcall FUN_0046a480(int * param_1)
 * body: 0046a480-0046a4f7
 */

void __fastcall FUN_0046a480(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *param_1;
  (**(code **)(iVar1 + 0x204))();
  pcVar2 = *(code **)(iVar1 + 0x16c);
  iVar3 = (*pcVar2)();
  if (iVar3 != 0) {
    piVar4 = (int *)(*pcVar2)();
    (**(code **)(*piVar4 + 0x1c))(1);
  }
  if ((*(int *)((int)param_1 + 0x3a) != 0) &&
     (*(char *)(*(int *)((int)param_1 + 0x3a) + 0xa4) != '\0')) {
    (**(code **)(iVar1 + 0x234))();
  }
  (**(code **)(iVar1 + 0x2c0))();
  FUN_0040cd70(param_1);
  (**(code **)(iVar1 + 0x314))(0);
  (**(code **)(**(int **)((int)param_1 + 0x5a) + 0x144))(1);
  if (*(int **)((int)param_1 + 0x62) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x62) + 0x1c))(1);
  }
  return;
}


