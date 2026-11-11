
/* ==== FUN_00428810 @ 00428810 ==== 
 * signature: undefined4 __cdecl FUN_00428810(int param_1, short * param_2, byte * param_3, int param_4, short param_5, short param_6, short * param_7, short * param_8, short * param_9)
 * body: 00428810-00428d3e
 */

undefined4 __cdecl
FUN_00428810(int param_1,short *param_2,byte *param_3,int param_4,short param_5,short param_6,
            short *param_7,short *param_8,short *param_9)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  byte bVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  int local_48;
  int local_44;
  int local_3c;
  int local_34;
  int local_28;
  int local_24;
  int local_1c;
  byte *local_14;
  int local_10;
  int local_8;
  
  if (param_5 != 1) {
    return 0x10000;
  }
  pbVar6 = param_3 + param_4;
  local_24 = -1;
  local_1c = -1;
  local_48 = 0;
  local_44 = 0;
  local_28 = 0;
  local_3c = 0;
  local_3c._0_2_ = 0;
  local_34 = 0;
  sVar2 = *param_7;
  if (sVar2 < *param_8) {
    local_48 = (int)*param_8 - (int)sVar2;
  }
  sVar3 = param_7[2];
  if (param_8[2] < sVar3) {
    local_44 = (int)param_8[2] - (int)sVar3;
  }
  if (param_8[2] < sVar2) {
    return 0x10000;
  }
  sVar4 = param_7[3];
  if (sVar4 < param_8[1]) {
    return 0x10000;
  }
  sVar5 = param_7[1];
  if (param_8[3] < sVar5) {
    return 0x10000;
  }
  if (param_6 < 0) {
    if (param_8[3] < sVar4) {
      local_28 = (int)sVar4 - (int)param_8[3];
    }
    if (sVar5 < param_8[1]) {
      iVar7 = (int)param_8[1];
      goto LAB_00428953;
    }
  }
  else {
    if (param_8[3] < sVar4) {
      local_28 = (int)sVar4 - (int)param_8[3];
    }
    if (sVar5 < param_8[1]) {
      iVar7 = (int)param_8[1];
      goto LAB_00428953;
    }
  }
  iVar7 = (int)sVar5;
LAB_00428953:
  iVar11 = sVar4 - iVar7;
  local_14 = (byte *)(param_1 + (iVar11 + iVar7 + -1) * (int)param_6 + (int)sVar2);
  uVar15 = (uint)-param_6;
  iVar7 = (uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f);
  if ((int)param_2[2] - (int)*param_2 <= iVar7) {
    iVar7 = (int)param_2[2] - (int)*param_2;
  }
  if ((int)param_2[3] - (int)param_2[1] <= iVar11) {
    iVar11 = (int)param_2[3] - (int)param_2[1];
  }
  if ((((sVar2 < *param_8) || (param_8[2] < sVar3)) || (sVar5 < param_8[1])) || (param_8[3] < sVar4)
     ) {
    local_8 = 0;
    if (0 < iVar11) {
      do {
        local_10 = 0;
        pbVar16 = local_14 + local_48;
        pbVar17 = local_14 + iVar7 + local_44;
        pbVar6 = local_14;
        while (pbVar6 < local_14 + iVar7) {
          bVar14 = *param_3;
          pbVar18 = param_3 + 1;
          if (bVar14 == 0) {
            bVar14 = *pbVar18;
            param_3 = param_3 + 2;
            if ((bVar14 & 0x80) != 0) {
              local_8 = (char)(bVar14 & 0x7f) + -1 + local_8;
              local_14 = local_14 + ((char)(bVar14 & 0x7f) + -1) * uVar15;
              break;
            }
            pbVar6 = pbVar6 + (char)bVar14;
            local_10 = local_10 + (char)bVar14;
          }
          else {
            if (local_24 < 0) {
              local_24 = local_8;
            }
            if ((bVar14 & 0x80) == 0) {
              bVar9 = *pbVar18;
              pbVar18 = param_3 + 2;
              if ((local_28 <= local_8) && (pbVar16 <= pbVar6)) {
                iVar13 = (int)(char)bVar14;
                if (pbVar16 < pbVar6 + iVar13) {
                  if (pbVar6 < pbVar16) {
LAB_00428c30:
                    iVar8 = (int)pbVar16 - (int)pbVar6;
                    if (iVar13 <= (int)pbVar16 - (int)pbVar6) {
                      iVar8 = iVar13;
                    }
                    pbVar6 = pbVar6 + iVar8;
                    bVar14 = bVar14 - (char)iVar8;
                  }
                  else {
                    if (pbVar6 + iVar13 <= pbVar17) {
                      if ('\0' < (char)bVar14) {
                        pbVar19 = pbVar6;
                        for (uVar12 = (uint)(bVar14 >> 2); uVar12 != 0; uVar12 = uVar12 - 1) {
                          *(uint *)pbVar19 = CONCAT22(CONCAT11(bVar9,bVar9),CONCAT11(bVar9,bVar9));
                          pbVar19 = pbVar19 + 4;
                        }
                        for (uVar12 = bVar14 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                          *pbVar19 = bVar9;
                          pbVar19 = pbVar19 + 1;
                        }
                        pbVar6 = pbVar6 + bVar14;
                      }
                      goto LAB_00428c68;
                    }
                    if (pbVar6 < pbVar16) goto LAB_00428c30;
                  }
                  cVar10 = '\0';
                  if ('\0' < (char)bVar14) {
                    do {
                      if (pbVar17 <= pbVar6) break;
                      *pbVar6 = bVar9;
                      pbVar6 = pbVar6 + 1;
                      cVar10 = cVar10 + '\x01';
                    } while (cVar10 < (char)bVar14);
                  }
                  if (cVar10 < (char)bVar14) {
                    pbVar6 = pbVar6 + ((int)(char)bVar14 - (int)cVar10);
                  }
                  goto LAB_00428c68;
                }
              }
              pbVar6 = pbVar6 + (char)bVar14;
            }
            else {
              bVar14 = bVar14 & 0x7f;
              if ((local_28 <= local_8) && (pbVar6 < pbVar17)) {
                iVar13 = (int)(char)bVar14;
                if (pbVar16 < pbVar6 + iVar13) {
                  if (pbVar6 < pbVar16) {
LAB_00428b7c:
                    iVar8 = (int)pbVar16 - (int)pbVar6;
                    if (iVar13 <= (int)pbVar16 - (int)pbVar6) {
                      iVar8 = iVar13;
                    }
                    pbVar6 = pbVar6 + iVar8;
                    pbVar18 = pbVar18 + iVar8;
                    bVar14 = bVar14 - (char)iVar8;
                  }
                  else {
                    bVar9 = bVar14;
                    if (pbVar6 + iVar13 <= pbVar17) {
                      for (; bVar9 != 0; bVar9 = bVar9 - 1) {
                        bVar1 = *pbVar18;
                        pbVar18 = pbVar18 + 1;
                        *pbVar6 = bVar1;
                        pbVar6 = pbVar6 + 1;
                      }
                      goto LAB_00428c68;
                    }
                    if (pbVar6 < pbVar16) goto LAB_00428b7c;
                  }
                  cVar10 = '\0';
                  if ('\0' < (char)bVar14) {
                    do {
                      if (pbVar17 <= pbVar6) break;
                      bVar9 = *pbVar18;
                      pbVar18 = pbVar18 + 1;
                      *pbVar6 = bVar9;
                      pbVar6 = pbVar6 + 1;
                      cVar10 = cVar10 + '\x01';
                    } while (cVar10 < (char)bVar14);
                  }
                  if (cVar10 < (char)bVar14) {
                    pbVar6 = pbVar6 + ((int)(char)bVar14 - (int)cVar10);
                    pbVar18 = pbVar18 + ((int)(char)bVar14 - (int)cVar10);
                  }
                  goto LAB_00428c68;
                }
              }
              pbVar6 = pbVar6 + (char)bVar14;
              pbVar18 = pbVar18 + (char)bVar14;
            }
LAB_00428c68:
            if ((local_1c < 0) || (local_10 < local_1c)) {
              local_1c = local_10;
            }
            local_10 = local_10 + (bVar14 & 0x7f);
            param_3 = pbVar18;
            local_3c = local_8;
            if (local_34 < local_10) {
              local_34 = local_10;
            }
          }
        }
        local_8 = local_8 + 1;
        local_14 = local_14 + uVar15;
      } while (local_8 < iVar11);
    }
  }
  else {
    local_8 = 0;
    if (0 < iVar11) {
      do {
        local_10 = 0;
        pbVar16 = local_14;
        while( true ) {
          while( true ) {
            if ((pbVar6 <= param_3) || (local_14 + iVar7 <= pbVar16)) goto LAB_00428ac1;
            bVar14 = *param_3;
            pbVar17 = param_3 + 1;
            if (bVar14 == 0) break;
            if (local_24 < 0) {
              local_24 = local_8;
            }
            if ((bVar14 & 0x80) == 0) {
              bVar9 = *pbVar17;
              param_3 = param_3 + 2;
              if ('\0' < (char)bVar14) {
                pbVar17 = pbVar16;
                for (uVar12 = (uint)(bVar14 >> 2); uVar12 != 0; uVar12 = uVar12 - 1) {
                  *(uint *)pbVar17 = CONCAT22(CONCAT11(bVar9,bVar9),CONCAT11(bVar9,bVar9));
                  pbVar17 = pbVar17 + 4;
                }
                for (uVar12 = bVar14 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *pbVar17 = bVar9;
                  pbVar17 = pbVar17 + 1;
                }
                pbVar16 = pbVar16 + bVar14;
              }
            }
            else {
              bVar14 = bVar14 & 0x7f;
              param_3 = pbVar17;
              for (bVar9 = bVar14; bVar9 != 0; bVar9 = bVar9 - 1) {
                bVar1 = *param_3;
                param_3 = param_3 + 1;
                *pbVar16 = bVar1;
                pbVar16 = pbVar16 + 1;
              }
            }
            if ((local_1c < 0) || (local_10 < local_1c)) {
              local_1c = local_10;
            }
            local_10 = local_10 + (bVar14 & 0x7f);
            local_3c = local_8;
            if (local_34 < local_10) {
              local_34 = local_10;
            }
          }
          bVar14 = *pbVar17;
          param_3 = param_3 + 2;
          if ((bVar14 & 0x80) != 0) break;
          pbVar16 = pbVar16 + (char)bVar14;
          local_10 = local_10 + (char)bVar14;
        }
        local_8 = (char)(bVar14 & 0x7f) + -1 + local_8;
        local_14 = local_14 + ((char)(bVar14 & 0x7f) + -1) * uVar15;
LAB_00428ac1:
        local_8 = local_8 + 1;
        local_14 = local_14 + uVar15;
      } while (local_8 < iVar11);
    }
  }
  if (param_9 != (short *)0x0) {
    if (local_24 < 0) {
      local_24 = 0;
    }
    if (local_1c < 0) {
      local_1c = 0;
    }
    *param_9 = *param_7 + (short)local_1c;
    param_9[2] = *param_7 + (short)local_34;
    param_9[1] = (param_7[3] - (short)local_3c) + -1;
    param_9[3] = param_7[3] - (short)local_24;
  }
  return 0;
}


