
/* ==== FUN_0043a610 @ 0043a610 ==== 
 * signature: undefined4 __cdecl FUN_0043a610(int param_1, int param_2)
 * body: 0043a610-0043a7dd
 */

undefined4 __cdecl FUN_0043a610(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined2 extraout_var;
  uint *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint local_420 [256];
  uint local_20;
  int local_1c;
  byte *local_18;
  uint local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_c = *(int *)(param_2 + 0x10);
  if ((local_c != 0x10) && (local_c != 0x20)) {
    return 0xffffffff;
  }
  local_20 = *(uint *)(param_2 + 0xc);
  local_1c = *(int *)(param_1 + 0xc);
  local_8 = *(uint *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 0x26);
  local_18 = (byte *)FUN_0043a270(CONCAT22((short)((uint)local_1c >> 0x10),
                                           *(undefined2 *)(param_1 + 0x20)),
                                  *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c));
  puVar2 = (uint *)FUN_0043a270(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 0x20)),
                                *(undefined4 *)(param_2 + 0x1c));
  if (local_c == 0x10) {
    pbVar4 = (byte *)(iVar1 + 2);
    puVar3 = local_420;
    do {
      puVar6 = puVar3 + 1;
      *puVar3 = ((uint)(pbVar4[-1] & 0xf8) | (uint)(*pbVar4 & 0xf8) << 5) << 2 |
                (uint)(pbVar4[-2] >> 3);
      pbVar4 = pbVar4 + 4;
      puVar3 = puVar6;
    } while (puVar6 < &local_20);
  }
  else if (local_c == 0x20) {
    puVar7 = (undefined1 *)(iVar1 + 2);
    puVar3 = local_420;
    do {
      puVar6 = puVar3 + 1;
      *puVar3 = (uint)CONCAT12(*puVar7,*(undefined2 *)(puVar7 + -2));
      puVar7 = puVar7 + 4;
      puVar3 = puVar6;
    } while (puVar6 < &local_20);
  }
  local_10 = *(int *)(param_1 + 8);
  if (0 < *(int *)(param_1 + 8)) {
    do {
      pbVar4 = local_18;
      puVar3 = (uint *)((int)puVar2 + local_20);
      local_18 = local_18 + local_1c;
      if (local_c == 0x10) {
        local_14 = local_8;
        if (1 < (int)local_8) {
          uVar8 = local_8 >> 1;
          local_14 = local_8 + uVar8 * -2;
          pbVar5 = pbVar4;
          puVar6 = puVar2;
          do {
            puVar2 = puVar6 + 1;
            pbVar4 = pbVar5 + 2;
            uVar8 = uVar8 - 1;
            *puVar6 = local_420[pbVar5[1]] << 0x10 | local_420[*pbVar5];
            pbVar5 = pbVar4;
            puVar6 = puVar2;
          } while (uVar8 != 0);
        }
        if (local_14 != 0) {
          *(short *)puVar2 = (short)local_420[*pbVar4];
        }
      }
      else {
        uVar8 = local_8;
        if (1 < (int)local_8) {
          uVar9 = local_8 >> 1;
          uVar8 = local_8 + uVar9 * -2;
          pbVar5 = pbVar4;
          puVar6 = puVar2;
          do {
            pbVar4 = pbVar5 + 2;
            puVar2 = puVar6 + 2;
            *puVar6 = local_420[*pbVar5];
            uVar9 = uVar9 - 1;
            puVar6[1] = local_420[pbVar5[1]];
            pbVar5 = pbVar4;
            puVar6 = puVar2;
          } while (uVar9 != 0);
        }
        if (uVar8 != 0) {
          *puVar2 = local_420[*pbVar4];
        }
      }
      local_10 = local_10 + -1;
      puVar2 = puVar3;
    } while (local_10 != 0);
  }
  return 1;
}


