
/* ==== FUN_0047bf60 @ 0047bf60 ==== 
 * signature: int __cdecl FUN_0047bf60(undefined4 param_1, HGLOBAL param_2, int param_3, uint param_4, int param_5, undefined4 * param_6, undefined4 * param_7, int param_8, undefined4 param_9, undefined4 param_10, undefined2 param_11)
 * body: 0047bf60-0047c7c1
 */

int __cdecl
FUN_0047bf60(undefined4 param_1,HGLOBAL param_2,int param_3,uint param_4,int param_5,
            undefined4 *param_6,undefined4 *param_7,int param_8,undefined4 param_9,
            undefined4 param_10,undefined2 param_11)

{
  longlong lVar1;
  ushort uVar2;
  bool bVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  LPVOID pvVar7;
  ushort *puVar8;
  int iVar9;
  SIZE_T SVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  int iVar14;
  int iVar15;
  ushort *puVar16;
  int iVar17;
  char *pcVar18;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  ushort *local_2c;
  int local_28;
  ushort *local_24;
  ushort *local_20;
  ushort *local_1c;
  undefined1 *local_10;
  short local_c;
  char local_8;
  undefined1 uStack_7;
  undefined2 uStack_6;
  
  if ((((param_2 == (HGLOBAL)0x0) || (param_4 == 0)) || (2 < param_5)) ||
     ((param_6 == (undefined4 *)0x0 || (param_7 == (undefined4 *)0x0)))) {
    iVar6 = 0x10000;
  }
  else {
    uVar5 = (int)param_4 >> 0x1f;
    if (param_3 == 0) {
      local_34 = 0;
      local_38 = 1;
      local_28 = (param_4 ^ uVar5) - uVar5;
    }
    else {
      if ((int)param_4 < 1) {
        if (*(short *)(param_3 + 8) < 1) {
          sVar4 = 0;
        }
        else {
          sVar4 = *(short *)(param_3 + 8) + -1;
        }
        local_34 = *(short *)(param_3 + 2) * param_5 + (int)sVar4 * ((param_4 ^ uVar5) - uVar5);
      }
      else {
        local_34 = *(short *)(param_3 + 2) * param_5 +
                   (int)*(short *)(param_3 + 4) * ((param_4 ^ uVar5) - uVar5);
      }
      local_28 = ((int)*(short *)(param_3 + 6) - (int)*(short *)(param_3 + 2)) * param_5;
      local_38 = (int)*(short *)(param_3 + 8) - (int)*(short *)(param_3 + 4);
    }
    local_40 = param_5 * local_38 * local_28;
    uVar5 = local_40 / 2 + 0x14;
    iVar6 = FUN_0047ccd0(param_6,uVar5);
    if (iVar6 == 0) {
      pvVar7 = GlobalLock(param_2);
      if (pvVar7 == (LPVOID)0x0) {
        return 0x10000;
      }
      local_24 = (ushort *)((int)pvVar7 + local_34);
      local_10 = GlobalLock((HGLOBAL)*param_6);
      if (local_10 == (undefined1 *)0x0) {
        return 0x10000;
      }
      puVar8 = (ushort *)(local_10 + 0x14);
      local_2c = (ushort *)(local_10 + uVar5);
      local_20 = puVar8;
      if (param_5 == 1) {
        local_3c = 0;
        if (0 < local_38) {
          local_1c = (ushort *)0x0;
          do {
            puVar11 = (ushort *)(local_28 + (int)local_24);
            puVar12 = local_24;
            puVar16 = puVar8;
            if (local_24 < puVar11) {
              do {
                puVar8 = puVar12;
                if (*(char *)((int)puVar12 + 1) == (char)*puVar12) {
                  puVar13 = puVar12;
                  if (puVar12 < puVar11) {
                    do {
                      puVar8 = (ushort *)((int)puVar13 + 1);
                      if ((puVar11 <= puVar8) || ((char)*puVar13 != *(char *)puVar8)) break;
                      puVar13 = puVar8;
                    } while (puVar8 < puVar11);
                    if (puVar13 < puVar11) {
                      puVar13 = (ushort *)((int)puVar13 + 1);
                    }
                  }
                  iVar6 = (int)puVar13 - (int)puVar12;
                  iVar9 = iVar6 / 0x7f;
                  local_8 = (char)iVar9;
                  if (local_2c <= puVar16 + iVar9 + 1) {
                    iVar15 = (int)puVar16 - (int)local_20;
                    iVar14 = (int)puVar13 - (int)local_24;
                    GlobalUnlock((HGLOBAL)*param_6);
                    GlobalUnlock(param_2);
                    uVar5 = uVar5 + 0x200;
                    FUN_0043f7b0((HGLOBAL)*param_6,uVar5);
                    SVar10 = GlobalSize((HGLOBAL)*param_6);
                    if (SVar10 < uVar5) {
                      return 0x10000;
                    }
                    local_10 = GlobalLock((HGLOBAL)*param_6);
                    if (local_10 == (undefined1 *)0x0) {
                      return 0x10000;
                    }
                    local_20 = (ushort *)(local_10 + 0x14);
                    local_2c = (ushort *)(local_10 + uVar5);
                    puVar16 = (ushort *)(iVar15 + (int)local_20);
                    pvVar7 = GlobalLock(param_2);
                    if (pvVar7 == (LPVOID)0x0) {
                      return 0x10000;
                    }
                    local_24 = (ushort *)((int)pvVar7 + (int)local_1c + local_34);
                    puVar13 = (ushort *)(iVar14 + (int)local_24);
                    puVar11 = (ushort *)((int)local_24 + local_28);
                  }
                  puVar8 = puVar16;
                  if (0 < iVar9) {
                    do {
                      *(char *)puVar8 = '\x7f';
                      puVar16 = puVar8 + 1;
                      iVar9 = iVar9 + -1;
                      *(char *)((int)puVar8 + 1) = (char)*puVar12;
                      puVar8 = puVar16;
                    } while (iVar9 != 0);
                  }
                  local_c._0_1_ = (char)iVar6;
                  *(char *)puVar16 = local_8 * -0x7f + (char)local_c;
                  puVar8 = puVar16 + 1;
                  *(char *)((int)puVar16 + 1) = (char)*puVar12;
                }
                else {
                  do {
                    puVar13 = puVar8;
                    if (puVar11 <= puVar13) break;
                    puVar8 = (ushort *)((int)puVar13 + 1);
                  } while ((puVar11 <= puVar8) || ((char)*puVar13 != *(char *)puVar8));
                  iVar6 = (int)puVar13 - (int)puVar12;
                  iVar9 = iVar6 / 0x7f;
                  local_8 = (char)iVar9;
                  uStack_7 = (undefined1)((uint)iVar9 >> 8);
                  uStack_6 = (undefined2)((uint)iVar9 >> 0x10);
                  iVar14 = iVar6 % 0x7f;
                  if (local_2c <= (ushort *)((int)puVar16 + iVar9 + iVar6 + 1)) {
                    iVar17 = (int)puVar16 - (int)local_20;
                    iVar15 = (int)puVar13 - (int)local_24;
                    GlobalUnlock((HGLOBAL)*param_6);
                    GlobalUnlock(param_2);
                    uVar5 = uVar5 + iVar6 + iVar9 + 0x201;
                    FUN_0043f7b0((HGLOBAL)*param_6,uVar5);
                    SVar10 = GlobalSize((HGLOBAL)*param_6);
                    if (SVar10 < uVar5) {
                      return 0x10000;
                    }
                    local_10 = GlobalLock((HGLOBAL)*param_6);
                    if (local_10 == (undefined1 *)0x0) {
                      return 0x10000;
                    }
                    local_20 = (ushort *)(local_10 + 0x14);
                    local_2c = (ushort *)(local_10 + uVar5);
                    puVar16 = (ushort *)(iVar17 + (int)local_20);
                    pvVar7 = GlobalLock(param_2);
                    if (pvVar7 == (LPVOID)0x0) {
                      return 0x10000;
                    }
                    local_24 = (ushort *)((int)pvVar7 + (int)local_1c + local_34);
                    puVar13 = (ushort *)(iVar15 + (int)local_24);
                    puVar11 = (ushort *)((int)local_24 + local_28);
                  }
                  if (0 < iVar9) {
                    do {
                      *(char *)puVar16 = -1;
                      puVar16 = (ushort *)((int)puVar16 + 1);
                      iVar6 = 0x7f;
                      do {
                        uVar2 = *puVar12;
                        puVar12 = (ushort *)((int)puVar12 + 1);
                        *(char *)puVar16 = (char)uVar2;
                        puVar16 = (ushort *)((int)puVar16 + 1);
                        iVar6 = iVar6 + -1;
                      } while (iVar6 != 0);
                      iVar6 = CONCAT22(uStack_6,CONCAT11(uStack_7,local_8)) + -1;
                      local_8 = (char)iVar6;
                      uStack_7 = (undefined1)((uint)iVar6 >> 8);
                      uStack_6 = (undefined2)((uint)iVar6 >> 0x10);
                    } while (iVar6 != 0);
                  }
                  puVar8 = (ushort *)((int)puVar16 + 1);
                  *(char *)puVar16 = (char)iVar14 + -0x80;
                  if (0 < iVar14) {
                    do {
                      uVar2 = *puVar12;
                      puVar12 = (ushort *)((int)puVar12 + 1);
                      *(char *)puVar8 = (char)uVar2;
                      puVar8 = (ushort *)((int)puVar8 + 1);
                      iVar14 = iVar14 + -1;
                    } while (iVar14 != 0);
                  }
                }
                puVar12 = puVar13;
                puVar16 = puVar8;
              } while (puVar13 < puVar11);
            }
            local_3c = local_3c + 1;
            local_1c = (ushort *)((int)local_1c + param_4);
            local_24 = (ushort *)((int)local_24 + param_4);
          } while (local_3c < local_38);
        }
      }
      else if (param_5 == 2) {
        if (0x400 < param_8) {
          param_8 = 0x400;
        }
        local_3c = 0;
        if (0 < local_38) {
          local_44 = 0;
          do {
            local_1c = (ushort *)(local_28 + (int)local_24);
            puVar12 = local_24;
            if (local_24 < local_1c) {
              do {
                uVar2 = *puVar12;
                puVar16 = puVar12;
                if (puVar12 < local_1c) {
                  puVar11 = puVar12;
                  if ((local_1c <= puVar12 + 1) ||
                     (bVar3 = FUN_0047d130(uVar2,puVar12[1],0xffff,param_8), !bVar3)) {
                    do {
                      puVar16 = puVar11;
                      if (local_1c <= puVar16) break;
                      puVar11 = puVar16 + 1;
                    } while ((local_1c <= puVar11) ||
                            (bVar3 = FUN_0047d130(*puVar16,*puVar11,0xffff,param_8), !bVar3));
                    goto LAB_0047c612;
                  }
                  if (puVar12 < local_1c) {
                    do {
                      puVar11 = puVar16 + 1;
                      if ((local_1c <= puVar11) ||
                         (bVar3 = FUN_0047d130(uVar2,*puVar11,0xffff,param_8), !bVar3)) break;
                      puVar16 = puVar11;
                    } while (puVar11 < local_1c);
                    if (puVar16 < local_1c) {
                      puVar16 = puVar16 + 1;
                    }
                  }
                  iVar6 = (int)puVar16 - (int)puVar12 >> 1;
                  lVar1 = CONCAT44((int)puVar16 - (int)puVar12 >> 0x1f,iVar6) / 0x7fff;
                  iVar9 = (int)lVar1;
                  if (local_2c <= puVar8 + iVar9 * 2 + 2) {
                    iVar15 = (int)puVar8 - (int)local_20;
                    iVar14 = (int)puVar16 - (int)local_24;
                    GlobalUnlock((HGLOBAL)*param_6);
                    GlobalUnlock(param_2);
                    uVar5 = uVar5 + (local_40 - iVar14) / 2 + 2 + iVar9 * 2;
                    FUN_0043f7b0((HGLOBAL)*param_6,uVar5);
                    SVar10 = GlobalSize((HGLOBAL)*param_6);
                    if (SVar10 < uVar5) {
                      return 0x10000;
                    }
                    local_10 = GlobalLock((HGLOBAL)*param_6);
                    if (local_10 == (undefined1 *)0x0) {
                      return 0x10000;
                    }
                    local_20 = (ushort *)(local_10 + 0x14);
                    local_2c = (ushort *)(local_10 + uVar5);
                    puVar8 = (ushort *)(iVar15 + (int)local_20);
                    pvVar7 = GlobalLock(param_2);
                    if (pvVar7 == (LPVOID)0x0) {
                      return 0x10000;
                    }
                    local_24 = (ushort *)((int)pvVar7 + local_44 + local_34);
                    puVar16 = (ushort *)(iVar14 + (int)local_24);
                    local_1c = (ushort *)(local_28 + (int)local_24);
                  }
                  if (0 < iVar9) {
                    do {
                      *puVar8 = 0x7fff;
                      puVar8[1] = *puVar12;
                      puVar8 = puVar8 + 2;
                      iVar9 = iVar9 + -1;
                    } while (iVar9 != 0);
                  }
                  local_c = (short)iVar6;
                  *puVar8 = (short)lVar1 * -0x7fff + local_c;
                  puVar8[1] = *puVar12;
                  puVar8 = puVar8 + 2;
                }
                else {
LAB_0047c612:
                  iVar6 = (int)puVar16 - (int)puVar12 >> 1;
                  iVar9 = (int)(CONCAT44((int)puVar16 - (int)puVar12 >> 0x1f,iVar6) / 0x7fff);
                  iVar14 = iVar6 + iVar9 * -0x7fff;
                  if (local_2c <= puVar8 + iVar6 + iVar9 + 1) {
                    iVar17 = (int)puVar8 - (int)local_20;
                    iVar15 = (int)puVar16 - (int)local_24;
                    GlobalUnlock((HGLOBAL)*param_6);
                    GlobalUnlock(param_2);
                    uVar5 = uVar5 + (local_40 - iVar15) / 2 + iVar6 + iVar9 + 1;
                    FUN_0043f7b0((HGLOBAL)*param_6,uVar5);
                    SVar10 = GlobalSize((HGLOBAL)*param_6);
                    if (SVar10 < uVar5) {
                      return 0x10000;
                    }
                    local_10 = GlobalLock((HGLOBAL)*param_6);
                    if (local_10 == (undefined1 *)0x0) {
                      return 0x10000;
                    }
                    local_20 = (ushort *)(local_10 + 0x14);
                    local_2c = (ushort *)(local_10 + uVar5);
                    puVar8 = (ushort *)(iVar17 + (int)local_20);
                    pvVar7 = GlobalLock(param_2);
                    if (pvVar7 == (LPVOID)0x0) {
                      return 0x10000;
                    }
                    local_24 = (ushort *)((int)pvVar7 + local_44 + local_34);
                    puVar16 = (ushort *)(iVar15 + (int)local_24);
                    local_1c = (ushort *)(local_28 + (int)local_24);
                  }
                  if (0 < iVar9) {
                    do {
                      *puVar8 = 0xffff;
                      iVar6 = 0x7fff;
                      puVar8 = puVar8 + 1;
                      do {
                        uVar2 = *puVar12;
                        puVar12 = puVar12 + 1;
                        *puVar8 = uVar2;
                        puVar8 = puVar8 + 1;
                        iVar6 = iVar6 + -1;
                      } while (iVar6 != 0);
                      iVar9 = iVar9 + -1;
                    } while (iVar9 != 0);
                  }
                  *puVar8 = (short)iVar14 + 0x8000;
                  puVar8 = puVar8 + 1;
                  if (0 < iVar14) {
                    do {
                      uVar2 = *puVar12;
                      puVar12 = puVar12 + 1;
                      *puVar8 = uVar2;
                      puVar8 = puVar8 + 1;
                      iVar14 = iVar14 + -1;
                    } while (iVar14 != 0);
                  }
                }
                puVar12 = puVar16;
              } while (puVar16 < local_1c);
            }
            local_44 = local_44 + param_4;
            local_40 = local_40 - local_28;
            local_3c = local_3c + 1;
            local_24 = (ushort *)((int)local_24 + param_4);
          } while (local_3c < local_38);
        }
      }
      pcVar18 = (char *)((int)puVar8 + (0x14 - (int)local_20));
      FUN_0047cb00(local_10,param_4,(int)*(short *)(param_3 + 6) - (int)*(short *)(param_3 + 2),
                   (int)*(short *)(param_3 + 8) - (int)*(short *)(param_3 + 4),(short)param_5,
                   pcVar18,param_11);
      GlobalUnlock((HGLOBAL)*param_6);
      GlobalUnlock(param_2);
      FUN_0043f7b0((HGLOBAL)*param_6,(SIZE_T)pcVar18);
      *param_7 = pcVar18;
      return 0;
    }
  }
  return iVar6;
}


