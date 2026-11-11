
/* ==== FUN_0043a0e0 @ 0043a0e0 ==== 
 * signature: undefined4 __cdecl FUN_0043a0e0(int param_1, int param_2, int param_3)
 * body: 0043a0e0-0043a262
 */

undefined4 __cdecl FUN_0043a0e0(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined2 extraout_var;
  byte bVar12;
  uint uVar13;
  byte *local_24;
  int local_1c;
  undefined2 local_18;
  undefined2 local_14;
  
  uVar2 = *(undefined4 *)(param_3 + 4);
  uVar3 = *(undefined4 *)(param_3 + 8);
  iVar4 = *(int *)(param_2 + 0x10);
  if (((iVar4 != 0x10) && (iVar4 != 0x20)) && (iVar4 != 8)) {
    return 0xffffffff;
  }
  *(undefined4 *)(param_3 + 4) = 0;
  *(undefined1 *)(param_3 + 0x22) = 0;
  *(undefined1 *)(param_3 + 0x21) = 0;
  *(undefined1 *)(param_3 + 0x20) = 0;
  iVar5 = *(int *)(param_2 + 0xc);
  iVar6 = *(int *)(param_1 + 0xc);
  uVar7 = *(uint *)(param_1 + 0x14) & 7;
  iVar8 = uVar7 + *(int *)(param_1 + 4);
  local_24 = (byte *)FUN_0043a270(CONCAT22((short)((uint)iVar6 >> 0x10),
                                           *(undefined2 *)(param_1 + 0x20)),
                                  *(int *)(param_1 + 0x1c) + ((int)*(uint *)(param_1 + 0x14) >> 3));
  puVar9 = (undefined4 *)
           FUN_0043a270(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 0x20)),
                        *(undefined4 *)(param_2 + 0x1c));
  local_1c = *(int *)(param_1 + 8);
  if (0 < local_1c) {
    do {
      puVar10 = (undefined4 *)((int)puVar9 + iVar5);
      bVar12 = *local_24;
      pbVar1 = local_24 + iVar6;
      uVar13 = uVar7;
      if (iVar4 == 8) {
        while( true ) {
          if ((0x80 >> ((byte)uVar13 & 7) & (uint)bVar12) == 0) {
            local_14._0_1_ = (undefined1)uVar3;
            local_18._0_1_ = (undefined1)local_14;
          }
          else {
            local_18._0_1_ = (undefined1)uVar2;
          }
          *(undefined1 *)puVar9 = (undefined1)local_18;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          uVar13 = uVar13 + 1;
          if (iVar8 <= (int)uVar13) break;
          if ((uVar13 & 7) == 0) {
            bVar12 = local_24[1];
            local_24 = local_24 + 1;
          }
        }
      }
      else if (iVar4 == 0x10) {
        while( true ) {
          if ((0x80 >> ((byte)uVar13 & 7) & (uint)bVar12) == 0) {
            local_14 = (undefined2)uVar3;
            local_18 = local_14;
          }
          else {
            local_18 = (undefined2)uVar2;
          }
          *(undefined2 *)puVar9 = local_18;
          puVar9 = (undefined4 *)((int)puVar9 + 2);
          uVar13 = uVar13 + 1;
          if (iVar8 <= (int)uVar13) break;
          if ((uVar13 & 7) == 0) {
            bVar12 = local_24[1];
            local_24 = local_24 + 1;
          }
        }
      }
      else {
        while( true ) {
          uVar11 = uVar3;
          if ((0x80 >> ((byte)uVar13 & 7) & (uint)bVar12) != 0) {
            uVar11 = uVar2;
          }
          *puVar9 = uVar11;
          puVar9 = puVar9 + 1;
          uVar13 = uVar13 + 1;
          if (iVar8 <= (int)uVar13) break;
          if ((uVar13 & 7) == 0) {
            bVar12 = local_24[1];
            local_24 = local_24 + 1;
          }
        }
      }
      local_1c = local_1c + -1;
      puVar9 = puVar10;
      local_24 = pbVar1;
    } while (local_1c != 0);
  }
  return 1;
}


