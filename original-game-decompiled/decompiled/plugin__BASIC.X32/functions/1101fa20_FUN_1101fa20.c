
/* ==== FUN_1101fa20 @ 1101fa20 ==== 
 * signature: undefined4 __cdecl FUN_1101fa20(int param_1, int param_2, int param_3)
 * body: 1101fa20-1101fb7e
 */

undefined4 __cdecl FUN_1101fa20(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined2 extraout_var;
  ushort *puVar7;
  uint *puVar8;
  int iVar9;
  ushort *local_14;
  int local_10;
  int local_4;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if ((iVar1 != 8) && (iVar1 != 0x20)) {
    return 0xffffffff;
  }
  iVar2 = *(int *)(param_2 + 0xc);
  iVar3 = *(int *)(param_1 + 0xc);
  iVar4 = *(int *)(param_1 + 4);
  local_14 = (ushort *)
             FUN_1101f460(CONCAT22((short)((uint)iVar3 >> 0x10),*(undefined2 *)(param_1 + 0x20)),
                          *(int *)(param_1 + 0x14) * 2 + *(int *)(param_1 + 0x1c));
  puVar5 = (uint *)FUN_1101f460(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 0x20)),
                                *(undefined4 *)(param_2 + 0x1c));
  if ((iVar1 == 8) && (local_4 = *(int *)(param_3 + 0x14), local_4 == 0)) {
    return 0xffffffff;
  }
  local_10 = *(int *)(param_1 + 8);
  if (0 < local_10) {
    do {
      if (iVar1 == 8) {
        puVar7 = local_14;
        puVar8 = puVar5;
        iVar9 = iVar4;
        if (0 < iVar4) {
          do {
            uVar6 = (uint)*puVar7;
            iVar9 = iVar9 + -1;
            *(undefined1 *)puVar8 =
                 *(undefined1 *)
                  (((((uVar6 & 0x7800) >> 1 | uVar6 & 0x3c0) >> 1 | uVar6 & 0x1e) >> 1) + local_4);
            puVar7 = puVar7 + 1;
            puVar8 = (uint *)((int)puVar8 + 1);
          } while (iVar9 != 0);
        }
      }
      else {
        puVar7 = local_14;
        iVar9 = iVar4;
        puVar8 = puVar5;
        if (0 < iVar4) {
          do {
            uVar6 = (uint)*puVar7;
            uVar6 = (((uVar6 & 0x7c00) << 3 | uVar6 & 0x3e0) << 3 | uVar6 & 0x1f) * 8;
            iVar9 = iVar9 + -1;
            *puVar8 = (uVar6 & 0xe0e0e0) >> 5 | uVar6;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          } while (iVar9 != 0);
        }
      }
      local_10 = local_10 + -1;
      puVar5 = (uint *)((int)puVar5 + iVar2);
      local_14 = (ushort *)((int)local_14 + iVar3);
    } while (local_10 != 0);
  }
  return 1;
}


