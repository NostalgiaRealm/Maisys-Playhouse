
/* ==== FUN_1101fb80 @ 1101fb80 ==== 
 * signature: undefined4 __cdecl FUN_1101fb80(int param_1, int param_2, int param_3)
 * body: 1101fb80-1101fd3f
 */

undefined4 __cdecl FUN_1101fb80(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined2 extraout_var;
  uint *puVar9;
  uint uVar10;
  uint *local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int local_4;
  
  iVar2 = *(int *)(param_2 + 0x10);
  if ((iVar2 != 8) && (iVar2 != 0x10)) {
    return 0xffffffff;
  }
  iVar3 = *(int *)(param_2 + 0xc);
  iVar4 = *(int *)(param_1 + 0xc);
  uVar5 = *(uint *)(param_1 + 4);
  local_1c = (uint *)FUN_1101f460(CONCAT22((short)((uint)iVar4 >> 0x10),
                                           *(undefined2 *)(param_1 + 0x20)),
                                  *(int *)(param_1 + 0x14) * 4 + *(int *)(param_1 + 0x1c));
  puVar7 = (uint *)FUN_1101f460(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 0x20)),
                                *(undefined4 *)(param_2 + 0x1c));
  if ((iVar2 == 8) && (local_4 = *(int *)(param_3 + 0x14), local_4 == 0)) {
    return 0xffffffff;
  }
  local_10 = *(int *)(param_1 + 8);
  if (0 < local_10) {
    do {
      puVar8 = (uint *)((int)puVar7 + iVar3);
      puVar1 = (uint *)((int)local_1c + iVar4);
      if (iVar2 == 8) {
        uVar10 = uVar5;
        if (0 < (int)uVar5) {
          do {
            uVar6 = *local_1c;
            local_1c = local_1c + 1;
            uVar10 = uVar10 - 1;
            *(undefined1 *)puVar7 =
                 *(undefined1 *)
                  (((((uVar6 & 0xf00000) >> 4 | uVar6 & 0xf000) >> 4 | uVar6 & 0xf0) >> 4) + local_4
                  );
            puVar7 = (uint *)((int)puVar7 + 1);
          } while (uVar10 != 0);
        }
      }
      else {
        local_14 = uVar5;
        if (1 < (int)uVar5) {
          local_18 = uVar5 >> 1;
          local_14 = uVar5 + local_18 * -2;
          puVar9 = puVar7;
          do {
            uVar10 = *local_1c;
            uVar6 = local_1c[1];
            local_1c = local_1c + 2;
            puVar7 = puVar9 + 1;
            local_18 = local_18 - 1;
            *puVar9 = (((uVar10 & 0xf80000) >> 3 | uVar10 & 0xf800) >> 3 | uVar10 & 0xf8) >> 3 |
                      (((uVar6 & 0xf8) << 3 | uVar6 & 0xf800) << 3 | uVar6 & 0xf80000) << 7;
            puVar9 = puVar7;
          } while (local_18 != 0);
        }
        if (0 < (int)local_14) {
          uVar10 = *local_1c;
          *(ushort *)puVar7 =
               (ushort)(uVar10 >> 6) & 0x3e0 | (ushort)(uVar10 >> 3) & 0x1f |
               (ushort)(uVar10 >> 9) & 0x7c00;
        }
      }
      local_10 = local_10 + -1;
      puVar7 = puVar8;
      local_1c = puVar1;
    } while (local_10 != 0);
  }
  return 1;
}


