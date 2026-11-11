
/* ==== FUN_11025f50 @ 11025f50 ==== 
 * signature: undefined4 __cdecl FUN_11025f50(int param_1, int param_2, int param_3)
 * body: 11025f50-1102625c
 */

undefined4 __cdecl FUN_11025f50(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  short *psVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  code *local_8;
  undefined4 local_4;
  
  bVar2 = false;
  local_4 = 1;
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + *(int *)(param_2 + 0x14) * 2;
  puVar6 = (undefined4 *)(*(int *)(param_1 + 0x14) * 2 + *(int *)(param_1 + 0x1c));
  *(undefined4 **)(param_1 + 0x1c) = puVar6;
  if ((*(short **)(param_3 + 0x18) == (short *)0x0) || (**(short **)(param_3 + 0x18) != 2)) {
    iVar8 = *(int *)(param_3 + 0xc);
    if (iVar8 < 0x21) {
      if (iVar8 == 0x20) {
        if ((*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) &&
           (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) {
          FUN_1100e300(CONCAT22((short)((uint)*(int *)(param_2 + 0xc) >> 0x10),
                                *(undefined2 *)(param_2 + 0x20)),*(undefined4 *)(param_2 + 0x1c),
                       *(undefined2 *)(param_1 + 0x20),puVar6,*(int *)(param_2 + 4),
                       *(int *)(param_2 + 8),*(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc),
                       (ushort)*(byte *)(param_3 + 0x1e));
        }
        else {
          bVar2 = true;
        }
      }
      else {
        if (iVar8 != 0) goto LAB_11025fc5;
        if (*(int *)(param_3 + 4) == 0) {
          if ((*(int *)(param_1 + 4) != *(int *)(param_2 + 4)) ||
             (*(int *)(param_1 + 8) != *(int *)(param_2 + 8))) goto LAB_11026078;
          FUN_11005ee4(0,*(undefined4 **)(param_2 + 0x1c),0,puVar6,*(int *)(param_2 + 4) * 2,
                       *(int *)(param_2 + 8),*(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc));
        }
        else {
          bVar2 = true;
        }
      }
    }
    else if ((iVar8 == 0x24) || (iVar8 == 0x224)) {
LAB_11026078:
      psVar3 = FUN_1101fd40(*(uint *)(param_2 + 4),*(uint *)(param_1 + 4),
                            (uint)((int)*(uint *)(param_2 + 4) <= (int)*(uint *)(param_1 + 4)));
      if (psVar3 == (short *)0x0) {
        local_4 = 0xffffffff;
      }
      else {
        if (*(int *)(param_2 + 4) == *(int *)(param_1 + 4)) {
          local_8 = FUN_11026280;
        }
        else {
          local_8 = FUN_110263e0;
          if (*(int *)(param_1 + 4) <= *(int *)(param_2 + 4)) {
            local_8 = FUN_11026330;
          }
        }
        iVar9 = *(int *)(param_2 + 8);
        iVar8 = *(int *)(param_1 + 8);
        if (iVar9 < iVar8) {
          iVar9 = iVar8 >> 1;
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            iVar9 = iVar9 - *(int *)(param_2 + 8);
            if (iVar9 < 0) {
              (*local_8)(param_1,param_2,param_3,psVar3);
              *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + *(int *)(param_2 + 0xc);
              iVar9 = iVar9 + *(int *)(param_1 + 8);
            }
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0xc);
          }
        }
        else {
          iVar8 = iVar9 + -1 >> 1;
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            (*local_8)(param_1,param_2,param_3,psVar3);
            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + *(int *)(param_2 + 0xc);
            iVar8 = (iVar8 - *(int *)(param_1 + 8)) + 1;
            if (iVar8 < 0) {
              iVar1 = *(int *)(param_2 + 8);
              *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0xc);
              iVar8 = iVar8 + iVar1 + -1;
            }
          }
        }
        if (psVar3 != (short *)0x0) {
          FUN_11029180(psVar3);
        }
      }
    }
    else {
LAB_11025fc5:
      bVar2 = true;
    }
  }
  else {
    bVar2 = true;
  }
  pcVar10 = (code *)0x0;
  if (!bVar2) {
    return local_4;
  }
  pcVar4 = (code *)0x0;
  iVar8 = *(int *)(param_2 + 4);
  if (*(int *)(param_1 + 4) < iVar8) {
    pcVar4 = FUN_11026480;
  }
  else if (iVar8 < *(int *)(param_1 + 4)) {
    pcVar4 = FUN_110264d0;
  }
  iVar9 = *(int *)(param_3 + 0xc);
  if (iVar9 < 0x21) {
    if (iVar9 == 0x20) {
      pcVar7 = FUN_11026700;
      goto LAB_11026219;
    }
    switch(iVar9) {
    case 0:
      pcVar7 = FUN_110267b0;
      if (*(int *)(param_3 + 4) == 0) {
        pcVar7 = FUN_11026550;
      }
      break;
    case 1:
      pcVar7 = FUN_110266d0;
      break;
    default:
      goto switchD_1102619f_caseD_2;
    case 3:
      pcVar7 = FUN_11026550;
      break;
    case 4:
      pcVar7 = FUN_11026680;
      break;
    case 5:
      pcVar7 = FUN_11026550;
      break;
    case 7:
      pcVar7 = FUN_11026550;
    }
  }
  else {
    if (iVar9 < 0x225) {
      if ((iVar9 == 0x224) || (iVar9 == 0x24)) {
        pcVar7 = FUN_11026880;
        goto LAB_11026219;
      }
      if (iVar9 == 0x25) {
        pcVar7 = FUN_11026580;
        goto LAB_11026219;
      }
      if (iVar9 == 0x27) {
        pcVar7 = FUN_11026600;
        goto LAB_11026219;
      }
    }
switchD_1102619f_caseD_2:
    pcVar7 = FUN_11026550;
  }
LAB_11026219:
  if (((*(int *)(param_3 + 0x18) != 0) && (**(short **)(param_3 + 0x18) == 2)) &&
     (pcVar10 = FUN_110268f0, iVar8 == *(int *)(param_1 + 4))) {
    pcVar4 = FUN_11026520;
  }
  uVar5 = FUN_1101ff50(param_1,param_2,param_3,pcVar4,pcVar7,pcVar10);
  return uVar5;
}


