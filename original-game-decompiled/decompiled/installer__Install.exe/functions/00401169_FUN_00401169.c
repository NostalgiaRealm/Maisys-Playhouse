
/* ==== FUN_00401169 @ 00401169 ==== 
 * signature: undefined4 __cdecl FUN_00401169(uint param_1, uint param_2, uint * param_3, int param_4, int param_5, int * param_6, uint * param_7)
 * body: 00401169-0040151f
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 __cdecl
FUN_00401169(uint param_1,uint param_2,uint *param_3,int param_4,int param_5,int *param_6,
            uint *param_7)

{
  int *piVar1;
  undefined2 uVar2;
  byte bVar3;
  uint *puVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  uint local_58c [287];
  int aiStack_110 [17];
  uint local_cc [17];
  uint local_88 [20];
  int local_38;
  int *local_34;
  int local_30;
  int local_2c;
  uint *local_28;
  int *local_24;
  undefined4 local_20;
  int local_1c;
  uint *local_18;
  uint local_14;
  uint local_10;
  int local_c;
  uint *local_8;
  
  puVar10 = param_7;
  puVar8 = local_88;
  for (iVar7 = 0x11; puVar4 = param_3, uVar11 = param_1, iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  do {
    uVar12 = *puVar4;
    puVar4 = puVar4 + 1;
    local_88[uVar12] = local_88[uVar12] + 1;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  if (local_88[0] == param_1) {
    *param_7 = 0;
    *param_6 = 0;
  }
  else {
    puVar8 = (uint *)0x1;
    puVar4 = local_88;
    param_7 = (uint *)*param_7;
    do {
      puVar4 = puVar4 + 1;
      if (*puVar4 != 0) break;
      puVar8 = (uint *)((int)puVar8 + 1);
    } while (puVar8 < (uint *)0x11);
    local_8 = puVar8;
    if (param_7 < puVar8) {
      param_7 = puVar8;
    }
    puVar4 = local_88 + 0x10;
    puVar9 = (uint *)0x10;
    do {
      if (*puVar4 != 0) break;
      puVar9 = (uint *)((int)puVar9 - 1);
      puVar4 = puVar4 + -1;
    } while (puVar9 != (uint *)0x0);
    local_18 = puVar9;
    if (puVar9 < param_7) {
      param_7 = puVar9;
    }
    local_1c = 1 << ((byte)puVar8 & 0x1f);
    *puVar10 = (uint)param_7;
    if (puVar8 < puVar9) {
      puVar10 = local_88 + (int)puVar8;
      do {
        if ((int)(local_1c - *puVar10) < 0) {
          return 0xfffffffd;
        }
        puVar8 = (uint *)((int)puVar8 + 1);
        local_1c = (local_1c - *puVar10) * 2;
        puVar10 = puVar10 + 1;
      } while (puVar8 < puVar9);
    }
    iVar7 = local_1c - local_88[(int)puVar9];
    local_1c = iVar7;
    if (iVar7 < 0) {
      return 0xfffffffd;
    }
    local_cc[1] = 0;
    local_88[(int)puVar9] = local_88[(int)puVar9] + iVar7;
    puVar8 = local_88;
    puVar10 = local_cc + 2;
    uVar11 = 0;
    while( true ) {
      puVar8 = puVar8 + 1;
      puVar9 = (uint *)((int)puVar9 - 1);
      if (puVar9 == (uint *)0x0) break;
      uVar11 = uVar11 + *puVar8;
      *puVar10 = uVar11;
      puVar10 = puVar10 + 1;
    }
    uVar11 = 0;
    do {
      uVar12 = *param_3;
      param_3 = param_3 + 1;
      if (uVar12 != 0) {
        uVar13 = local_cc[uVar12];
        local_58c[uVar13] = uVar11;
        local_cc[uVar12] = uVar13 + 1;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_1);
    local_c = -1;
    param_3 = local_58c;
    uVar11 = 0;
    local_2c = -(int)param_7;
    local_34 = (int *)0x0;
    aiStack_110[1] = 0;
    local_cc[0] = 0;
    local_10 = 0;
    if ((int)local_8 <= (int)local_18) {
      local_28 = local_88 + (int)local_8;
      do {
        uVar12 = *local_28;
        local_14 = uVar12 - 1;
        while (uVar12 != 0) {
          local_30 = (int)param_7 + local_2c;
          if (local_30 < (int)local_8) {
            local_88[0x13] = local_14 + 1;
            local_38 = -(int)param_7;
            uVar12 = (int)local_18 - local_2c;
            do {
              local_c = local_c + 1;
              local_30 = local_30 + (int)param_7;
              uVar12 = uVar12 + local_38;
              local_2c = local_2c + (int)param_7;
              puVar10 = param_7;
              if ((int)uVar12 <= (int)param_7) {
                puVar10 = (uint *)((int)local_18 - local_2c);
              }
              puVar8 = (uint *)((int)local_8 - local_2c);
              uVar11 = 1 << ((byte)puVar8 & 0x1f);
              if (local_88[0x13] < uVar11) {
                iVar7 = uVar11 + (-1 - local_14);
                puVar4 = local_28;
                while (puVar8 = (uint *)((int)puVar8 + 1), puVar8 < puVar10) {
                  puVar9 = puVar4 + 1;
                  puVar4 = puVar4 + 1;
                  if ((uint)(iVar7 * 2) <= *puVar9) break;
                  iVar7 = iVar7 * 2 - *puVar9;
                }
              }
              uVar11 = 1 << ((byte)puVar8 & 0x1f);
              local_88[0x12] = uVar12;
              piVar5 = FUN_00402106(uVar11 * 8 + 8);
              iVar7 = local_c;
              if (piVar5 == (int *)0x0) {
                if (local_c != 0) {
                  FUN_00401520(aiStack_110[1]);
                }
                return 0xfffffffe;
              }
              piVar1 = piVar5 + 2;
              local_34 = piVar1;
              *param_6 = (int)piVar1;
              DAT_00404360 = DAT_00404360 + 1 + uVar11;
              *piVar5 = 0;
              local_88[0x11] = local_c * 4;
              bVar15 = local_c != 0;
              aiStack_110[local_c + 1] = (int)piVar1;
              uVar13 = local_10;
              if (bVar15) {
                iVar7 = aiStack_110[iVar7];
                *(uint *)((int)local_cc + local_88[0x11]) = local_10;
                local_20._0_3_ = CONCAT12((char)param_7,(undefined2)local_20);
                local_20 = CONCAT13((byte)puVar8 + 0x10,(undefined3)local_20);
                local_24 = piVar1;
                uVar13 = uVar13 >> ((char)local_2c - (char)param_7 & 0x1fU);
                *(int **)(iVar7 + uVar13 * 8) = piVar1;
                *(int *)(iVar7 + 4 + uVar13 * 8) = local_20;
                uVar12 = local_88[0x12];
              }
              iVar7 = local_1c;
              param_6 = piVar5;
            } while (local_30 < (int)local_8);
          }
          uVar12 = local_14;
          bVar3 = (byte)local_2c;
          local_20._0_3_ = CONCAT12((char)local_8 - bVar3,(undefined2)local_20);
          if (param_3 < local_58c + param_1) {
            uVar13 = *param_3;
            if (uVar13 < param_2) {
              uVar2 = (undefined2)*param_3;
              cVar6 = (uVar13 < 0x100) + '\x0f';
            }
            else {
              iVar14 = (uVar13 - param_2) * 2;
              uVar2 = *(undefined2 *)(param_4 + iVar14);
              cVar6 = *(char *)(param_5 + iVar14);
            }
            param_3 = param_3 + 1;
            local_20 = CONCAT13(cVar6,CONCAT12((char)local_8 - bVar3,uVar2));
          }
          else {
            local_20 = CONCAT13(0xff,(undefined3)local_20);
          }
          iVar14 = 1 << ((char)local_8 - bVar3 & 0x1f);
          uVar13 = local_10 >> (bVar3 & 0x1f);
          if (uVar13 < uVar11) {
            piVar5 = local_34 + uVar13 * 2;
            do {
              uVar13 = uVar13 + iVar14;
              *piVar5 = (int)local_24;
              piVar5[1] = local_20;
              piVar5 = piVar5 + iVar14 * 2;
              iVar7 = local_1c;
            } while (uVar13 < uVar11);
          }
          uVar13 = 1 << ((char)local_8 - 1U & 0x1f);
          while ((local_10 & uVar13) != 0) {
            local_10 = local_10 ^ uVar13;
            uVar13 = uVar13 >> 1;
          }
          local_10 = local_10 ^ uVar13;
          for (puVar10 = local_cc + local_c;
              ((1 << ((byte)local_2c & 0x1f)) - 1U & local_10) != *puVar10; puVar10 = puVar10 + -1)
          {
            local_2c = local_2c - (int)param_7;
            local_c = local_c + -1;
          }
          local_14 = local_14 - 1;
        }
        local_8 = (uint *)((int)local_8 + 1);
        local_28 = local_28 + 1;
      } while ((int)local_8 <= (int)local_18);
    }
    if ((local_18 != (uint *)0x1) && (iVar7 != 0)) {
      return 0xffffffff;
    }
  }
  return 0;
}


