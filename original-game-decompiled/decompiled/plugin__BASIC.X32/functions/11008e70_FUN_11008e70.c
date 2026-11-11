
/* ==== FUN_11008e70 @ 11008e70 ==== 
 * signature: undefined4 __cdecl FUN_11008e70(int param_1, int param_2, byte * param_3)
 * body: 11008e70-110090cd
 */

undefined4 __cdecl FUN_11008e70(int param_1,int param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  code *pcVar7;
  code *pcVar8;
  ushort *puVar9;
  code *pcVar10;
  
  bVar4 = false;
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + *(int *)(param_2 + 0x14);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x14);
  if ((*(short **)(param_3 + 0x18) == (short *)0x0) || (**(short **)(param_3 + 0x18) != 2)) {
    puVar9 = (ushort *)0x0;
    iVar3 = *(int *)(param_3 + 0xc);
    if ((iVar3 != 0) || (*(int *)(param_2 + 4) != *(int *)(param_1 + 4))) {
      uVar1 = *(uint *)(param_2 + 4);
      uVar2 = *(uint *)(param_1 + 4);
      uVar5 = (uint)((int)uVar2 <= (int)uVar1);
      if ((((iVar3 == 0x24) || (iVar3 == 0x224)) && (uVar1 == uVar2)) &&
         (*(int *)(param_1 + 8) < *(int *)(param_2 + 8))) {
        uVar5 = 0;
      }
      puVar9 = (ushort *)FUN_1101fd40(uVar1,uVar2,uVar5);
      if (puVar9 == (ushort *)0x0) {
        return 0xffffffff;
      }
    }
    iVar3 = *(int *)(param_3 + 0xc);
    if (iVar3 < 0x21) {
      if (iVar3 == 0x20) {
        if ((*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) &&
           (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) {
          FUN_1100e180(CONCAT22((short)((uint)*(undefined4 *)(param_1 + 0x1c) >> 0x10),
                                *(undefined2 *)(param_2 + 0x20)),*(undefined4 *)(param_2 + 0x1c),
                       *(undefined2 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1c),
                       *(int *)(param_2 + 4),*(int *)(param_2 + 8),*(int *)(param_2 + 0xc),
                       *(int *)(param_1 + 0xc),(ushort)param_3[0x1e],*(int *)(param_2 + 0x26),
                       *(int *)(param_3 + 0x14));
        }
        else {
          bVar4 = true;
        }
      }
      else {
        if (iVar3 != 0) goto LAB_11008f38;
        if (((param_3[0x22] == 0) && (param_3[0x21] == 0)) && (param_3[0x20] == 0)) {
          FUN_110090f0(param_1,param_2,param_3,puVar9);
        }
        else {
          bVar4 = true;
        }
      }
    }
    else if ((iVar3 == 0x24) || (iVar3 == 0x224)) {
      FUN_11009260(param_1,param_2,param_3,puVar9);
    }
    else {
LAB_11008f38:
      bVar4 = true;
    }
    if (puVar9 != (ushort *)0x0) {
      FUN_11029180(puVar9);
    }
  }
  else {
    bVar4 = true;
  }
  pcVar8 = (code *)0x0;
  if (!bVar4) {
    return 1;
  }
  pcVar7 = (code *)0x0;
  iVar3 = *(int *)(param_3 + 0xc);
  if (iVar3 < 0x21) {
    if (iVar3 == 0x20) {
      pcVar10 = FUN_11009980;
      goto LAB_11009073;
    }
    switch(iVar3) {
    case 0:
      if (((param_3[0x22] == 0) && (param_3[0x21] == 0)) && (param_3[0x20] == 0)) {
        pcVar10 = FUN_11009720;
      }
      else {
        pcVar10 = FUN_11009a50;
      }
      break;
    case 1:
      pcVar10 = FUN_11009960;
      break;
    default:
      goto switchD_11008ff0_caseD_2;
    case 3:
      pcVar10 = FUN_11009720;
      break;
    case 4:
      pcVar10 = FUN_110098e0;
      break;
    case 5:
      pcVar10 = FUN_11009720;
      break;
    case 7:
      pcVar10 = FUN_11009720;
    }
  }
  else {
    if (iVar3 < 0x225) {
      if ((iVar3 == 0x224) || (iVar3 == 0x24)) {
        pcVar10 = FUN_11009740;
        goto LAB_11009073;
      }
      if (iVar3 == 0x25) {
        pcVar10 = FUN_110097a0;
        goto LAB_11009073;
      }
      if (iVar3 == 0x27) {
        pcVar10 = FUN_11009840;
        goto LAB_11009073;
      }
    }
switchD_11008ff0_caseD_2:
    pcVar10 = FUN_11009720;
  }
LAB_11009073:
  if (*(int *)(param_1 + 4) < *(int *)(param_2 + 4)) {
    pcVar7 = FUN_11009660;
  }
  else if (*(int *)(param_2 + 4) < *(int *)(param_1 + 4)) {
    pcVar7 = FUN_110096c0;
  }
  if (((*(int *)(param_3 + 0x18) != 0) && (**(short **)(param_3 + 0x18) == 2)) &&
     (pcVar8 = FUN_11009b20, *(int *)(param_2 + 4) == *(int *)(param_1 + 4))) {
    pcVar7 = FUN_11009700;
  }
  uVar6 = FUN_1101ff50(param_1,param_2,(int)param_3,pcVar7,pcVar10,pcVar8);
  return uVar6;
}


