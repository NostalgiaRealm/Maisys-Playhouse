
/* ==== FUN_11005a90 @ 11005a90 ==== 
 * signature: undefined __cdecl FUN_11005a90(undefined4 param_1, short * param_2, undefined4 param_3, int param_4, int param_5, int param_6, int param_7, int param_8)
 * body: 11005a90-11005d86
 */

void __cdecl
FUN_11005a90(undefined4 param_1,short *param_2,undefined4 param_3,int param_4,int param_5,
            int param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  ushort *puVar15;
  uint *puVar16;
  short local_12;
  int local_10;
  int local_c;
  short local_8;
  short local_4;
  
  iVar1 = **(int **)(param_4 + 8);
  iVar2 = (*(int **)(param_4 + 8))[1];
  if (param_7 == 0x10) {
    iVar3 = (param_8 * 0x1f) / 100;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    local_10 = iVar3 << 10;
    local_c = iVar3 << 5;
  }
  else {
    iVar3 = iVar1;
    if (param_7 == 0x20) {
      iVar3 = (param_8 * 0xff) / 100;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      local_10 = iVar3 << 0x10;
      local_c = iVar3 << 8;
    }
  }
  local_12 = 0;
  if (*param_2 != 1 && -1 < *param_2 + -1) {
    do {
      piVar9 = (int *)(local_12 * 0xc + *(int *)(param_2 + 1));
      iVar5 = piVar9[3];
      iVar10 = *piVar9;
      if (iVar5 != iVar10) {
        iVar10 = iVar10 >> 0x10;
        local_4 = (short)iVar2;
        iVar7 = *(int *)(*(int *)(param_4 + 0x2a) + 4);
        local_8 = (short)iVar1;
        iVar6 = (int)local_8;
        iVar14 = local_4 - iVar6;
        if (iVar7 <= iVar10) {
          iVar10 = iVar7;
        }
        if (iVar10 < 1) {
          iVar10 = 0;
        }
        iVar11 = iVar10 - iVar6;
        if (iVar14 <= iVar10 - iVar6) {
          iVar11 = iVar14;
        }
        if (iVar11 < 1) {
          iVar11 = 0;
        }
        iVar5 = iVar5 >> 0x10;
        if (iVar7 <= iVar5) {
          iVar5 = iVar7;
        }
        if (iVar5 < 1) {
          iVar5 = 0;
        }
        iVar10 = iVar5 - iVar6;
        if (iVar14 <= iVar5 - iVar6) {
          iVar10 = iVar14;
        }
        if (iVar10 < 1) {
          iVar10 = 0;
        }
        iVar10 = iVar10 - iVar11;
        if (param_7 == 8) {
          pbVar12 = (byte *)(iVar11 + param_6);
          if (0 < iVar10) {
            do {
              iVar10 = iVar10 + -1;
              *pbVar12 = *(byte *)((uint)*pbVar12 + param_5);
              pbVar12 = pbVar12 + 1;
            } while (iVar10 != 0);
          }
        }
        else if (param_7 == 0x10) {
          puVar15 = (ushort *)(param_6 + iVar11 * 2);
          if (param_8 < 1) {
            if (0 < iVar10) {
              do {
                uVar13 = (uint)*puVar15;
                iVar5 = (uVar13 & 0x7c00) - local_10;
                iVar6 = (uVar13 & 0x3e0) - local_c;
                iVar7 = (uVar13 & 0x1f) - iVar3;
                if (iVar5 < 0) {
                  iVar5 = 0;
                }
                if (iVar6 < 0) {
                  iVar6 = 0;
                }
                if (iVar7 < 0) {
                  iVar7 = 0;
                }
                iVar10 = iVar10 + -1;
                *puVar15 = (ushort)iVar7 | (ushort)iVar6 | (ushort)iVar5;
                puVar15 = puVar15 + 1;
              } while (iVar10 != 0);
            }
          }
          else if (0 < iVar10) {
            do {
              uVar13 = (uint)*puVar15;
              iVar7 = local_10 + (uVar13 & 0x7c00);
              iVar6 = local_c + (uVar13 & 0x3e0);
              iVar5 = (uVar13 & 0x1f) + iVar3;
              if (0x7c00 < iVar7) {
                iVar7 = 0x7c00;
              }
              if (0x3e0 < iVar6) {
                iVar6 = 0x3e0;
              }
              if (0x1f < iVar5) {
                iVar5 = 0x1f;
              }
              iVar10 = iVar10 + -1;
              *puVar15 = (ushort)iVar5 | (ushort)iVar6 | (ushort)iVar7;
              puVar15 = puVar15 + 1;
            } while (iVar10 != 0);
          }
        }
        else if (param_7 == 0x20) {
          puVar16 = (uint *)(param_6 + iVar11 * 4);
          if (param_8 < 1) {
            if (0 < iVar10) {
              do {
                uVar13 = *puVar16;
                uVar4 = (uVar13 & 0xff0000) - local_10;
                uVar8 = (uVar13 & 0xff00) - local_c;
                uVar13 = (uVar13 & 0xff) - iVar3;
                if ((int)uVar4 < 0) {
                  uVar4 = 0;
                }
                if ((int)uVar8 < 0) {
                  uVar8 = 0;
                }
                if ((int)uVar13 < 0) {
                  uVar13 = 0;
                }
                iVar10 = iVar10 + -1;
                *puVar16 = uVar13 | uVar8 | uVar4;
                puVar16 = puVar16 + 1;
              } while (iVar10 != 0);
            }
          }
          else if (0 < iVar10) {
            do {
              uVar13 = *puVar16;
              uVar4 = (uVar13 & 0xff0000) + local_10;
              uVar8 = (uVar13 & 0xff00) + local_c;
              uVar13 = (uVar13 & 0xff) + iVar3;
              if (0xff0000 < (int)uVar4) {
                uVar4 = 0xff0000;
              }
              if (0xff00 < (int)uVar8) {
                uVar8 = 0xff00;
              }
              if (0xff < (int)uVar13) {
                uVar13 = 0xff;
              }
              iVar10 = iVar10 + -1;
              *puVar16 = uVar13 | uVar8 | uVar4;
              puVar16 = puVar16 + 1;
            } while (iVar10 != 0);
          }
        }
      }
      local_12 = local_12 + 2;
    } while ((int)local_12 < *param_2 + -1);
  }
  return;
}


