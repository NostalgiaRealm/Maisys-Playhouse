
/* ==== FUN_0043a930 @ 0043a930 ==== 
 * signature: undefined4 __cdecl FUN_0043a930(int param_1, int param_2, int param_3)
 * body: 0043a930-0043aad9
 */

undefined4 __cdecl FUN_0043a930(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined2 extraout_var;
  uint *puVar10;
  int local_24;
  uint *local_20;
  uint local_1c;
  int local_18;
  uint local_10;
  
  iVar2 = *(int *)(param_2 + 0x10);
  if ((iVar2 != 8) && (iVar2 != 0x10)) {
    return 0xffffffff;
  }
  iVar3 = *(int *)(param_2 + 0xc);
  iVar4 = *(int *)(param_1 + 0xc);
  uVar5 = *(uint *)(param_1 + 4);
  local_20 = (uint *)FUN_0043a270(CONCAT22((short)((uint)iVar4 >> 0x10),
                                           *(undefined2 *)(param_1 + 0x20)),
                                  *(int *)(param_1 + 0x14) * 4 + *(int *)(param_1 + 0x1c));
  puVar8 = (uint *)FUN_0043a270(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 0x20)),
                                *(undefined4 *)(param_2 + 0x1c));
  if ((iVar2 == 8) && (local_24 = *(int *)(param_3 + 0x14), local_24 == 0)) {
    return 0xffffffff;
  }
  local_18 = *(int *)(param_1 + 8);
  if (0 < local_18) {
    do {
      puVar9 = (uint *)((int)puVar8 + iVar3);
      puVar1 = (uint *)((int)local_20 + iVar4);
      local_10 = uVar5;
      if (iVar2 == 8) {
        if (0 < (int)uVar5) {
          do {
            uVar6 = *local_20;
            local_20 = local_20 + 1;
            local_10 = local_10 - 1;
            *(undefined1 *)puVar8 =
                 *(undefined1 *)
                  (((((uVar6 & 0xf00000) >> 4 | uVar6 & 0xf000) >> 4 | uVar6 & 0xf0) >> 4) +
                  local_24);
            puVar8 = (uint *)((int)puVar8 + 1);
          } while (local_10 != 0);
        }
      }
      else {
        if (1 < (int)uVar5) {
          local_1c = uVar5 >> 1;
          local_10 = uVar5 + local_1c * -2;
          puVar10 = puVar8;
          do {
            uVar6 = *local_20;
            uVar7 = local_20[1];
            local_20 = local_20 + 2;
            puVar8 = puVar10 + 1;
            local_1c = local_1c - 1;
            *puVar10 = (((uVar6 & 0xf80000) >> 3 | uVar6 & 0xf800) >> 3 | uVar6 & 0xf8) >> 3 |
                       (((uVar7 & 0xf8) << 3 | uVar7 & 0xf800) << 3 | uVar7 & 0xf80000) << 7;
            puVar10 = puVar8;
          } while (local_1c != 0);
        }
        if (0 < (int)local_10) {
          uVar6 = *local_20;
          *(ushort *)puVar8 =
               (ushort)(uVar6 >> 9) & 0x7c00 | (ushort)(uVar6 >> 3) & 0x1f |
               (ushort)(uVar6 >> 6) & 0x3e0;
        }
      }
      local_18 = local_18 + -1;
      puVar8 = puVar9;
      local_20 = puVar1;
    } while (local_18 != 0);
  }
  return 1;
}


