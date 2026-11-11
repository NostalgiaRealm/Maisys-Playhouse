
/* ==== FUN_1101f850 @ 1101f850 ==== 
 * signature: undefined4 __cdecl FUN_1101f850(int param_1, int param_2)
 * body: 1101f850-1101fa1e
 */

undefined4 __cdecl FUN_1101f850(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined2 extraout_var;
  uint *puVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  byte *local_410;
  int local_40c;
  uint local_400 [256];
  
  iVar1 = *(int *)(param_2 + 0x10);
  if ((iVar1 != 0x10) && (iVar1 != 0x20)) {
    return 0xffffffff;
  }
  iVar2 = *(int *)(param_2 + 0xc);
  iVar3 = *(int *)(param_1 + 0xc);
  uVar4 = *(uint *)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 0x26);
  local_410 = (byte *)FUN_1101f460(CONCAT22((short)((uint)iVar3 >> 0x10),
                                            *(undefined2 *)(param_1 + 0x20)),
                                   *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c));
  puVar6 = (uint *)FUN_1101f460(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 0x20)),
                                *(undefined4 *)(param_2 + 0x1c));
  if (iVar1 == 0x10) {
    pbVar10 = (byte *)(iVar5 + 2);
    puVar7 = local_400;
    do {
      puVar8 = puVar7 + 1;
      *puVar7 = ((uint)(pbVar10[-1] & 0xf8) | (uint)(*pbVar10 & 0xf8) << 5) << 2 |
                (uint)(pbVar10[-2] >> 3);
      pbVar10 = pbVar10 + 4;
      puVar7 = puVar8;
    } while (puVar8 < &stack0x00000000);
  }
  else if (iVar1 == 0x20) {
    pbVar10 = (byte *)(iVar5 + 1);
    puVar7 = local_400;
    do {
      puVar8 = puVar7 + 1;
      *puVar7 = (uint)pbVar10[1] << 0x10 | (uint)*pbVar10 << 8 | (uint)pbVar10[-1];
      pbVar10 = pbVar10 + 4;
      puVar7 = puVar8;
    } while (puVar8 < &stack0x00000000);
  }
  local_40c = *(int *)(param_1 + 8);
  if (0 < local_40c) {
    do {
      puVar7 = (uint *)((int)puVar6 + iVar2);
      pbVar10 = local_410 + iVar3;
      if (iVar1 == 0x10) {
        uVar12 = uVar4;
        if (1 < (int)uVar4) {
          uVar9 = uVar4 >> 1;
          uVar12 = uVar4 + uVar9 * -2;
          puVar8 = puVar6;
          pbVar11 = local_410;
          do {
            puVar6 = puVar8 + 1;
            local_410 = pbVar11 + 2;
            uVar9 = uVar9 - 1;
            *puVar8 = local_400[pbVar11[1]] << 0x10 | local_400[*pbVar11];
            puVar8 = puVar6;
            pbVar11 = local_410;
          } while (uVar9 != 0);
        }
        if (uVar12 != 0) {
          *(short *)puVar6 = (short)local_400[*local_410];
        }
      }
      else {
        uVar12 = uVar4;
        if (1 < (int)uVar4) {
          uVar9 = uVar4 >> 1;
          uVar12 = uVar4 + uVar9 * -2;
          puVar8 = puVar6;
          pbVar11 = local_410;
          do {
            local_410 = pbVar11 + 2;
            puVar6 = puVar8 + 2;
            uVar9 = uVar9 - 1;
            *puVar8 = local_400[*pbVar11];
            puVar8[1] = local_400[pbVar11[1]];
            puVar8 = puVar6;
            pbVar11 = local_410;
          } while (uVar9 != 0);
        }
        if (uVar12 != 0) {
          *puVar6 = local_400[*local_410];
        }
      }
      local_40c = local_40c + -1;
      puVar6 = puVar7;
      local_410 = pbVar10;
    } while (local_40c != 0);
  }
  return 1;
}


