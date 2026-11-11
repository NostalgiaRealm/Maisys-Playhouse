
/* ==== FUN_0047cd40 @ 0047cd40 ==== 
 * signature: int __cdecl FUN_0047cd40(undefined4 param_1, HGLOBAL param_2, short * param_3, int * param_4, short * param_5, int param_6, int * param_7)
 * body: 0047cd40-0047d12a
 */

int __cdecl
FUN_0047cd40(undefined4 param_1,HGLOBAL param_2,short *param_3,int *param_4,short *param_5,
            int param_6,int *param_7)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  LPVOID pvVar6;
  ushort *puVar7;
  byte bVar8;
  ushort *puVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  ushort *puVar13;
  uint local_44;
  int local_40;
  ushort *local_3c;
  ushort *local_38;
  int local_34;
  int local_30;
  uint local_2c;
  ushort *local_28;
  ushort *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  ushort *local_14;
  undefined4 local_10;
  ushort *local_c;
  short local_6;
  
  iVar12 = 0;
  local_10 = (ushort *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_18 = 0;
  if (*param_3 < *param_5) {
    local_34 = (int)*param_5 - (int)*param_3;
  }
  sVar2 = param_5[2];
  if (sVar2 < param_3[2]) {
    local_30 = (int)sVar2 - (int)param_3[2];
  }
  if (((sVar2 < *param_3) || (param_3[3] < param_5[1])) || (param_5[3] < param_3[1])) {
LAB_0047cdbf:
    if (local_10 != (ushort *)0x0) {
      GlobalUnlock(param_2);
    }
    return 0x10000;
  }
  local_c = (ushort *)GlobalSize(param_2);
  local_10 = GlobalLock(param_2);
  if (local_10 == (ushort *)0x0) goto LAB_0047cdbf;
  local_c = (ushort *)
            FUN_0047cba0((char *)local_10,(int)local_c,(uint *)&local_24,(uint *)&local_14,&local_2c
                         ,&local_44,&local_6);
  local_20 = 0;
  local_1c = CONCAT22(local_14._0_2_,local_24._0_2_);
  GlobalUnlock(param_2);
  if (local_c != (ushort *)0x0) {
    return (int)local_c;
  }
  if (param_6 == 0) {
    if (param_3 != (short *)0x0) {
      *(undefined4 *)param_3 = local_20;
      *(uint *)(param_3 + 2) = local_1c;
    }
    if (param_7 != (int *)0x0) {
      *param_7 = (int)local_1c._2_2_ * (int)(short)local_1c * local_2c;
    }
    if (local_10 != (ushort *)0x0) {
      GlobalUnlock(param_2);
    }
    return 0;
  }
  local_c = (ushort *)((int)(short)local_1c * local_2c);
  local_10 = (ushort *)(int)local_1c._2_2_;
  iVar5 = *param_4;
  if (iVar5 < 0) {
    if (param_5[3] < param_3[3]) {
      local_18 = (int)param_3[3] - (int)param_5[3];
    }
    if (param_3[1] < param_5[1]) {
      puVar9 = (ushort *)(((int)param_3[3] - (int)param_5[1]) + -1);
      goto LAB_0047cf03;
    }
    iVar12 = (int)param_3[1];
    iVar10 = (int)param_3[3];
  }
  else {
    sVar2 = param_3[1];
    if (sVar2 < param_5[1]) {
      local_18 = (int)param_5[1] - (int)sVar2;
    }
    iVar12 = (int)sVar2;
    if (param_5[3] < param_3[3]) {
      iVar10 = (int)param_5[3];
    }
    else {
      iVar10 = (int)param_3[3];
    }
  }
  puVar9 = (ushort *)(iVar10 - iVar12);
LAB_0047cf03:
  if (param_7 != (int *)0x0) {
    *param_7 = (int)puVar9 * iVar5;
  }
  local_1c = -iVar5;
  puVar13 = (ushort *)
            (param_6 + (int)((int)puVar9 + iVar12 + -1) * iVar5 + (int)*param_3 * local_2c);
  local_40 = (local_1c ^ (int)local_1c >> 0x1f) - ((int)local_1c >> 0x1f);
  if ((int)local_c <= local_40) {
    local_40 = (int)local_c;
  }
  local_24 = local_10;
  if ((int)puVar9 <= (int)local_10) {
    local_24 = puVar9;
  }
  pvVar6 = GlobalLock(param_2);
  if (pvVar6 != (LPVOID)0x0) {
    puVar9 = (ushort *)((int)pvVar6 + 0x14);
    local_c = puVar13;
    if (local_2c == 1) {
      iVar12 = 0;
      if (0 < (int)local_24) {
        do {
          local_10 = (ushort *)(local_40 + (int)local_c);
          local_28 = (ushort *)(local_34 + (int)local_c);
          local_14 = (ushort *)((int)local_10 + local_30);
          puVar13 = local_c;
          while (puVar13 < local_10) {
            bVar8 = (byte)*puVar9;
            if ((bVar8 & 0x80) == 0) {
              bVar1 = *(byte *)((int)puVar9 + 1);
              puVar9 = puVar9 + 1;
              if ('\0' < (char)bVar8) {
                do {
                  if (((local_18 <= iVar12) && (local_18 <= iVar12)) &&
                     ((local_28 <= puVar13 && (puVar13 <= local_14)))) {
                    *(byte *)puVar13 = bVar1;
                  }
                  puVar13 = (ushort *)((int)puVar13 + 1);
                  bVar8 = bVar8 - 1;
                } while (bVar8 != 0);
              }
            }
            else {
              puVar9 = (ushort *)((int)puVar9 + 1);
              for (bVar8 = bVar8 & 0x7f; bVar8 != 0; bVar8 = bVar8 - 1) {
                if (((local_18 <= iVar12) && (local_18 <= iVar12)) &&
                   ((local_28 <= puVar13 && (puVar13 <= local_14)))) {
                  *(byte *)puVar13 = (byte)*puVar9;
                }
                puVar13 = (ushort *)((int)puVar13 + 1);
                puVar9 = (ushort *)((int)puVar9 + 1);
              }
            }
          }
          iVar12 = iVar12 + 1;
          local_c = (ushort *)((int)local_c + local_1c);
        } while (iVar12 < (int)local_24);
      }
    }
    else if ((local_2c == 2) && (local_14 = (ushort *)0x0, 0 < (int)local_24)) {
      do {
        local_28 = local_c + local_40;
        local_3c = local_c + local_34;
        local_38 = local_28 + local_30;
        puVar13 = local_c;
        while (puVar13 < local_28) {
          uVar3 = *puVar9;
          puVar7 = puVar9 + 1;
          if ((uVar3 & 0x80) == 0) {
            uVar4 = *puVar7;
            puVar9 = puVar9 + 2;
            local_10 = (ushort *)CONCAT22(uVar4,SUB42(local_10,0));
            cVar11 = '\0';
            if (0 < (short)uVar3) {
              do {
                if (((local_18 <= (int)local_14) && (local_18 <= (int)local_14)) &&
                   ((local_3c <= puVar13 && (puVar13 <= local_38)))) {
                  *puVar13 = uVar4;
                }
                puVar13 = puVar13 + 1;
                cVar11 = cVar11 + '\x01';
              } while ((short)cVar11 < (short)uVar3);
            }
          }
          else {
            cVar11 = '\0';
            puVar9 = puVar7;
            if ((uVar3 & 0x7fff) != 0) {
              do {
                if ((((local_18 <= (int)local_14) && (local_18 <= (int)local_14)) &&
                    (local_3c <= puVar13)) && (puVar13 <= local_38)) {
                  *puVar13 = *puVar7;
                }
                puVar13 = puVar13 + 1;
                puVar7 = puVar7 + 1;
                cVar11 = cVar11 + '\x01';
                puVar9 = puVar7;
              } while ((short)cVar11 < (short)(uVar3 & 0x7fff));
            }
          }
        }
        local_14 = (ushort *)((int)local_14 + 1);
        local_c = (ushort *)((int)local_c + local_1c);
      } while ((int)local_14 < (int)local_24);
    }
    GlobalUnlock(param_2);
    return 0;
  }
  return 0x10000;
}


