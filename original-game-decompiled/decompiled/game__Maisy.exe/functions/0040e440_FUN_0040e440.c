
/* ==== FUN_0040e440 @ 0040e440 ==== 
 * signature: undefined4 __cdecl FUN_0040e440(int param_1, int param_2, int param_3)
 * body: 0040e440-0040e73b
 */

undefined4 __cdecl FUN_0040e440(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  short *psVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  code *pcVar7;
  code *pcVar8;
  int iVar9;
  code *pcVar10;
  int local_1c;
  code *local_18;
  undefined4 local_14;
  
  local_14 = 1;
  bVar3 = false;
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + *(int *)(param_2 + 0x14) * 4;
  puVar6 = (undefined4 *)(*(int *)(param_1 + 0x14) * 4 + *(int *)(param_1 + 0x1c));
  *(undefined4 **)(param_1 + 0x1c) = puVar6;
  if ((*(short **)(param_3 + 0x18) == (short *)0x0) || (**(short **)(param_3 + 0x18) != 2)) {
    iVar9 = *(int *)(param_3 + 0xc);
    if (iVar9 < 0x21) {
      if (iVar9 == 0x20) {
        if ((*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) &&
           (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) {
          FUN_00452290(CONCAT22((short)((uint)*(int *)(param_2 + 0xc) >> 0x10),
                                *(undefined2 *)(param_2 + 0x20)),*(undefined4 *)(param_2 + 0x1c),
                       *(undefined2 *)(param_1 + 0x20),puVar6,*(int *)(param_2 + 4),
                       *(int *)(param_2 + 8),*(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc),
                       (ushort)*(byte *)(param_3 + 0x1e));
        }
        else {
          bVar3 = true;
        }
      }
      else {
        if (iVar9 != 0) goto LAB_0040e4b2;
        if (*(int *)(param_3 + 4) == 0) {
          if ((*(int *)(param_1 + 4) != *(int *)(param_2 + 4)) ||
             (*(int *)(param_1 + 8) != *(int *)(param_2 + 8))) goto LAB_0040e560;
          FUN_00423940(0,*(undefined4 **)(param_2 + 0x1c),0,puVar6,*(int *)(param_2 + 4) << 2,
                       *(int *)(param_2 + 8),*(int *)(param_2 + 0xc),*(int *)(param_1 + 0xc));
        }
        else {
          bVar3 = true;
        }
      }
    }
    else if ((iVar9 == 0x24) || (iVar9 == 0x224)) {
LAB_0040e560:
      psVar4 = FUN_0043aae0(*(uint *)(param_2 + 4),*(uint *)(param_1 + 4),
                            (uint)((int)*(uint *)(param_2 + 4) <= (int)*(uint *)(param_1 + 4)));
      if (psVar4 == (short *)0x0) {
        local_14 = 0xffffffff;
      }
      else {
        if (*(int *)(param_2 + 4) == *(int *)(param_1 + 4)) {
          local_18 = FUN_0040e740;
        }
        else {
          local_18 = FUN_0040e860;
          if (*(int *)(param_1 + 4) <= *(int *)(param_2 + 4)) {
            local_18 = FUN_0040e7c0;
          }
        }
        iVar1 = *(int *)(param_2 + 8);
        iVar9 = *(int *)(param_1 + 8);
        if (iVar1 < iVar9) {
          local_1c = iVar9 >> 1;
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            local_1c = local_1c - *(int *)(param_2 + 8);
            if (local_1c < 0) {
              (*local_18)(param_1,param_2,param_3,psVar4);
              *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + *(int *)(param_2 + 0xc);
              local_1c = local_1c + *(int *)(param_1 + 8);
            }
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0xc);
          }
        }
        else {
          iVar9 = iVar1 + -1 >> 1;
          for (; iVar1 != 0; iVar1 = iVar1 + -1) {
            (*local_18)(param_1,param_2,param_3,psVar4);
            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + *(int *)(param_2 + 0xc);
            iVar9 = (iVar9 - *(int *)(param_1 + 8)) + 1;
            if (iVar9 < 0) {
              iVar2 = *(int *)(param_2 + 8);
              *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0xc);
              iVar9 = iVar9 + iVar2 + -1;
            }
          }
        }
        if (psVar4 != (short *)0x0) {
          FUN_0048e750(psVar4);
        }
      }
    }
    else {
LAB_0040e4b2:
      bVar3 = true;
    }
  }
  else {
    bVar3 = true;
  }
  pcVar8 = (code *)0x0;
  if (!bVar3) {
    return local_14;
  }
  pcVar7 = (code *)0x0;
  if (*(int *)(param_1 + 4) < *(int *)(param_2 + 4)) {
    pcVar7 = FUN_0040e900;
  }
  else if (*(int *)(param_2 + 4) < *(int *)(param_1 + 4)) {
    pcVar7 = FUN_0040e940;
  }
  iVar9 = *(int *)(param_3 + 0xc);
  if (iVar9 < 4) {
    if (iVar9 != 3) {
      if (iVar9 == 0) {
        pcVar10 = FUN_0040eb30;
        if (*(int *)(param_3 + 4) == 0) {
          pcVar10 = FUN_0040e9b0;
        }
      }
      else {
        pcVar10 = FUN_0040e9b0;
      }
      goto LAB_0040e6fc;
    }
  }
  else {
    if (7 < iVar9) {
      if (iVar9 < 0x25) {
        if (iVar9 != 0x24) {
          if (iVar9 == 0x20) {
            pcVar10 = FUN_0040eaa0;
          }
          else {
            pcVar10 = FUN_0040e9b0;
          }
          goto LAB_0040e6fc;
        }
      }
      else {
        if (iVar9 == 0x25) {
          pcVar10 = FUN_0040e9d0;
          goto LAB_0040e6fc;
        }
        if (iVar9 == 0x27) {
          pcVar10 = FUN_0040ea20;
          goto LAB_0040e6fc;
        }
        if (iVar9 != 0x224) goto LAB_0040e6bf;
      }
      pcVar10 = FUN_0040ebd0;
      goto LAB_0040e6fc;
    }
    if (iVar9 != 7) {
      if (iVar9 == 4) {
        pcVar10 = FUN_0040ea70;
      }
      else {
        pcVar10 = FUN_0040e9b0;
      }
      goto LAB_0040e6fc;
    }
  }
LAB_0040e6bf:
  pcVar10 = FUN_0040e9b0;
LAB_0040e6fc:
  if (((*(short **)(param_3 + 0x18) != (short *)0x0) && (**(short **)(param_3 + 0x18) == 2)) &&
     (pcVar8 = FUN_0040ec30, *(int *)(param_2 + 4) == *(int *)(param_1 + 4))) {
    pcVar7 = FUN_0040e990;
  }
  uVar5 = FUN_0043acf0(param_1,param_2,param_3,pcVar7,pcVar10,pcVar8);
  return uVar5;
}


