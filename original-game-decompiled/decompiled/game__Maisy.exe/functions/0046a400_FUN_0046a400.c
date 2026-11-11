
/* ==== FUN_0046a400 @ 0046a400 ==== 
 * signature: undefined __fastcall FUN_0046a400(int * param_1)
 * body: 0046a400-0046a45f
 */

void __fastcall FUN_0046a400(int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  
  iVar1 = *param_1;
  (**(code **)(iVar1 + 0x32c))();
  cVar2 = (**(code **)(iVar1 + 0x218))();
  if (cVar2 == '\0') {
    for (piVar3 = (int *)FUN_00469fb0(param_1); piVar3 != (int *)0x0;
        piVar3 = *(int **)((int)piVar3 + 0x6a)) {
      (**(code **)(*piVar3 + 0x204))();
    }
    for (piVar3 = (int *)(**(code **)(iVar1 + 0x188))(); piVar3 != (int *)0x0;
        piVar3 = (int *)(**(code **)(*piVar3 + 0x174))()) {
      FUN_0042c290(piVar3);
    }
  }
  return;
}


