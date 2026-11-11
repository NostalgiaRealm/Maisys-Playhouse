
/* ==== FUN_0042dff0 @ 0042dff0 ==== 
 * signature: undefined4 __fastcall FUN_0042dff0(int * param_1)
 * body: 0042dff0-0042e0a7
 */

undefined4 __fastcall FUN_0042dff0(int *param_1)

{
  int iVar1;
  byte bVar2;
  undefined3 extraout_var;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  bVar2 = FUN_00412e60((int)param_1);
  if (bVar2 != 0) {
    return CONCAT31(extraout_var,1);
  }
  piVar3 = (int *)FUN_00469f80(param_1);
  while (piVar3 != (int *)0x0) {
    iVar1 = *piVar3;
    uVar4 = (**(code **)(iVar1 + 0x200))();
    if ((char)uVar4 != '\0') {
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
    piVar3 = (int *)(**(code **)(iVar1 + 0x174))();
  }
  piVar3 = (int *)FUN_00469fb0(param_1);
  piVar7 = piVar3;
  while( true ) {
    if (piVar3 == (int *)0x0) {
      return (uint)piVar7 & 0xffffff00;
    }
    uVar4 = (**(code **)(*piVar3 + 0x18))();
    if ((char)uVar4 != '\0') break;
    piVar5 = (int *)FUN_00469fb0(piVar3);
    piVar7 = piVar5;
    for (; piVar5 != (int *)0x0; piVar5 = *(int **)((int)piVar5 + 0x6a)) {
      uVar4 = (**(code **)(*piVar5 + 0x18))();
      if ((char)uVar4 != '\0') {
        return CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
      piVar6 = (int *)FUN_00469fb0(piVar5);
      piVar7 = piVar6;
      for (; piVar6 != (int *)0x0; piVar6 = *(int **)((int)piVar6 + 0x6a)) {
        piVar7 = (int *)(**(code **)(*piVar6 + 0x18))();
        if ((char)piVar7 != '\0') {
          return CONCAT31((int3)((uint)piVar7 >> 8),1);
        }
      }
    }
    piVar3 = *(int **)((int)piVar3 + 0x6a);
  }
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


