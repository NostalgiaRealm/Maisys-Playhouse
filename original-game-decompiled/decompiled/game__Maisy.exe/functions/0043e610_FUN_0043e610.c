
/* ==== FUN_0043e610 @ 0043e610 ==== 
 * signature: undefined4 __cdecl FUN_0043e610(int * param_1, short param_2, int * param_3, int * param_4, int * param_5)
 * body: 0043e610-0043e860
 */

uint __cdecl FUN_0043e610(int *param_1,short param_2,int *param_3,int *param_4,int *param_5)

{
  uint in_EAX;
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int local_70 [8];
  int local_50 [8];
  int local_30 [7];
  int *local_14;
  int *local_10;
  int local_c;
  char local_5;
  
  iVar6 = 0;
  if ((((param_1 == (int *)0x0) || (param_2 == 0)) || (param_3 == (int *)0x0)) || (8 < param_2)) {
    return in_EAX & 0xffffff00;
  }
  local_5 = '\0';
  piVar1 = (int *)FUN_00466a80(param_1[1]);
  local_10 = piVar1;
  if (0 < param_2) {
    piVar1 = (int *)0x0;
    iVar5 = (int)param_2;
    piVar2 = local_30;
    for (iVar4 = iVar5; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar2 = 0;
      piVar2 = piVar2 + 1;
    }
    piVar2 = local_50;
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar2 = 0;
      piVar2 = piVar2 + 1;
    }
  }
  piVar2 = param_1;
  if (param_4 != (int *)0x0) {
    *param_4 = param_1[3];
    piVar1 = param_1;
  }
  while( true ) {
    if (piVar2 == (int *)0x0) {
      if (0 < param_2) {
        piVar1 = (int *)0x0;
        for (iVar6 = (int)param_2; iVar6 != 0; iVar6 = iVar6 + -1) {
          *param_3 = 0;
          param_3 = param_3 + 1;
        }
      }
      return (uint)piVar1 & 0xffffff00;
    }
    if (((param_5 != (int *)0x0) && (piVar2 == param_5)) || (*(short *)((int)piVar2 + 0x22) == 0x43)
       ) break;
    local_50[iVar6] = piVar2[3];
    local_30[iVar6] = (int)piVar2;
    piVar2 = (int *)(**(code **)(*piVar2 + 0x16c))();
    if ((piVar2 != (int *)0x0) && (*(int *)((int)piVar2 + 0x2a) != 0)) {
      local_5 = '\x01';
    }
    iVar4 = iVar6 + 1;
    iVar6 = iVar4 % (int)param_2;
    piVar1 = (int *)(iVar4 / (int)param_2);
  }
  local_30[iVar6] = (int)piVar2;
  local_50[iVar6] = piVar2[3];
  local_c = (int)param_2;
  piVar1 = (int *)((int)param_2 - 1);
  if (-1 < (int)piVar1) {
    piVar2 = local_70 + (int)piVar1;
    piVar7 = param_3 + (int)piVar1;
    do {
      iVar6 = iVar6 + 1;
      piVar8 = piVar2 + -1;
      iVar4 = iVar6 % local_c;
      *piVar2 = local_30[iVar4];
      piVar1 = local_70;
      *piVar7 = local_50[iVar4];
      piVar2 = piVar8;
      piVar7 = piVar7 + -1;
    } while (piVar1 <= piVar8);
  }
  if (local_5 != '\0') {
    piVar2 = (int *)0x0;
    local_5 = '\0';
    local_14 = (int *)0x0;
    if (0 < param_2) {
      piVar7 = local_70;
      piVar8 = param_3;
      do {
        if ((*piVar7 == 0) || (*piVar8 == 0)) {
          if (param_4 != (int *)0x0) {
            *param_4 = param_3[(int)local_14 - 1];
            piVar1 = local_14;
          }
          return CONCAT31((int3)((uint)piVar1 >> 8),1);
        }
        if (local_5 == '\0') {
          iVar6 = *piVar7;
          if (*(int *)(iVar6 + 0x2a) != 0) {
            local_5 = '\x01';
            goto LAB_0043e7a5;
          }
        }
        else {
          uVar3 = (**(code **)(*(int *)piVar7[-1] + 0x1b0))(*piVar7);
          piVar2 = (int *)(**(code **)(*piVar2 + 400))(uVar3);
          if (piVar2 == (int *)0x0) {
            param_3[(int)local_14] = 0;
            return (uint)local_14 & 0xffffff00;
          }
          *piVar8 = piVar2[3];
          if (*(int *)((int)piVar2 + 0x2a) != 0) {
            iVar6 = *piVar7;
LAB_0043e7a5:
            piVar2 = (int *)FUN_00450230(local_10,*(short *)(iVar6 + 0x36));
          }
        }
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
        local_14 = (int *)((int)local_14 + 1);
        piVar1 = local_14;
      } while ((int)local_14 < local_c);
    }
    piVar1 = (int *)(**(code **)(*param_1 + 0x16c))();
    if ((piVar1 != (int *)0x0) && ((*(byte *)(piVar1 + 8) & 8) != 0)) {
      uVar3 = (**(code **)(*piVar1 + 0x1b0))(param_1);
      piVar1 = FUN_00425660(piVar1);
      piVar1 = (int *)(**(code **)(*piVar1 + 400))(uVar3);
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      if (param_4 != (int *)0x0) {
        piVar1 = (int *)piVar1[3];
        *param_4 = (int)piVar1;
      }
    }
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}


