
/* ==== FUN_00469ab0 @ 00469ab0 ==== 
 * signature: undefined1 __fastcall FUN_00469ab0(int * param_1)
 * body: 00469ab0-00469b4c
 */

undefined1 __fastcall FUN_00469ab0(int *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  bVar1 = FUN_00412e60((int)param_1);
  if (bVar1 != 0) {
    return 1;
  }
  cVar2 = (**(code **)(*param_1 + 0x218))();
  if (cVar2 == '\0') {
    iVar3 = FUN_00469fb0(param_1);
    if (iVar3 != 0) {
      for (piVar4 = (int *)FUN_00469fb0(param_1); piVar4 != (int *)0x0;
          piVar4 = *(int **)((int)piVar4 + 0x6a)) {
        cVar2 = (**(code **)(*piVar4 + 0x210))();
        if (cVar2 != '\0') {
          return 1;
        }
      }
    }
    iVar3 = FUN_00469f80(param_1);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_00469f80(param_1);
      while (piVar4 != (int *)0x0) {
        iVar3 = *piVar4;
        cVar2 = (**(code **)(iVar3 + 0x200))();
        if (cVar2 != '\0') {
          return 1;
        }
        piVar4 = (int *)(**(code **)(iVar3 + 0x174))();
      }
    }
    return 0;
  }
  return 0;
}


