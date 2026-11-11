
/* ==== graphmod @ 11023570 ==== 
 * signature: undefined1 __cdecl graphmod(undefined4 * param_1)
 * body: 11023570-110237ed
 */

undefined1 __cdecl graphmod(undefined4 *param_1)

{
  undefined2 uVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 local_3c [15];
  
                    /* 0x23570  15  graphmod */
  local_3c[0]._0_1_ = 1;
  iVar7 = *(int *)((int)param_1 + 0x16);
  puVar9 = *(undefined4 **)((int)param_1 + 0x1a);
  iVar8 = param_1[1];
  if (iVar8 < 0x1f) {
    if (iVar8 == 0x1e) {
      FUN_11023a50(param_1,iVar7,puVar9);
    }
    else {
      switch(iVar8) {
      case 0:
        param_1[3] = 0x334;
        *(undefined2 *)(param_1 + 4) = 1;
        break;
      case 1:
        FUN_11023f70(param_1);
        break;
      default:
        goto switchD_110235a5_caseD_2;
      case 3:
        FUN_11023c50(param_1,iVar7,puVar9);
        break;
      case 4:
        FUN_11023860(param_1,iVar7,*puVar9);
        break;
      case 5:
        FUN_11023970(param_1,iVar7,(int)puVar9);
        break;
      case 0xe:
        FUN_11004840(param_1,6,0);
        if (*(int *)(iVar7 + 0x58) != 0) {
          FUN_11002730(param_1,*(int *)(iVar7 + 0x58));
          *(undefined4 *)(iVar7 + 0x58) = 0;
          *(undefined2 *)(iVar7 + 0x56) = 0;
        }
        break;
      case 0x10:
        break;
      }
    }
    goto switchD_110235a5_caseD_10;
  }
  if (0x19d < iVar8) {
    if (iVar8 == 0x1b2) {
      uVar4 = FUN_11024970(param_1,iVar7);
      return uVar4;
    }
    if (iVar8 == 600) {
      *puVar9 = *(undefined4 *)(iVar7 + 0x24);
      puVar9[1] = *(undefined4 *)(iVar7 + 0x28);
      *(undefined2 *)(puVar9 + 3) = *(undefined2 *)(iVar7 + 0x20);
      puVar9[2] = *(undefined4 *)(iVar7 + 0x24);
    }
    else {
      if (iVar8 != 0x259) {
        return 1;
      }
      *(undefined4 *)(iVar7 + 0x24) = *puVar9;
      *(undefined4 *)(iVar7 + 0x28) = puVar9[1];
      *(undefined2 *)(iVar7 + 0x20) = *(undefined2 *)(puVar9 + 3);
    }
    goto switchD_110235a5_caseD_10;
  }
  if (iVar8 == 0x19d) {
    uVar6 = FUN_11024040(param_1,iVar7);
    *(char *)puVar9 = (char)uVar6;
    return (undefined1)local_3c[0];
  }
  switch(iVar8) {
  case 0x6c:
    puVar10 = local_3c;
    for (iVar7 = 0xe; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    *(undefined2 *)puVar10 = *(undefined2 *)puVar9;
    FUN_11024090();
    break;
  case 0x6d:
    puVar10 = local_3c;
    for (iVar8 = 0xe; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    *(undefined2 *)puVar10 = *(undefined2 *)puVar9;
    FUN_11024700(param_1,iVar7,(int)local_3c);
    break;
  case 0x6e:
    uVar1 = *(undefined2 *)(iVar7 + 0x2c);
    *(undefined2 *)puVar9 = uVar1;
    *(undefined2 *)((int)puVar9 + 2) = uVar1;
    sVar5 = *(short *)(iVar7 + 0x2c);
    if (*(short *)(iVar7 + 0x2c) <= *(short *)(iVar7 + 0x32)) {
      sVar5 = *(short *)(iVar7 + 0x32);
    }
    *(short *)(puVar9 + 1) = sVar5;
    sVar5 = *(short *)(iVar7 + 0x2c);
    if (*(short *)(iVar7 + 0x2c) <= *(short *)(iVar7 + 0x32)) {
      sVar5 = *(short *)(iVar7 + 0x32);
    }
    *(short *)((int)puVar9 + 6) = sVar5;
    break;
  case 0x6f:
    uVar6 = puVar9[1];
    *(undefined4 *)(iVar7 + 0x42) = *puVar9;
    *(undefined4 *)(iVar7 + 0x46) = uVar6;
    break;
  case 0x70:
    puVar10 = local_3c;
    for (iVar8 = 0xe; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    *(undefined2 *)puVar10 = *(undefined2 *)puVar9;
    cVar2 = FUN_110062b0((uint *)(iVar7 + 0xc),'\0');
    if (cVar2 != '\0') {
      FUN_110247c0(param_1,iVar7,(int)local_3c);
    }
    break;
  default:
    goto switchD_110235a5_caseD_2;
  case 0x72:
    FUN_110246f0();
    break;
  case 0x76:
    bVar3 = FUN_110024c0(iVar7 + 0x38);
    *(bool *)puVar9 = !bVar3;
    break;
  case 0x79:
    FUN_110242f0(param_1,iVar7,(int)puVar9);
    break;
  case 0x7b:
    FUN_110240a0(param_1,iVar7,(int)puVar9);
    goto switchD_110235a5_caseD_2;
  }
switchD_110235a5_caseD_10:
  local_3c[0]._0_1_ = 0;
switchD_110235a5_caseD_2:
  return (undefined1)local_3c[0];
}


