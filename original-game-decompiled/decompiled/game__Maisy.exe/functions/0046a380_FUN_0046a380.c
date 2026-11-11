
/* ==== FUN_0046a380 @ 0046a380 ==== 
 * signature: undefined __fastcall FUN_0046a380(int * param_1)
 * body: 0046a380-0046a3fe
 */

void __fastcall FUN_0046a380(int *param_1)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  int *piVar4;
  
  pvVar3 = FUN_0046da90(param_1,'\x01','\x01');
  if (pvVar3 != (void *)0x0) {
    piVar4 = FUN_0046da90(param_1,'\x01','\x01');
    (**(code **)(*piVar4 + 0x1c4))(param_1,0);
  }
  iVar1 = *param_1;
  cVar2 = (**(code **)(iVar1 + 0x218))();
  if (cVar2 == '\0') {
    for (piVar4 = (int *)FUN_00469fb0(param_1); piVar4 != (int *)0x0;
        piVar4 = *(int **)((int)piVar4 + 0x6a)) {
      (**(code **)(*piVar4 + 0x200))();
    }
    for (piVar4 = (int *)(**(code **)(iVar1 + 0x188))(); piVar4 != (int *)0x0;
        piVar4 = (int *)(**(code **)(*piVar4 + 0x174))()) {
      FUN_0042c220(piVar4);
    }
  }
  return;
}


