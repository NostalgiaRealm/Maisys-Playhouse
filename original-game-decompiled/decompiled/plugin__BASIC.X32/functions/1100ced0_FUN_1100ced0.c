
/* ==== FUN_1100ced0 @ 1100ced0 ==== 
 * signature: undefined4 __cdecl FUN_1100ced0(int param_1, int param_2, int param_3)
 * body: 1100ced0-1100d1ce
 */

undefined4 __cdecl FUN_1100ced0(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  short *psVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  code *pcVar10;
  code *local_10;
  undefined4 local_4;
  
  local_4 = 1;
  bVar2 = false;
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + *(int *)(param_2 + 0x14) * 4;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0x14) * 4 + *(int *)(param_1 + 0x1c));
  *(undefined4 **)(param_1 + 0x1c) = puVar5;
  if ((*(short **)(param_3 + 0x18) == (short *)0x0) || (**(short **)(param_3 + 0x18) != 2)) {
    iVar7 = *(int *)(param_3 + 0xc);
    if (iVar7 < 0x21) {
      if (iVar7 == 0x20) {
        if ((*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) &&
           (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) {
          FUN_1100e420(CONCAT22((short)((uint)*(int *)(param_2 + 0xc) >> 0x10),
                                *(undefined2 *)(param_2 + 0x20)),*(undefined4 *)(param_2 + 0x1c),
                       *(undefined2 *)(param_1 + 0x20),puVar5,*(int *)(param_2 + 4),
                       *(int *)(param_2 + 8),*(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc),
                       (ushort)*(byte *)(param_3 + 0x1e));
        }
        else {
          bVar2 = true;
        }
      }
      else {
        if (iVar7 != 0) goto LAB_1100cf47;
        if (*(int *)(param_3 + 4) == 0) {
          if ((*(int *)(param_1 + 4) != *(int *)(param_2 + 4)) ||
             (*(int *)(param_1 + 8) != *(int *)(param_2 + 8))) goto LAB_1100cffb;
          FUN_11005ee4(0,*(undefined4 **)(param_2 + 0x1c),0,puVar5,*(int *)(param_2 + 4) << 2,
                       *(int *)(param_2 + 8),*(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc));
        }
        else {
          bVar2 = true;
        }
      }
    }
    else if ((iVar7 == 0x24) || (iVar7 == 0x224)) {
LAB_1100cffb:
      psVar3 = FUN_1101fd40(*(uint *)(param_2 + 4),*(uint *)(param_1 + 4),
                            (uint)((int)*(uint *)(param_2 + 4) <= (int)*(uint *)(param_1 + 4)));
      if (psVar3 == (short *)0x0) {
        local_4 = 0xffffffff;
      }
      else {
        if (*(int *)(param_2 + 4) == *(int *)(param_1 + 4)) {
          local_10 = FUN_1100d1d0;
        }
        else {
          local_10 = FUN_1100d300;
          if (*(int *)(param_1 + 4) <= *(int *)(param_2 + 4)) {
            local_10 = FUN_1100d250;
          }
        }
        iVar7 = *(int *)(param_2 + 8);
        iVar9 = *(int *)(param_1 + 8);
        if (iVar7 < iVar9) {
          iVar7 = iVar9 >> 1;
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            iVar7 = iVar7 - *(int *)(param_2 + 8);
            if (iVar7 < 0) {
              (*local_10)(param_1,param_2,param_3,psVar3);
              *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + *(int *)(param_2 + 0xc);
              iVar7 = iVar7 + *(int *)(param_1 + 8);
            }
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0xc);
          }
        }
        else {
          iVar9 = iVar7 + -1 >> 1;
          for (; iVar7 != 0; iVar7 = iVar7 + -1) {
            (*local_10)(param_1,param_2,param_3,psVar3);
            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + *(int *)(param_2 + 0xc);
            iVar9 = (iVar9 - *(int *)(param_1 + 8)) + 1;
            if (iVar9 < 0) {
              iVar1 = *(int *)(param_2 + 8);
              *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0xc);
              iVar9 = iVar9 + iVar1 + -1;
            }
          }
        }
        if (psVar3 != (short *)0x0) {
          FUN_11029180(psVar3);
        }
      }
    }
    else {
LAB_1100cf47:
      bVar2 = true;
    }
  }
  else {
    bVar2 = true;
  }
  pcVar6 = (code *)0x0;
  if (!bVar2) {
    return local_4;
  }
  pcVar8 = (code *)0x0;
  iVar7 = *(int *)(param_1 + 4);
  if (iVar7 < *(int *)(param_2 + 4)) {
    pcVar8 = FUN_1100d3a0;
  }
  else if (*(int *)(param_2 + 4) < iVar7) {
    pcVar8 = FUN_1100d3e0;
  }
  iVar9 = *(int *)(param_3 + 0xc);
  if (iVar9 < 4) {
    if (iVar9 != 3) {
      if (iVar9 == 0) {
        pcVar10 = FUN_1100d5c0;
        if (*(int *)(param_3 + 4) == 0) {
          pcVar10 = FUN_1100d450;
        }
      }
      else {
        pcVar10 = FUN_1100d450;
      }
      goto LAB_1100d18d;
    }
  }
  else {
    if (7 < iVar9) {
      if (iVar9 < 0x25) {
        if (iVar9 != 0x24) {
          if (iVar9 == 0x20) {
            pcVar10 = FUN_1100d540;
          }
          else {
            pcVar10 = FUN_1100d450;
          }
          goto LAB_1100d18d;
        }
      }
      else {
        if (iVar9 == 0x25) {
          pcVar10 = FUN_1100d470;
          goto LAB_1100d18d;
        }
        if (iVar9 == 0x27) {
          pcVar10 = FUN_1100d4c0;
          goto LAB_1100d18d;
        }
        if (iVar9 != 0x224) goto LAB_1100d14f;
      }
      pcVar10 = FUN_1100d660;
      goto LAB_1100d18d;
    }
    if (iVar9 != 7) {
      if (iVar9 == 4) {
        pcVar10 = FUN_1100d510;
      }
      else {
        pcVar10 = FUN_1100d450;
      }
      goto LAB_1100d18d;
    }
  }
LAB_1100d14f:
  pcVar10 = FUN_1100d450;
LAB_1100d18d:
  if (((*(short **)(param_3 + 0x18) != (short *)0x0) && (**(short **)(param_3 + 0x18) == 2)) &&
     (pcVar6 = FUN_1100d6c0, *(int *)(param_2 + 4) == iVar7)) {
    pcVar8 = FUN_1100d430;
  }
  uVar4 = FUN_1101ff50(param_1,param_2,param_3,pcVar8,pcVar10,pcVar6);
  return uVar4;
}


