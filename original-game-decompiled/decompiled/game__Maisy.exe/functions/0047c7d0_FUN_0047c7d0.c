
/* ==== FUN_0047c7d0 @ 0047c7d0 ==== 
 * signature: int __cdecl FUN_0047c7d0(undefined4 param_1, HGLOBAL param_2, int param_3, uint * param_4, uint * param_5, undefined4 * param_6, uint * param_7)
 * body: 0047c7d0-0047caf5
 */

int __cdecl
FUN_0047c7d0(undefined4 param_1,HGLOBAL param_2,int param_3,uint *param_4,uint *param_5,
            undefined4 *param_6,uint *param_7)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  SIZE_T SVar5;
  char *pcVar6;
  int iVar7;
  LPVOID pvVar8;
  ushort *puVar9;
  uint uVar10;
  short sVar11;
  int iVar12;
  ushort *puVar13;
  ushort *puVar14;
  ushort *puVar15;
  uint local_34;
  int local_30;
  uint local_2c;
  ushort *local_28;
  uint local_24;
  ushort *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  ushort *local_10;
  uint local_c;
  short local_6;
  
  if (param_2 == (HGLOBAL)0x0) {
    return 0x10000;
  }
  SVar5 = GlobalSize(param_2);
  pcVar6 = GlobalLock(param_2);
  if (pcVar6 == (char *)0x0) {
    return 0x10000;
  }
  iVar7 = FUN_0047cba0(pcVar6,SVar5,&local_18,&local_14,&local_1c,&local_34,&local_6);
  GlobalUnlock(param_2);
  if (iVar7 != 0) {
    return iVar7;
  }
  if (param_6 != (undefined4 *)0x0) {
    if ((param_4 == (uint *)0x0) ||
       (local_c = (int)*param_4 >> 0x1f, local_c = (*param_4 ^ local_c) - local_c,
       (int)local_c < (int)local_18)) {
      local_c = local_18;
    }
    iVar7 = 0;
    if (param_3 != 0) {
      iVar7 = (int)*(short *)(param_3 + 4);
    }
    iVar12 = 0;
    local_2c = (local_14 + iVar7) * local_c;
    if (param_3 != 0) {
      iVar12 = (int)*(short *)(param_3 + 2) * local_1c + (int)*(short *)(param_3 + 4) * local_c;
    }
    if ((int)local_c < 0) {
      iVar12 = iVar12 + local_c * local_14;
      local_c = -local_c;
    }
    iVar7 = FUN_0047ccd0(param_6,local_2c);
    if (iVar7 == 0) {
      pvVar8 = GlobalLock(param_2);
      if (pvVar8 == (LPVOID)0x0) {
        return 0x10000;
      }
      puVar14 = (ushort *)((int)pvVar8 + 0x14);
      local_20 = (ushort *)((int)pvVar8 + local_34);
      pvVar8 = GlobalLock((HGLOBAL)*param_6);
      if (pvVar8 == (LPVOID)0x0) {
        GlobalUnlock(param_2);
        return 0x10000;
      }
      puVar9 = (ushort *)((int)pvVar8 + iVar12);
      if (local_1c == 1) {
        if (0 < (int)local_14) {
          local_24 = local_14;
          do {
            local_28 = (ushort *)(local_18 + (int)puVar9);
            puVar15 = puVar9;
            while ((puVar14 < local_20 && (puVar15 < local_28))) {
              bVar1 = (byte)*puVar14;
              puVar13 = (ushort *)((int)puVar14 + 1);
              if ((bVar1 & 0x80) == 0) {
                sVar11 = 0;
                bVar2 = *(byte *)puVar13;
                puVar14 = puVar14 + 1;
                if (bVar1 != 0) {
                  local_10 = (ushort *)(uint)bVar1;
                  do {
                    sVar11 = sVar11 + 1;
                    *(byte *)puVar15 = bVar2;
                    puVar15 = (ushort *)((int)puVar15 + 1);
                  } while ((int)sVar11 < (int)local_10);
                }
              }
              else {
                sVar11 = 0;
                puVar14 = puVar13;
                if ((bVar1 & 0x7f) != 0) {
                  local_10 = (ushort *)(bVar1 & 0xffffff7f);
                  do {
                    sVar11 = sVar11 + 1;
                    *(byte *)puVar15 = (byte)*puVar13;
                    puVar13 = (ushort *)((int)puVar13 + 1);
                    puVar15 = (ushort *)((int)puVar15 + 1);
                    puVar14 = puVar13;
                  } while ((int)sVar11 < (int)local_10);
                }
              }
            }
            puVar9 = (ushort *)((int)puVar9 + local_c);
            local_24 = local_24 - 1;
          } while (local_24 != 0);
          local_24 = 0;
        }
      }
      else if ((local_1c == 2) && (local_10 = puVar9, 0 < (int)local_14)) {
        local_30 = local_18 * 2;
        local_24 = local_14;
        do {
          local_28 = local_10 + local_18;
          puVar9 = local_10;
          while ((puVar14 < local_20 && (puVar9 < local_28))) {
            uVar4 = *puVar14;
            if ((uVar4 & 0x8000) == 0) {
              uVar3 = puVar14[1];
              puVar14 = puVar14 + 2;
              if (0 < (short)uVar4) {
                puVar15 = puVar9 + uVar4;
                for (uVar10 = (uint)(uVar4 >> 1); uVar10 != 0; uVar10 = uVar10 - 1) {
                  *(uint *)puVar9 = CONCAT22(uVar3,uVar3);
                  puVar9 = puVar9 + 2;
                }
                puVar13 = puVar9;
                for (uVar10 = (uint)((uVar4 & 1) != 0); puVar9 = puVar15, uVar10 != 0;
                    uVar10 = uVar10 - 1) {
                  *puVar13 = uVar3;
                  puVar13 = puVar13 + 1;
                }
              }
            }
            else {
              puVar14 = puVar14 + 1;
              for (uVar4 = uVar4 & 0x7fff; uVar4 != 0; uVar4 = uVar4 - 1) {
                uVar3 = *puVar14;
                puVar14 = puVar14 + 1;
                *puVar9 = uVar3;
                puVar9 = puVar9 + 1;
              }
            }
          }
          local_10 = (ushort *)((int)local_10 + local_c);
          local_24 = local_24 - 1;
        } while (local_24 != 0);
      }
      GlobalUnlock((HGLOBAL)*param_6);
      GlobalUnlock(param_2);
      if (param_5 != (uint *)0x0) {
        *param_5 = local_1c;
      }
      if (param_7 != (uint *)0x0) {
        *param_7 = local_2c;
      }
      if (*param_4 != 0) {
        *param_4 = local_c;
      }
      if (param_3 != 0) {
        *(short *)(param_3 + 8) = *(short *)(param_3 + 4) + (short)local_14;
        *(short *)(param_3 + 6) = *(short *)(param_3 + 2) + (short)local_18;
      }
      iVar7 = 0;
    }
    return iVar7;
  }
  if (param_3 != 0) {
    *(undefined2 *)(param_3 + 2) = 0;
    *(undefined2 *)(param_3 + 4) = 0;
    *(short *)(param_3 + 6) = (short)local_18;
    *(short *)(param_3 + 8) = (short)local_14;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = local_1c;
  }
  if (param_7 != (uint *)0x0) {
    *param_7 = local_1c * local_14 * local_18;
  }
  return 0;
}


