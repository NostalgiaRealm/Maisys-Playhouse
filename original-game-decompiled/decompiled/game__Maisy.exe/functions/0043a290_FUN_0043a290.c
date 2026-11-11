
/* ==== FUN_0043a290 @ 0043a290 ==== 
 * signature: undefined4 __cdecl FUN_0043a290(int param_1, int param_2)
 * body: 0043a290-0043a60d
 */

undefined4 __cdecl FUN_0043a290(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  uint local_6c [16];
  uint local_2c;
  int local_28;
  byte *local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  uint *local_c;
  byte *local_8;
  
  local_18 = *(int *)(param_2 + 0x10);
  if (((local_18 != 0x10) && (local_18 != 0x20)) && (local_18 != 8)) {
    return 0xffffffff;
  }
  if (local_18 == 8) {
    local_8 = *(byte **)(param_1 + 0x26);
    local_c = local_6c;
    local_24 = *(byte **)(param_2 + 0x26);
    do {
      local_1c = (uint)local_8[2];
      local_14 = (uint)local_8[1];
      uVar7 = 0;
      local_10 = 0xffffffff;
      local_20 = (uint)*local_8;
      pbVar6 = local_24;
      do {
        uVar1 = (local_14 - pbVar6[1]) * (local_14 - pbVar6[1]) +
                (local_20 - *pbVar6) * (local_20 - *pbVar6) +
                (local_1c - pbVar6[2]) * (local_1c - pbVar6[2]);
        if ((uVar1 < local_10) && (*local_c = uVar7, local_10 = uVar1, uVar1 == 0)) break;
        uVar7 = uVar7 + 1;
        pbVar6 = pbVar6 + 4;
      } while ((int)uVar7 < 0x100);
      local_c = local_c + 1;
      local_8 = local_8 + 4;
    } while (local_c < &local_2c);
  }
  else {
    pbVar6 = *(byte **)(param_1 + 0x26);
    puVar3 = local_6c;
    do {
      if (local_18 == 0x10) {
        *puVar3 = ((pbVar6[2] & 0xf8) << 5 | pbVar6[1] & 0xf8) << 2 | (uint)(*pbVar6 >> 3);
      }
      else {
        *puVar3 = (uint)pbVar6[1] << 8 | (uint)pbVar6[2] << 0x10 | (uint)*pbVar6;
      }
      puVar3 = puVar3 + 1;
      pbVar6 = pbVar6 + 4;
    } while (puVar3 < &local_2c);
  }
  local_2c = *(uint *)(param_2 + 0xc);
  local_10 = *(uint *)(param_1 + 0x14) & 1;
  local_c = (uint *)(*(int *)(param_1 + 4) + local_10);
  local_28 = *(int *)(param_1 + 0xc);
  local_24 = (byte *)FUN_0043a270(CONCAT22((short)((uint)local_c >> 0x10),
                                           *(undefined2 *)(param_1 + 0x20)),
                                  *(int *)(param_1 + 0x1c) + ((int)*(uint *)(param_1 + 0x14) >> 1));
  puVar3 = (uint *)FUN_0043a270(CONCAT22((short)((uint)param_2 >> 0x10),
                                         *(undefined2 *)(param_2 + 0x20)),
                                *(undefined4 *)(param_2 + 0x1c));
  local_20 = *(int *)(param_1 + 8);
  if (0 < *(int *)(param_1 + 8)) {
    do {
      pbVar6 = local_24;
      local_24 = local_24 + local_28;
      local_8 = (byte *)local_10;
      if (local_18 == 8) {
        puVar4 = puVar3;
        if ((local_10 & 1) != 0) {
          bVar2 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          puVar4 = (uint *)((int)puVar3 + 1);
          local_8 = (byte *)(local_10 + 1);
          *(char *)puVar3 = (char)local_6c[bVar2 & 0xf];
        }
        if ((int)local_8 < (int)((int)local_c - 1U)) {
          local_14 = (uint)((int)local_c - (int)local_8) >> 1;
          local_8 = (byte *)((int)local_8 + local_14 * 2);
          puVar5 = puVar4;
          do {
            bVar2 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            puVar4 = (uint *)((int)puVar5 + 2);
            local_1c = bVar2 & 0xffffff0f;
            *(ushort *)puVar5 =
                 (short)local_6c[local_1c] << 8 |
                 *(ushort *)((int)local_6c + (uint)((bVar2 & 0xf3) >> 2));
            local_14 = local_14 - 1;
            puVar5 = puVar4;
          } while (local_14 != 0);
        }
        if (local_c != (uint *)local_8) {
          *(undefined1 *)puVar4 = *(undefined1 *)((int)local_6c + (uint)((*pbVar6 & 0xf3) >> 2));
        }
      }
      else if (local_18 == 0x10) {
        puVar4 = puVar3;
        if ((local_10 & 1) != 0) {
          bVar2 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          puVar4 = (uint *)((int)puVar3 + 2);
          local_8 = (byte *)(local_10 + 1);
          *(short *)puVar3 = (short)local_6c[bVar2 & 0xf];
        }
        if ((int)local_8 < (int)((int)local_c - 1U)) {
          local_14 = (uint)((int)local_c - (int)local_8) >> 1;
          local_8 = (byte *)((int)local_8 + local_14 * 2);
          puVar5 = puVar4;
          do {
            bVar2 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            puVar4 = puVar5 + 1;
            local_1c = bVar2 & 0xffffff0f;
            *puVar5 = local_6c[local_1c] << 0x10 |
                      *(uint *)((int)local_6c + (uint)((bVar2 & 0xf3) >> 2));
            local_14 = local_14 - 1;
            puVar5 = puVar4;
          } while (local_14 != 0);
        }
        if (local_c != (uint *)local_8) {
          *(short *)puVar4 = (short)*(undefined4 *)((int)local_6c + (uint)((*pbVar6 & 0xf3) >> 2));
        }
      }
      else {
        puVar4 = puVar3;
        if ((local_10 & 1) != 0) {
          bVar2 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          puVar4 = puVar3 + 1;
          local_8 = (byte *)(local_10 + 1);
          *puVar3 = local_6c[bVar2 & 0xf];
        }
        if ((int)local_8 < (int)((int)local_c - 1U)) {
          uVar7 = (uint)((int)local_c - (int)local_8) >> 1;
          local_8 = (byte *)((int)local_8 + uVar7 * 2);
          puVar5 = puVar4;
          do {
            bVar2 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            puVar4 = puVar5 + 2;
            local_14 = (uint)((bVar2 & 0xf3) >> 2);
            *puVar5 = *(uint *)((int)local_6c + local_14);
            uVar7 = uVar7 - 1;
            puVar5[1] = local_6c[bVar2 & 0xf];
            puVar5 = puVar4;
          } while (uVar7 != 0);
        }
        if (local_c != (uint *)local_8) {
          *puVar4 = *(uint *)((int)local_6c + (uint)((*pbVar6 & 0xf3) >> 2));
        }
      }
      local_20 = local_20 + -1;
      puVar3 = (uint *)((int)puVar3 + local_2c);
    } while (local_20 != 0);
  }
  return 1;
}


