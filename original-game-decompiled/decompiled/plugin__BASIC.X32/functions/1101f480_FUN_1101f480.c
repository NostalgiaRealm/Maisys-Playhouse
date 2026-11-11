
/* ==== FUN_1101f480 @ 1101f480 ==== 
 * signature: undefined4 __cdecl FUN_1101f480(int param_1, int param_2)
 * body: 1101f480-1101f844
 */

undefined4 __cdecl FUN_1101f480(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  byte *pbVar13;
  uint uVar14;
  uint local_64;
  byte *local_60;
  uint local_5c;
  uint local_50;
  byte *local_4c;
  uint local_40 [16];
  
  iVar4 = *(int *)(param_2 + 0x10);
  if (((iVar4 != 0x10) && (iVar4 != 0x20)) && (iVar4 != 8)) {
    return 0xffffffff;
  }
  if (iVar4 == 8) {
    local_60 = *(byte **)(param_1 + 0x26);
    puVar8 = local_40;
    pbVar13 = *(byte **)(param_2 + 0x26);
    do {
      bVar1 = local_60[2];
      local_50 = 0xffffffff;
      bVar2 = local_60[1];
      bVar3 = *local_60;
      uVar9 = 0;
      pbVar7 = pbVar13;
      do {
        uVar10 = ((uint)bVar1 - (uint)pbVar7[2]) * ((uint)bVar1 - (uint)pbVar7[2]) +
                 ((uint)bVar3 - (uint)*pbVar7) * ((uint)bVar3 - (uint)*pbVar7) +
                 ((uint)bVar2 - (uint)pbVar7[1]) * ((uint)bVar2 - (uint)pbVar7[1]);
        if ((uVar10 < local_50) && (*puVar8 = uVar9, local_50 = uVar10, uVar10 == 0)) break;
        uVar9 = uVar9 + 1;
        pbVar7 = pbVar7 + 4;
      } while ((int)uVar9 < 0x100);
      puVar8 = puVar8 + 1;
      local_60 = local_60 + 4;
    } while (puVar8 < &stack0x00000000);
  }
  else {
    pbVar13 = *(byte **)(param_1 + 0x26);
    puVar8 = local_40;
    do {
      bVar1 = *pbVar13;
      if (iVar4 == 0x10) {
        bVar1 = bVar1 >> 3;
        uVar9 = ((pbVar13[2] & 0xf8) << 5 | pbVar13[1] & 0xf8) << 2;
      }
      else {
        uVar9 = (uint)pbVar13[2] << 0x10 | (uint)pbVar13[1] << 8;
      }
      puVar11 = puVar8 + 1;
      pbVar13 = pbVar13 + 4;
      *puVar8 = uVar9 | bVar1;
      puVar8 = puVar11;
    } while (puVar11 < &stack0x00000000);
  }
  iVar5 = *(int *)(param_2 + 0xc);
  uVar9 = *(uint *)(param_1 + 0x14) & 1;
  uVar10 = *(int *)(param_1 + 4) + uVar9;
  iVar6 = *(int *)(param_1 + 0xc);
  local_4c = (byte *)FUN_1101f460(CONCAT22((short)(uVar10 >> 0x10),*(undefined2 *)(param_1 + 0x20)),
                                  *(int *)(param_1 + 0x1c) + ((int)*(uint *)(param_1 + 0x14) >> 1));
  puVar8 = (uint *)FUN_1101f460(CONCAT22((short)((uint)local_4c >> 0x10),
                                         *(undefined2 *)(param_2 + 0x20)),
                                *(undefined4 *)(param_2 + 0x1c));
  local_50 = *(int *)(param_1 + 8);
  if (0 < (int)local_50) {
    do {
      pbVar13 = local_4c + iVar6;
      local_64 = uVar9;
      if (iVar4 == 8) {
        puVar11 = puVar8;
        if (uVar9 != 0) {
          bVar1 = *local_4c;
          local_4c = local_4c + 1;
          puVar11 = (uint *)((int)puVar8 + 1);
          *(char *)puVar8 = (char)local_40[bVar1 & 0xf];
          local_64 = uVar9 + 1;
        }
        if ((int)local_64 < (int)(uVar10 - 1)) {
          uVar14 = uVar10 - local_64 >> 1;
          local_64 = local_64 + uVar14 * 2;
          puVar12 = puVar11;
          do {
            bVar1 = *local_4c;
            local_4c = local_4c + 1;
            puVar11 = (uint *)((int)puVar12 + 2);
            local_5c = bVar1 & 0xffffff0f;
            uVar14 = uVar14 - 1;
            *(ushort *)puVar12 =
                 (short)local_40[local_5c] << 8 |
                 *(ushort *)((int)local_40 + (uint)((bVar1 & 0xf3) >> 2));
            puVar12 = puVar11;
          } while (uVar14 != 0);
        }
        if (uVar10 != local_64) {
          *(undefined1 *)puVar11 = *(undefined1 *)((int)local_40 + (uint)((*local_4c & 0xf3) >> 2));
        }
      }
      else if (iVar4 == 0x10) {
        puVar11 = puVar8;
        if (uVar9 != 0) {
          bVar1 = *local_4c;
          local_4c = local_4c + 1;
          puVar11 = (uint *)((int)puVar8 + 2);
          *(short *)puVar8 = (short)local_40[bVar1 & 0xf];
          local_64 = uVar9 + 1;
        }
        if ((int)local_64 < (int)(uVar10 - 1)) {
          uVar14 = uVar10 - local_64 >> 1;
          local_64 = local_64 + uVar14 * 2;
          puVar12 = puVar11;
          do {
            bVar1 = *local_4c;
            local_4c = local_4c + 1;
            puVar11 = puVar12 + 1;
            local_5c = bVar1 & 0xffffff0f;
            uVar14 = uVar14 - 1;
            *puVar12 = local_40[local_5c] << 0x10 |
                       *(uint *)((int)local_40 + (uint)((bVar1 & 0xf3) >> 2));
            puVar12 = puVar11;
          } while (uVar14 != 0);
        }
        if (uVar10 != local_64) {
          *(short *)puVar11 =
               (short)*(undefined4 *)((int)local_40 + (uint)((*local_4c & 0xf3) >> 2));
        }
      }
      else {
        puVar11 = puVar8;
        if (uVar9 != 0) {
          bVar1 = *local_4c;
          local_4c = local_4c + 1;
          puVar11 = puVar8 + 1;
          *puVar8 = local_40[bVar1 & 0xf];
          local_64 = uVar9 + 1;
        }
        if ((int)local_64 < (int)(uVar10 - 1)) {
          uVar14 = uVar10 - local_64 >> 1;
          local_64 = local_64 + uVar14 * 2;
          puVar12 = puVar11;
          do {
            bVar1 = *local_4c;
            local_4c = local_4c + 1;
            puVar11 = puVar12 + 2;
            local_5c = (uint)((bVar1 & 0xf3) >> 2);
            uVar14 = uVar14 - 1;
            *puVar12 = *(uint *)((int)local_40 + local_5c);
            puVar12[1] = local_40[bVar1 & 0xf];
            puVar12 = puVar11;
          } while (uVar14 != 0);
        }
        if (uVar10 != local_64) {
          *puVar11 = *(uint *)((int)local_40 + (uint)((*local_4c & 0xf3) >> 2));
        }
      }
      local_50 = local_50 + -1;
      puVar8 = (uint *)((int)puVar8 + iVar5);
      local_4c = pbVar13;
    } while (local_50 != 0);
  }
  return 1;
}


