
/* ==== FUN_004835f0 @ 004835f0 ==== 
 * signature: undefined4 __cdecl FUN_004835f0(undefined4 param_1, short * param_2, int * param_3, int * param_4, undefined4 * param_5)
 * body: 004835f0-00483885
 */

undefined4 __cdecl
FUN_004835f0(undefined4 param_1,short *param_2,int *param_3,int *param_4,undefined4 *param_5)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined2 local_30;
  int *local_2e;
  undefined4 local_2a;
  undefined4 local_26;
  undefined4 local_22;
  int *local_8;
  
  piVar5 = (int *)0x0;
  iVar4 = 0;
  local_8 = (int *)0x0;
  if (param_3 != (int *)0x0) {
    iVar4 = FUN_0040c620(param_3);
  }
  if ((*(uint *)((int)param_3 + 0x1e) & 0x10) == 0) {
    piVar6 = (int *)0x0;
    if ((*(uint *)((int)param_3 + 0x1e) & 2) != 0) {
      piVar6 = param_4;
    }
  }
  else {
    piVar5 = param_3;
    piVar6 = *(int **)((int)param_3 + 0x3a);
  }
  piVar3 = local_8;
  if (((piVar6 != (int *)0x0) || (piVar5 != (int *)0x0)) && (*param_2 == 100)) {
    iVar1 = *(int *)(param_2 + 3);
    if (iVar1 == 6) {
      piVar3 = (int *)FUN_0043e950(piVar5,*(int *)(param_2 + 1));
    }
    else if (iVar1 == 1) {
      piVar3 = FUN_0043eae0((int)piVar5,*(int *)(param_2 + 1));
    }
    else if (iVar1 == 0xb) {
      piVar5 = (int *)FUN_0043e950(piVar5,*(int *)(param_2 + 1));
      local_30 = 0x69;
      local_2a = 0;
      local_26 = 0;
      local_2e = (int *)0x0;
      local_22 = 0;
      if ((piVar5 == (int *)0x0) ||
         (iVar4 = (**(code **)(*piVar5 + 0x98))(s_value_004d9864,0,&local_30), piVar3 = local_2e,
         iVar4 != 0)) {
        local_8 = (int *)0x0;
        piVar3 = local_8;
      }
    }
    else if (iVar1 == 5) {
      switch(*(undefined4 *)(param_2 + 1)) {
      case 0x65:
        if (iVar4 != 0) {
          piVar3 = (int *)FUN_004053f0(iVar4);
        }
        break;
      case 0x66:
        if (piVar6 != (int *)0x0) {
          piVar3 = (int *)FUN_0046ca10((int)piVar6);
        }
        break;
      case 0x67:
        if (piVar6 != (int *)0x0) {
          piVar3 = (int *)FUN_0046ca60((int)piVar6);
        }
        break;
      case 0x68:
        if (piVar6 != (int *)0x0) {
          piVar3 = (int *)FUN_0046c9f0((int)piVar6);
        }
        break;
      case 0x69:
        if (iVar4 != 0) {
          piVar3 = (int *)FUN_004053e0(iVar4);
        }
        break;
      case 0x6a:
        if (piVar6 != (int *)0x0) {
          piVar3 = *(int **)((int)piVar6 + 0x62);
        }
        break;
      case 0x6c:
        piVar3 = piVar6;
        if (piVar5 != (int *)0x0) {
          pcVar2 = *(code **)(*piVar5 + 0x218);
          iVar4 = (*pcVar2)();
          if (iVar4 != 0) {
            piVar3 = (int *)(*pcVar2)();
          }
        }
        break;
      case 0x6d:
        if (piVar6 != (int *)0x0) {
          piVar3 = (int *)FUN_0046cac0((int)piVar6);
        }
        break;
      case 0xc9:
        if (piVar6 != (int *)0x0) {
          piVar3 = piVar6;
        }
        break;
      case 0xcf:
        if ((param_4 == (int *)0x0) || ((*(byte *)((int)param_4 + 0x1e) & 1) == 0)) {
          local_8 = (int *)0x0;
          piVar3 = local_8;
        }
        else {
          piVar3 = (int *)(**(code **)(*param_4 + 0x16c))();
        }
        break;
      case 0xd0:
        if (piVar5 != (int *)0x0) {
          pcVar2 = *(code **)(*piVar5 + 0x218);
          iVar4 = (*pcVar2)();
          piVar3 = local_8;
          if (iVar4 != 0) {
            piVar5 = (int *)(*pcVar2)();
            iVar4 = (**(code **)(*piVar5 + 0x218))();
            piVar3 = local_8;
            if (iVar4 != 0) {
              piVar5 = (int *)(*pcVar2)();
              piVar3 = (int *)(**(code **)(*piVar5 + 0x218))();
            }
          }
        }
        break;
      case 0xd1:
        if (piVar6 != (int *)0x0) {
          piVar3 = *(int **)((int)piVar6 + 0x6a);
        }
        break;
      case 0xd2:
        if (piVar6 != (int *)0x0) {
          piVar3 = *(int **)((int)piVar6 + 0x66);
        }
      }
    }
    goto switchD_004836f0_caseD_6b;
  }
  if (*param_2 == 0x69) {
    if (piVar5 != (int *)0x0) goto LAB_00483865;
joined_r0x00483863:
    piVar5 = piVar6;
    if (piVar6 != (int *)0x0) goto LAB_00483865;
  }
  else {
    if (*param_2 != 0x73) goto switchD_004836f0_caseD_6b;
    if (piVar5 == (int *)0x0) goto joined_r0x00483863;
LAB_00483865:
    FUN_004537b0(param_2,piVar5);
  }
  piVar3 = *(int **)(param_2 + 1);
switchD_004836f0_caseD_6b:
  local_8 = piVar3;
  *param_5 = local_8;
  return 0;
}


