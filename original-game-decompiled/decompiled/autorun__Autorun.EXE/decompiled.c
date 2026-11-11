/* Ghidra 12.1.4 generated C-like pseudocode for Autorun.EXE.
 * Not original source. Names and types are inferred unless a header says otherwise. Not verified to compile. */

/* ==== FUN_00401000 @ 00401000 ==== 
 * signature: undefined __stdcall FUN_00401000(void)
 * body: 00401000-00401082
 */

void FUN_00401000(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  DAT_00404370 = GlobalAlloc(2,0x10000);
  DAT_0040436c = GlobalLock(DAT_00404370);
  DAT_004043a8 = GlobalAlloc(2,0x8040);
  DAT_00404398 = GlobalLock(DAT_004043a8);
  DAT_00404388 = GlobalAlloc(2,0x400);
  DAT_00404374 = GlobalLock(DAT_00404388);
  *DAT_00404374 = 0;
  uVar1 = 1;
  do {
    iVar3 = 8;
    uVar2 = uVar1;
    do {
      if ((uVar2 & 1) == 0) {
        uVar2 = uVar2 >> 1;
      }
      else {
        uVar2 = uVar2 >> 1 ^ 0xedb88320;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    DAT_00404374[uVar1] = uVar2;
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0x100);
  return;
}



/* ==== FUN_00401083 @ 00401083 ==== 
 * signature: undefined __stdcall FUN_00401083(void)
 * body: 00401083-004010c3
 */

void FUN_00401083(void)

{
  GlobalUnlock(DAT_00404370);
  GlobalFree(DAT_00404370);
  GlobalUnlock(DAT_004043a8);
  GlobalFree(DAT_004043a8);
  GlobalUnlock(DAT_00404388);
  GlobalFree(DAT_00404388);
  return;
}



/* ==== FUN_004010c4 @ 004010c4 ==== 
 * signature: int __cdecl FUN_004010c4(uint * param_1)
 * body: 004010c4-00401168
 */

int __cdecl FUN_004010c4(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_004043ac;
  local_c = DAT_0040439c;
  FUN_00401d3d(1,&local_8,&local_c);
  *param_1 = local_8 & 1;
  FUN_00401d89(1,&local_8,(int *)&local_c);
  FUN_00401d3d(2,&local_8,&local_c);
  uVar2 = local_8 & 3;
  FUN_00401d89(2,&local_8,(int *)&local_c);
  DAT_004043ac = local_8;
  DAT_0040439c = local_c;
  if (uVar2 == 0) {
    iVar1 = FUN_004017c0();
  }
  else if (uVar2 == 1) {
    iVar1 = FUN_004018cc();
  }
  else if (uVar2 == 2) {
    iVar1 = FUN_004019c0();
  }
  else {
    iVar1 = -2;
  }
  return iVar1;
}



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



/* ==== FUN_00401520 @ 00401520 ==== 
 * signature: undefined __cdecl FUN_00401520(int param_1)
 * body: 00401520-00401538
 */

void __cdecl FUN_00401520(int param_1)

{
  while (param_1 != 0) {
    param_1 = *(int *)(param_1 + -8);
    FUN_00402185();
  }
  return;
}



/* ==== FUN_00401539 @ 00401539 ==== 
 * signature: undefined4 __cdecl FUN_00401539(int param_1, uint param_2, int param_3, uint param_4)
 * body: 00401539-004017bf
 */

undefined4 __cdecl FUN_00401539(int param_1,uint param_2,int param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  uVar2 = *(ushort *)(&DAT_00404158 + param_2 * 2);
  uVar3 = *(ushort *)(&DAT_00404158 + param_4 * 2);
  local_10 = DAT_00404384;
  local_8 = DAT_004043ac;
  local_c = DAT_0040439c;
  while( true ) {
    while( true ) {
      if (DAT_004042bc != 0) {
        return 0xffffffff;
      }
      FUN_00401d3d(param_2,&local_8,&local_c);
      piVar8 = (int *)(param_1 + (local_8 & uVar2) * 8);
      bVar1 = *(byte *)(param_1 + 7 + (local_8 & uVar2) * 8);
      while (uVar5 = (uint)bVar1, 0x10 < uVar5) {
        if (uVar5 == 0xff) {
          return 0xffffffff;
        }
        FUN_00401d89((uint)*(byte *)((int)piVar8 + 6),&local_8,(int *)&local_c);
        FUN_00401d3d(uVar5 - 0x10,&local_8,&local_c);
        iVar4 = *piVar8;
        piVar8 = (int *)(iVar4 + (*(ushort *)(&DAT_00404158 + (uVar5 - 0x10) * 2) & local_8) * 8);
        bVar1 = *(byte *)(iVar4 + 7 +
                         (*(ushort *)(&DAT_00404158 + (uVar5 - 0x10) * 2) & local_8) * 8);
      }
      FUN_00401d89((uint)*(byte *)((int)piVar8 + 6),&local_8,(int *)&local_c);
      if (uVar5 != 0x10) break;
      uVar5 = local_10 + 1;
      *(char *)(local_10 + DAT_0040436c) = (char)piVar8[1];
      local_10 = uVar5;
      if (uVar5 == 0x8000) {
        DAT_00404384 = 0x8000;
        FUN_00401d9a();
        local_10 = 0;
      }
    }
    if (uVar5 == 0xf) break;
    FUN_00401d3d(uVar5,&local_8,&local_c);
    uVar7 = (*(ushort *)(&DAT_00404158 + uVar5 * 2) & local_8) + (uint)*(ushort *)(piVar8 + 1);
    FUN_00401d89(uVar5,&local_8,(int *)&local_c);
    FUN_00401d3d(param_4,&local_8,&local_c);
    uVar5 = local_8 & uVar3;
    iVar4 = param_3;
    while( true ) {
      uVar6 = (uint)*(byte *)(iVar4 + 7 + uVar5 * 8);
      piVar8 = (int *)(iVar4 + uVar5 * 8);
      if (uVar6 < 0x11) break;
      if (uVar6 == 0xff) {
        return 0xffffffff;
      }
      FUN_00401d89((uint)*(byte *)((int)piVar8 + 6),&local_8,(int *)&local_c);
      FUN_00401d3d(uVar6 - 0x10,&local_8,&local_c);
      iVar4 = *piVar8;
      uVar5 = *(ushort *)(&DAT_00404158 + (uVar6 - 0x10) * 2) & local_8;
    }
    FUN_00401d89((uint)*(byte *)((int)piVar8 + 6),&local_8,(int *)&local_c);
    FUN_00401d3d(uVar6,&local_8,&local_c);
    local_14 = (local_10 - (*(ushort *)(&DAT_00404158 + uVar6 * 2) & local_8)) -
               (uint)*(ushort *)(piVar8 + 1);
    FUN_00401d89(uVar6,&local_8,(int *)&local_c);
    do {
      local_14 = local_14 & 0x7fff;
      uVar5 = local_10;
      if (local_10 < local_14) {
        uVar5 = local_14;
      }
      uVar6 = 0x8000 - uVar5;
      if (uVar7 < 0x8000 - uVar5) {
        uVar6 = uVar7;
      }
      uVar7 = uVar7 - uVar6;
      do {
        *(undefined1 *)(local_10 + DAT_0040436c) = *(undefined1 *)(local_14 + DAT_0040436c);
        local_10 = local_10 + 1;
        local_14 = local_14 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      if (local_10 == 0x8000) {
        DAT_00404384 = 0x8000;
        FUN_00401d9a();
        local_10 = 0;
      }
    } while (uVar7 != 0);
  }
  DAT_00404384 = local_10;
  DAT_0040439c = local_c;
  DAT_004043ac = local_8;
  return 0;
}



/* ==== FUN_004017c0 @ 004017c0 ==== 
 * signature: undefined4 __stdcall FUN_004017c0(void)
 * body: 004017c0-004018cb
 */

undefined4 FUN_004017c0(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint local_c;
  uint local_8;
  
  iVar2 = DAT_00404384;
  local_8 = DAT_004043ac;
  local_c = DAT_0040439c;
  FUN_00401d89(DAT_0040439c & 7,&local_8,(int *)&local_c);
  FUN_00401d3d(0x10,&local_8,&local_c);
  uVar3 = local_8 & 0xffff;
  FUN_00401d89(0x10,&local_8,(int *)&local_c);
  FUN_00401d3d(0x10,&local_8,&local_c);
  if (uVar3 == (~local_8 & 0xffff)) {
    FUN_00401d89(0x10,&local_8,(int *)&local_c);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (DAT_004042bc != 0) goto LAB_004018c7;
      FUN_00401d3d(8,&local_8,&local_c);
      *(undefined1 *)(iVar2 + DAT_0040436c) = (undefined1)local_8;
      iVar2 = iVar2 + 1;
      if (iVar2 == 0x8000) {
        DAT_00404384 = 0x8000;
        FUN_00401d9a();
        iVar2 = 0;
      }
      FUN_00401d89(8,&local_8,(int *)&local_c);
    }
    uVar1 = 0;
    DAT_00404384 = iVar2;
    DAT_0040439c = local_c;
    DAT_004043ac = local_8;
  }
  else {
LAB_004018c7:
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ==== FUN_004018cc @ 004018cc ==== 
 * signature: int __stdcall FUN_004018cc(void)
 * body: 004018cc-004019bf
 */

int FUN_004018cc(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint local_494 [144];
  undefined4 local_254 [112];
  undefined4 local_94 [24];
  undefined4 local_34 [8];
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  puVar3 = local_494;
  for (iVar1 = 0x90; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 8;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_254;
  for (iVar1 = 0x70; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 9;
    puVar2 = puVar2 + 1;
  }
  puVar2 = local_94;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 7;
    puVar2 = puVar2 + 1;
  }
  local_c = 7;
  puVar2 = local_34;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 8;
    puVar2 = puVar2 + 1;
  }
  iVar1 = FUN_00401169(0x120,0x101,local_494,0x404058,0x404098,&local_8,&local_c);
  if (iVar1 == 0) {
    puVar3 = local_494;
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 5;
      puVar3 = puVar3 + 1;
    }
    local_14 = 5;
    iVar1 = FUN_00401169(0x1e,0,local_494,0x4040d8,0x404118,&local_10,&local_14);
    if (iVar1 < -1) {
      FUN_00401520(local_8);
    }
    else {
      iVar1 = FUN_00401539(local_8,local_c,local_10,local_14);
      if (iVar1 == 0) {
        FUN_00401520(local_8);
        FUN_00401520(local_10);
        iVar1 = 0;
      }
      else {
        iVar1 = -1;
      }
    }
  }
  return iVar1;
}



/* ==== FUN_004019c0 @ 004019c0 ==== 
 * signature: int __stdcall FUN_004019c0(void)
 * body: 004019c0-00401d3c
 */

int FUN_004019c0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  uint local_51c [316];
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_004043ac;
  local_c = DAT_0040439c;
  FUN_00401d3d(5,&local_8,&local_c);
  uVar3 = (local_8 & 0x1f) + 0x101;
  FUN_00401d89(5,&local_8,(int *)&local_c);
  FUN_00401d3d(5,&local_8,&local_c);
  uVar5 = (local_8 & 0x1f) + 1;
  local_28 = uVar5;
  FUN_00401d89(5,&local_8,(int *)&local_c);
  FUN_00401d3d(4,&local_8,&local_c);
  uVar4 = (local_8 & 0xf) + 4;
  FUN_00401d89(4,&local_8,(int *)&local_c);
  if ((uVar3 < 0x11f) && (uVar5 < 0x1f)) {
    uVar5 = 0;
    if (uVar4 != 0) {
      piVar6 = &DAT_00404008;
      local_14 = uVar4;
      do {
        FUN_00401d3d(3,&local_8,&local_c);
        local_51c[*piVar6] = local_8 & 7;
        FUN_00401d89(3,&local_8,(int *)&local_c);
        piVar6 = piVar6 + 1;
        uVar4 = uVar4 - 1;
        uVar5 = local_14;
      } while (uVar4 != 0);
    }
    if (uVar5 < 0x13) {
      piVar6 = &DAT_00404008 + uVar5;
      do {
        iVar2 = *piVar6;
        piVar6 = piVar6 + 1;
        local_51c[iVar2] = 0;
      } while (piVar6 < &DAT_00404054);
    }
    local_18 = 7;
    iVar2 = FUN_00401169(0x13,0x13,local_51c,0,0,&local_10,&local_18);
    if (iVar2 == 0) {
      local_20 = 0;
      local_14 = local_28 + uVar3;
      local_2c = (uint)*(ushort *)(&DAT_00404158 + local_18 * 2);
      uVar4 = 0;
      if (local_14 != 0) {
        do {
          FUN_00401d3d(local_18,&local_8,&local_c);
          local_1c = local_10 + (local_8 & local_2c) * 8;
          FUN_00401d89((uint)*(byte *)(local_1c + 6),&local_8,(int *)&local_c);
          uVar5 = (uint)*(ushort *)(local_1c + 4);
          if (uVar5 < 0x10) {
            local_51c[uVar4] = uVar5;
            uVar4 = uVar4 + 1;
            local_20 = uVar5;
          }
          else if (uVar5 == 0x10) {
            FUN_00401d3d(2,&local_8,&local_c);
            iVar2 = (local_8 & 3) + 3;
            FUN_00401d89(2,&local_8,(int *)&local_c);
            uVar1 = local_20;
            uVar5 = uVar4 + iVar2;
            if (local_14 < uVar5) goto LAB_00401d35;
            if (iVar2 != 0) {
              puVar7 = local_51c + uVar4;
              for (; uVar4 = uVar5, iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar7 = uVar1;
                puVar7 = puVar7 + 1;
              }
            }
          }
          else {
            if (uVar5 == 0x11) {
              FUN_00401d3d(3,&local_8,&local_c);
              iVar2 = (local_8 & 7) + 3;
              iVar8 = 3;
            }
            else {
              FUN_00401d3d(7,&local_8,&local_c);
              iVar2 = (local_8 & 0x7f) + 0xb;
              iVar8 = 7;
            }
            FUN_00401d89(iVar8,&local_8,(int *)&local_c);
            uVar5 = uVar4 + iVar2;
            if (local_14 < uVar5) goto LAB_00401d35;
            if (iVar2 != 0) {
              puVar7 = local_51c + uVar4;
              for (; uVar4 = uVar5, iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar7 = 0;
                puVar7 = puVar7 + 1;
              }
            }
            local_20 = 0;
          }
        } while (uVar4 < local_14);
      }
      FUN_00401520(local_10);
      local_18 = DAT_0040417c;
      DAT_004043ac = local_8;
      DAT_0040439c = local_c;
      iVar2 = FUN_00401169(uVar3,0x101,local_51c,0x404058,0x404098,&local_10,&local_18);
      if (iVar2 == 0) {
        local_24 = DAT_00404180;
        iVar2 = FUN_00401169(local_28,0,local_51c + uVar3,0x4040d8,0x404118,&local_1c,&local_24);
        if (iVar2 == 0) {
          iVar2 = FUN_00401539(local_10,local_18,local_1c,local_24);
          if (iVar2 == 0) {
            FUN_00401520(local_10);
            FUN_00401520(local_1c);
            return 0;
          }
          goto LAB_00401d35;
        }
        FUN_00401520(local_10);
        local_10 = local_1c;
      }
    }
    if (iVar2 == -1) {
      FUN_00401520(local_10);
    }
  }
  else {
LAB_00401d35:
    iVar2 = -1;
  }
  return iVar2;
}



/* ==== FUN_00401d3d @ 00401d3d ==== 
 * signature: undefined __cdecl FUN_00401d3d(uint param_1, uint * param_2, uint * param_3)
 * body: 00401d3d-00401d88
 */

void __cdecl FUN_00401d3d(uint param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = *param_3;
  while (uVar1 < param_1) {
    if (DAT_0040437c < DAT_00404380) {
      uVar1 = (uint)*(byte *)(DAT_0040437c + DAT_00404398);
      DAT_0040437c = DAT_0040437c + 1;
    }
    else {
      uVar1 = FUN_00401e38();
    }
    *param_2 = *param_2 | (uVar1 & 0xff) << ((byte)*param_3 & 0x1f);
    *param_3 = *param_3 + 8;
    uVar1 = *param_3;
  }
  return;
}



/* ==== FUN_00401d89 @ 00401d89 ==== 
 * signature: undefined __cdecl FUN_00401d89(int param_1, uint * param_2, int * param_3)
 * body: 00401d89-00401d99
 */

void __cdecl FUN_00401d89(int param_1,uint *param_2,int *param_3)

{
  *param_2 = *param_2 >> ((byte)param_1 & 0x1f);
  *param_3 = *param_3 - param_1;
  return;
}



/* ==== FUN_00401d9a @ 00401d9a ==== 
 * signature: undefined __stdcall FUN_00401d9a(void)
 * body: 00401d9a-00401e37
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401d9a(void)

{
  int iVar1;
  byte *pbVar2;
  
  if (DAT_00404384 != 0) {
    if (DAT_0040432c == (byte *)0x0) {
      if ((DAT_004042d4._2_1_ & 1) != 0) {
        _DAT_004042b4 = _DAT_004042b4 + DAT_00404384;
      }
      iVar1 = (*DAT_00404344)(DAT_0040438c,DAT_0040436c,DAT_00404384);
      if (iVar1 != DAT_00404384) {
        DAT_004042bc = 1;
        DAT_004042c0 = 1;
      }
    }
    DAT_00404394 = FUN_004020b6(DAT_0040436c,DAT_00404384);
    if (DAT_0040432c == (byte *)0x0) {
      DAT_00404384 = 0;
    }
    else {
      pbVar2 = DAT_0040436c;
      if (DAT_00404384 != 0) {
        do {
          *DAT_0040432c = *pbVar2;
          DAT_0040432c = DAT_0040432c + 1;
          pbVar2 = pbVar2 + 1;
          DAT_00404384 = DAT_00404384 + -1;
        } while (DAT_00404384 != 0);
        return;
      }
    }
  }
  return;
}



/* ==== FUN_00401e38 @ 00401e38 ==== 
 * signature: uint __stdcall FUN_00401e38(void)
 * body: 00401e38-00401ef4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00401e38(void)

{
  UINT UVar1;
  int iVar2;
  UINT uBytes;
  
  if (DAT_004042bc == 0) {
    _DAT_004043b0 = 0;
    uBytes = 0x8000;
    if ((int)DAT_004043a4 < 0x8001) {
      uBytes = DAT_004043a4;
    }
    UVar1 = _lread(DAT_00404368,DAT_00404398,uBytes);
    if ((UVar1 != 0) && (UVar1 != 0xffffffff)) {
LAB_00401eca:
      DAT_004043a4 = DAT_004043a4 - UVar1;
      DAT_004042a8 = DAT_004042a8 + UVar1;
      DAT_0040437c = 1;
      DAT_00404380 = UVar1;
      return (uint)*DAT_00404398;
    }
    if ((DAT_00404290 != (code *)0x0) && (iVar2 = (*DAT_00404290)(DAT_004043a4,uBytes), iVar2 == 0))
    {
      DAT_00404368 = DAT_004042b8;
      _llseek(DAT_004042b8,DAT_004042a8 - _DAT_004042ac,0);
      UVar1 = _lread(DAT_00404368,DAT_00404398,uBytes);
      if ((UVar1 != 0) && (UVar1 != 0xffffffff)) goto LAB_00401eca;
    }
  }
  return 0xffffffff;
}



/* ==== FUN_00401ef5 @ 00401ef5 ==== 
 * signature: int __stdcall FUN_00401ef5(uint param_1, undefined4 param_2, uint param_3, uint * param_4)
 * body: 00401ef5-004020b5
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00401ef5(uint param_1,undefined4 param_2,uint param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_14 [3];
  ushort local_8;
  
  DAT_004043a4 = param_3;
  if (param_3 != 0) {
    uVar2 = param_1;
    if ((DAT_004042d4._1_1_ & 1) == 0) {
      DAT_004043a4 = param_3 - 4;
    }
    else {
      if ((param_1 == 0xffffffff) && (DAT_00404290 != (code *)0x0)) {
        iVar1 = (*DAT_00404290)(0,0);
        uVar2 = DAT_004042b8;
        if (iVar1 != 0) {
          return 0;
        }
        _llseek(DAT_004042b8,DAT_004042a8 - _DAT_004042ac,0);
      }
      _llseek(uVar2,0xe,1);
      _lread(uVar2,local_14,0x10);
      param_1 = local_14[0];
      _llseek(uVar2,(uint)local_8,1);
      DAT_004043a4 = DAT_004043a4 + (-0x1e - (uint)local_8);
    }
    if (DAT_004043a4 != 0) {
      DAT_00404394 = FUN_004020b6((byte *)0x0,0);
      DAT_0040438c = param_2;
      uVar3 = 0;
      DAT_0040439c = 0;
      DAT_00404380 = 0;
      DAT_0040437c = 0;
      DAT_00404384 = 0;
      DAT_004043ac = 0;
      DAT_00404368 = uVar2;
      do {
        if (DAT_00404340 != (code *)0x0) {
          (*DAT_00404340)(1);
        }
        DAT_00404360 = 0;
        iVar1 = FUN_004010c4(&param_3);
        if (iVar1 != 0) {
          if (DAT_004042bc == 0) {
            DAT_004042c0 = 2;
            return iVar1;
          }
          return iVar1;
        }
        if (uVar3 < DAT_00404360) {
          uVar3 = DAT_00404360;
        }
      } while (((param_3 == 0) && (DAT_004042bc == 0)) && (DAT_004042c0 == '\0'));
      if (7 < DAT_0040439c) {
        uVar2 = DAT_0040439c >> 3;
        do {
          DAT_0040439c = DAT_0040439c - 8;
          DAT_0040437c = DAT_0040437c + -1;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      FUN_00401d9a();
      if ((DAT_004042d4._1_1_ & 1) == 0) {
        _lread(DAT_00404368,&param_1,4);
      }
      if (((param_1 != DAT_00404394) && (DAT_004042bc == 0)) && (DAT_004042c0 == '\0')) {
        DAT_004042c0 = '\x02';
      }
      if (param_4 != (uint *)0x0) {
        *param_4 = param_1;
      }
      while (DAT_00404390 != 0) {
        FUN_00402185();
      }
    }
  }
  return 0;
}



/* ==== FUN_004020b6 @ 004020b6 ==== 
 * signature: uint __stdcall FUN_004020b6(byte * param_1, int param_2)
 * body: 004020b6-00402105
 */

uint FUN_004020b6(byte *param_1,int param_2)

{
  if (param_1 == (byte *)0x0) {
    DAT_00404000 = 0xffffffff;
  }
  else {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      DAT_00404000 = DAT_00404000 >> 8 ^
                     *(uint *)(DAT_00404374 + (DAT_00404000 & 0xff ^ (uint)*param_1) * 4);
      param_1 = param_1 + 1;
    }
  }
  return ~DAT_00404000;
}



/* ==== FUN_00402106 @ 00402106 ==== 
 * signature: undefined4 * __cdecl FUN_00402106(int param_1)
 * body: 00402106-00402184
 */

undefined4 * __cdecl FUN_00402106(int param_1)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  DAT_00404390 = DAT_00404390 + 1;
  if ((DAT_00404378 == (undefined4 *)0x0) ||
     (puVar2 = DAT_00404378, (int)DAT_00404364 + (0x7ff0 - (int)DAT_00404378) <= param_1)) {
    hMem = GlobalAlloc(2,0x7ff0);
    puVar1 = GlobalLock(hMem);
    puVar1[1] = 0;
    *puVar1 = hMem;
    puVar2 = puVar1;
    if ((DAT_004043a0 != (undefined4 *)0x0) &&
       (puVar2 = DAT_004043a0, DAT_00404364 != (undefined4 *)0x0)) {
      DAT_00404364[1] = puVar1;
      puVar2 = DAT_004043a0;
    }
    DAT_004043a0 = puVar2;
    puVar2 = puVar1 + 2;
    DAT_00404364 = puVar1;
  }
  DAT_00404378 = (undefined4 *)((int)puVar2 + param_1);
  return puVar2;
}



/* ==== FUN_00402185 @ 00402185 ==== 
 * signature: undefined __stdcall FUN_00402185(void)
 * body: 00402185-004021c4
 */

void FUN_00402185(void)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  
  DAT_00404390 = DAT_00404390 + -1;
  if ((DAT_00404390 == 0) && (puVar1 = DAT_004043a0, DAT_004043a0 != (undefined4 *)0x0)) {
    do {
      hMem = (HGLOBAL)*puVar1;
      puVar1 = (undefined4 *)puVar1[1];
      GlobalUnlock(hMem);
      GlobalFree(hMem);
    } while (puVar1 != (undefined4 *)0x0);
    DAT_00404378 = 0;
    DAT_00404364 = 0;
    DAT_004043a0 = (undefined4 *)0x0;
  }
  return;
}



/* ==== entry @ 004021c5 ==== 
 * signature: undefined4 __stdcall entry(void)
 * body: 004021c5-00402646;0040264a-00402669
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00402647-00402649
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 entry(void)

{
  char *pcVar1;
  char cVar2;
  ATOM AVar3;
  LONG LVar4;
  undefined2 extraout_var;
  HFILE HVar5;
  HMODULE pHVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined1 local_3b0 [128];
  CHAR local_330 [256];
  undefined1 local_230 [16];
  DWORD local_220;
  CHAR local_19c [128];
  CHAR local_11c [256];
  int local_1c;
  int local_18;
  HFILE local_14;
  HMODULE local_10;
  char *local_c;
  byte local_5;
  
  SetErrorMode(4);
  local_c = GetCommandLineA();
  cVar2 = *local_c;
  if (cVar2 == '\"') {
    cVar2 = local_c[1];
    pcVar9 = local_c;
    while ((local_c = pcVar9 + 1, cVar2 != '\0' && (cVar2 != '\"'))) {
      cVar2 = pcVar9[2];
      pcVar9 = local_c;
    }
    if (*local_c == '\"') {
      local_c = pcVar9 + 2;
    }
  }
  else {
    while ((cVar2 != '\0' && (cVar2 != ' '))) {
      pcVar9 = local_c + 1;
      local_c = local_c + 1;
      cVar2 = *pcVar9;
    }
  }
  cVar2 = *local_c;
  pcVar9 = local_c;
  while (cVar2 == ' ') {
    pcVar9 = pcVar9 + 1;
    cVar2 = *pcVar9;
  }
  local_c = pcVar9;
  local_10 = GetModuleHandleA((LPCSTR)0x0);
  if ((*pcVar9 == '/') && ((pcVar9[1] == 'S' || (pcVar9[1] == 's')))) {
    DAT_004042d0 = 1;
  }
  GetModuleFileNameA(local_10,local_330,0x100);
  cVar2 = *pcVar9;
  while ((cVar2 != '\0' && (cVar2 != '\x7f'))) {
    pcVar1 = pcVar9 + 1;
    pcVar9 = pcVar9 + 1;
    cVar2 = *pcVar1;
  }
  if (*pcVar9 != '\0') {
    *pcVar9 = '\0';
    iVar8 = 0;
    while( true ) {
      cVar2 = pcVar9[1];
      if ((cVar2 == '\0') || (cVar2 == ' ')) break;
      iVar8 = cVar2 + -0x30 + iVar8 * 10;
      pcVar9 = pcVar9 + 1;
    }
    DAT_00404188 = DAT_00404188 + iVar8;
    lstrcpyA(local_330,pcVar9 + 2);
  }
  DAT_004042b8 = _lopen(local_330,0);
  if ((int)DAT_004042b8 < 0) {
LAB_004024c2:
    FUN_00402b7c();
    return 0;
  }
  FUN_00401000();
  _DAT_004042b0 = DAT_00404188;
  DAT_004042a8 = DAT_00404188;
  _llseek(DAT_004042b8,DAT_00404188,0);
  _lread(DAT_004042b8,&local_5,1);
  if (local_5 != 0) {
    _lread(DAT_004042b8,local_11c,(uint)local_5);
    _lread(DAT_004042b8,&local_1c,4);
    local_14 = _lopen(local_11c,0);
    if (local_14 < 0) {
      local_11c[0] = '\0';
    }
    else {
      LVar4 = _llseek(local_14,0,2);
      if (local_1c != LVar4) {
        local_11c[0] = '\0';
      }
      _lclose(local_14);
    }
  }
  _lread(DAT_004042b8,&DAT_004042d4,4);
  _lread(DAT_004042b8,&DAT_00404350,0xc);
  _lread(DAT_004042b8,&DAT_0040431c,8);
  _lread(DAT_004042b8,&DAT_004042e4,0x38);
  if ((DAT_004042d4 & 0x1000) != 0) {
    DAT_004042d8 = 1;
  }
  if ((((DAT_004042d4 & 0x80) != 0) && (DAT_004042d0 == 0)) && (((byte)DAT_004042d4 & 3) != 2)) {
    FUN_00402b95();
  }
  pHVar6 = local_10;
  AVar3 = FUN_0040266a(local_10);
  if (CONCAT22(extraout_var,AVar3) == 0) {
    return 0;
  }
  iVar8 = FUN_004026c9(pHVar6);
  if (iVar8 == 0) {
    return 0;
  }
  _DAT_004042a0 = DAT_0040428c;
  _DAT_004042a4 = pHVar6;
  if (DAT_00404318 != 0) {
    local_14 = _llseek(DAT_004042b8,0,1);
    LVar4 = _llseek(DAT_004042b8,0,2);
    _llseek(DAT_004042b8,local_14,0);
    if (LVar4 != DAT_00404318) goto LAB_004024c2;
  }
  _DAT_00404330 = FUN_00401ef5;
  _DAT_00404334 = FUN_004020b6;
  _DAT_00404324 = GlobalAlloc(2,DAT_004042e4 + 1);
  _DAT_00404328 = GlobalLock(_DAT_00404324);
  DAT_00404344 = _StubFileWrite_12;
  DAT_0040432c = _DAT_00404328;
  FUN_00401ef5(DAT_004042b8,0,DAT_004042e8,(uint *)0x0);
  DAT_0040432c = (LPVOID)0x0;
  if (local_5 == 0) {
    FUN_00402b1b(local_11c);
    HVar5 = _lcreat(local_11c,0);
    _lclose(HVar5);
    HVar5 = _lopen(local_11c,2);
    if (HVar5 < 0) goto LAB_004024c2;
    FUN_00401ef5(DAT_004042b8,HVar5,DAT_004042ec,(uint *)0x0);
    _lclose(HVar5);
  }
  local_18 = 1;
  local_19c[0] = '\0';
  if (DAT_004042c0 == '\0') {
    pHVar6 = LoadLibraryA(local_11c);
    if (pHVar6 != (HMODULE)0x0) {
      DAT_0040435c = GetProcAddress(pHVar6,s_WiseMain_0040424c);
      DAT_00404340 = GetProcAddress(pHVar6,s_UpdateScreen_0040423c);
      DAT_0040433c = GetProcAddress(pHVar6,s_DisplayGraphics_0040422c);
      DAT_00404290 = GetProcAddress(pHVar6,s_DiskPrompt_00404220);
      DAT_00404344 = GetProcAddress(pHVar6,s_FileWrite_00404214);
      DAT_0040434c = GetProcAddress(pHVar6,s_HandleFtp_00404208);
    }
    if (DAT_0040435c == (FARPROC)0x0) {
      pcVar9 = s_Demo_installations_only_run_on_t_004041c4;
      if (local_5 == 0) {
        pcVar9 = s_System_DLLs_corrupt_or_missing__004041a4;
      }
      MessageBoxA(DAT_0040428c,pcVar9,s_Install_0040419c,0);
    }
    else {
      uVar7 = (*DAT_0040435c)(&DAT_004042a0,local_c,&local_18,local_19c,local_3b0);
      local_10 = (HMODULE)(uVar7 & 0xffff);
      FreeLibrary(pHVar6);
    }
  }
  else {
    FUN_00402b7c();
  }
  FUN_00401083();
  if (local_5 == 0) {
    OpenFile(local_11c,(LPOFSTRUCT)(local_230 + 0xc),0x200);
  }
  if (DAT_00404348 != (HGDIOBJ)0x0) {
    DeleteObject(DAT_00404348);
  }
  if (local_18 != 1) {
    local_230._0_4_ = 0x94;
    GetVersionExA((LPOSVERSIONINFOA)local_230);
    ExitWindowsEx(-(uint)(local_220 != 2) & 2,0);
  }
  if (local_19c[0] != '\0') {
    WinExec(local_19c,5);
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess((UINT)local_10);
}



/* ==== FUN_0040266a @ 0040266a ==== 
 * signature: ATOM __cdecl FUN_0040266a(HINSTANCE param_1)
 * body: 0040266a-004026c8
 */

ATOM __cdecl FUN_0040266a(HINSTANCE param_1)

{
  ATOM AVar1;
  WNDCLASSA local_2c;
  
  local_2c.style = 0;
  local_2c.lpfnWndProc = _MainWndProc_16;
  local_2c.cbClsExtra = 0;
  local_2c.cbWndExtra = 0;
  local_2c.hInstance = param_1;
  local_2c.hIcon = LoadIconA(param_1,(LPCSTR)0x6c);
  local_2c.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_2c.hbrBackground = GetStockObject(0);
  local_2c.lpszClassName = PTR_s_GLBSInstall_0040418c;
  local_2c.lpszMenuName = (LPCSTR)0x0;
  AVar1 = RegisterClassA(&local_2c);
  return AVar1;
}



/* ==== FUN_004026c9 @ 004026c9 ==== 
 * signature: undefined4 __cdecl FUN_004026c9(HINSTANCE param_1)
 * body: 004026c9-004027dc
 */

undefined4 __cdecl FUN_004026c9(HINSTANCE param_1)

{
  HDC hdc;
  int nCmdShow;
  
  DAT_0040428c = CreateWindowExA(0,PTR_s_GLBSInstall_0040418c,&DAT_00404258,
                                 (-(uint)((DAT_004042d4 & 8) != 0) & 0x80c90000) + 0x80040000,
                                 -0x80000000,0,-0x80000000,0,(HWND)0x0,(HMENU)0x0,param_1,
                                 (LPVOID)0x0);
  if (DAT_0040428c == (HWND)0x0) {
    return 0;
  }
  hdc = GetDC(DAT_0040428c);
  DAT_004042c4 = GetDeviceCaps(hdc,8);
  DAT_004042c8 = GetDeviceCaps(hdc,10);
  ReleaseDC(DAT_0040428c,hdc);
  if (DAT_004042d0 == 0) {
    if ((DAT_004042d4 & 3) == 0) {
      nCmdShow = 3;
    }
    else {
      if ((DAT_004042d4 & 3) != 1) goto LAB_00402798;
      DAT_004042c8 = (DAT_004042c8 * 3) / 4;
      SetWindowPos(DAT_0040428c,(HWND)0x0,0,0,DAT_004042c4,DAT_004042c8,4);
      nCmdShow = 5;
    }
    ShowWindow(DAT_0040428c,nCmdShow);
  }
LAB_00402798:
  if ((DAT_004042d0 != 0) || (((byte)DAT_004042d4 & 3) == 2)) {
    SetWindowPos(DAT_0040428c,(HWND)0x0,0,0,DAT_004042c4,DAT_004042c8,4);
  }
  FUN_004027dd();
  UpdateWindow(DAT_0040428c);
  return 1;
}



/* ==== FUN_004027dd @ 004027dd ==== 
 * signature: undefined __stdcall FUN_004027dd(void)
 * body: 004027dd-00402804
 */

void FUN_004027dd(void)

{
  tagRECT local_14;
  
  GetClientRect(DAT_0040428c,&local_14);
  DAT_004042c4 = local_14.right;
  DAT_004042c8 = local_14.bottom;
  return;
}



/* ==== _MainWndProc@16 @ 00402805 ==== 
 * signature: UINT __stdcall _MainWndProc@16(HWND param_1, uint param_2, HWND param_3, HPALETTE param_4)
 * body: 00402805-00402b1a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UINT _MainWndProc_16(HWND param_1,uint param_2,HWND param_3,HPALETTE param_4)

{
  HDC pHVar1;
  int iVar2;
  COLORREF color;
  HBRUSH h;
  HGDIOBJ h_00;
  HPALETTE pHVar3;
  UINT UVar4;
  int *piVar5;
  uint uVar6;
  tagPAINTSTRUCT local_68;
  int local_24;
  int local_1c;
  int local_18;
  undefined1 local_14;
  undefined1 local_10;
  uint local_c;
  HDC local_8;
  
                    /* 0x2805  1  _MainWndProc@16 */
  if (param_2 < 6) {
    if (param_2 == 5) {
      InvalidateRect(param_1,(RECT *)0x0,1);
    }
    else {
      if (param_2 != 2) goto LAB_00402b0b;
      PostQuitMessage(0);
    }
  }
  else if (param_2 < 0x15) {
    if (param_2 == 0x14) {
      return 1;
    }
    if (param_2 != 0xf) {
LAB_00402b0b:
      UVar4 = DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      return UVar4;
    }
    pHVar1 = BeginPaint(param_1,&local_68);
    local_8 = pHVar1;
    FUN_004027dd();
    if (DAT_00404348 != (HPALETTE)0x0) {
      param_4 = SelectPalette(pHVar1,DAT_00404348,0);
      RealizePalette(pHVar1);
    }
    if ((DAT_004042d8 & 3) == 0) {
      local_1c = -1;
      uVar6 = 0;
      do {
        local_c = uVar6 + 1;
        piVar5 = &local_18;
        param_3 = (HWND)&DAT_00404350;
        param_2 = 3;
        do {
          iVar2 = (int)((int)*(short *)((int)&param_3[1].unused + 2) * uVar6) / 0x5f +
                  (int)(short)param_3->unused;
          *piVar5 = iVar2;
          if (iVar2 < 0) {
            *piVar5 = 0;
          }
          if (0xff < *piVar5) {
            *piVar5 = 0xff;
          }
          param_3 = (HWND)((int)&param_3->unused + 2);
          piVar5 = piVar5 + 1;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
        if (DAT_00404348 == (HPALETTE)0x0) {
          color = (COLORREF)CONCAT21(CONCAT11(local_10,local_14),(undefined1)local_18);
        }
        else {
          color = uVar6 & 0xffff | 0x1000000;
        }
        local_24 = local_1c;
        local_1c = (int)(DAT_004042c8 * (uVar6 + 1)) / 0x60;
        h = CreateSolidBrush(color);
        pHVar1 = local_8;
        h_00 = SelectObject(local_8,h);
        PatBlt(pHVar1,0,local_24,DAT_004042c4,local_1c - local_24,0xf00021);
        SelectObject(pHVar1,h_00);
        DeleteObject(h);
        uVar6 = local_c;
      } while ((int)local_c < 0x60);
    }
    if (DAT_00404348 != (HPALETTE)0x0) {
      SelectPalette(pHVar1,param_4,1);
    }
    if (DAT_0040433c != (code *)0x0) {
      (*DAT_0040433c)(param_1,pHVar1);
    }
    EndPaint(param_1,&local_68);
  }
  else if (param_2 == 0x112) {
    if (param_3 != (HWND)0xf060) {
      param_2 = 0x112;
      goto LAB_00402b0b;
    }
    DAT_004042bc = 1;
  }
  else if (param_2 == 0x113) {
    if (param_3 == (HWND)0x2069) {
      _DAT_004042cc = 0;
    }
    else {
      (*DAT_00404340)(0);
    }
  }
  else {
    if (param_2 != 0x30f) {
      if (param_2 != 0x311) {
        if (0x400 < param_2) {
          if (param_2 < 0x403) {
            if (DAT_0040434c == (code *)0x0) {
              return 0;
            }
            (*DAT_0040434c)(param_2,param_3,param_4);
            return 0;
          }
          if (param_2 == 0x4c8) {
            if (param_4 != (HPALETTE)0x20d) {
              return 0;
            }
            if ((DAT_004042d8 & 4) == 0) {
              UVar4 = 0x10;
            }
            else {
              UVar4 = 0x806;
            }
            SendMessageA(param_3,UVar4,0,0);
            return 0;
          }
        }
        goto LAB_00402b0b;
      }
      if (param_3 == param_1) {
        return 0;
      }
    }
    if ((DAT_004042dc != (HPALETTE)0x0) || (DAT_00404348 != (HPALETTE)0x0)) {
      pHVar3 = DAT_004042dc;
      if (DAT_004042dc == (HPALETTE)0x0) {
        pHVar3 = DAT_00404348;
      }
      pHVar1 = GetDC(param_1);
      pHVar3 = SelectPalette(pHVar1,pHVar3,0);
      UVar4 = RealizePalette(pHVar1);
      if (UVar4 != 0) {
        InvalidateRect(param_1,(RECT *)0x0,1);
      }
      SelectPalette(pHVar1,pHVar3,1);
      RealizePalette(pHVar1);
      ReleaseDC(param_1,pHVar1);
      return UVar4;
    }
  }
  return 0;
}



/* ==== FUN_00402b1b @ 00402b1b ==== 
 * signature: undefined __cdecl FUN_00402b1b(LPSTR param_1)
 * body: 00402b1b-00402b7b
 */

void __cdecl FUN_00402b1b(LPSTR param_1)

{
  int iVar1;
  HFILE HVar2;
  uint uVar3;
  LPSTR pCVar4;
  _OFSTRUCT local_8c;
  
  GetWindowsDirectoryA(param_1,0x100);
  uVar3 = 0;
  iVar1 = lstrlenA(param_1);
  pCVar4 = param_1 + iVar1 + -1;
  if (param_1[iVar1 + -1] != '\\') {
    pCVar4 = pCVar4 + 1;
  }
  do {
    wsprintfA(pCVar4,s___GLC_04x_TMP_0040425c,uVar3 & 0xffff);
    uVar3 = uVar3 + 1;
    HVar2 = OpenFile(param_1,&local_8c,0x4000);
  } while (HVar2 != -1);
  return;
}



/* ==== FUN_00402b7c @ 00402b7c ==== 
 * signature: undefined __stdcall FUN_00402b7c(void)
 * body: 00402b7c-00402b94
 */

void FUN_00402b7c(void)

{
  MessageBoxA(DAT_0040428c,s_Corrupt_installation_detected__0040426c,s_Install_0040419c,0);
  return;
}



/* ==== FUN_00402b95 @ 00402b95 ==== 
 * signature: undefined __stdcall FUN_00402b95(void)
 * body: 00402b95-00402cdb
 */

void FUN_00402b95(void)

{
  HPALETTE ho;
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LOGPALETTE *plpal;
  BYTE *pBVar4;
  int *piVar5;
  int local_24;
  BYTE local_20;
  BYTE local_1c;
  int local_18;
  int local_14;
  int local_10;
  HDC local_c;
  short *local_8;
  
  if (((DAT_00404356 != 0) || (DAT_00404358 != 0)) || (DAT_0040435a != 0)) {
    local_c = GetDC(DAT_0040428c);
    iVar1 = GetDeviceCaps(local_c,0xc);
    iVar2 = GetDeviceCaps(local_c,0xe);
    if (7 < (short)((short)iVar1 * (short)iVar2)) {
      pvVar3 = GlobalAlloc(0x42,0x184);
      plpal = GlobalLock(pvVar3);
      local_10 = 0;
      plpal->palNumEntries = 0x60;
      plpal->palVersion = 0x300;
      pBVar4 = &plpal->palPalEntry[0].peGreen;
      local_18 = 0x60;
      do {
        piVar5 = &local_24;
        local_8 = &DAT_00404350;
        local_14 = 3;
        do {
          iVar1 = (local_8[3] * local_10) / 0x5f + (int)*local_8;
          *piVar5 = iVar1;
          if (iVar1 < 0) {
            *piVar5 = 0;
          }
          if (0xff < *piVar5) {
            *piVar5 = 0xff;
          }
          local_8 = local_8 + 1;
          piVar5 = piVar5 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        local_10 = local_10 + 1;
        ((PALETTEENTRY *)(pBVar4 + -1))->peRed = (BYTE)local_24;
        *pBVar4 = local_20;
        pBVar4[1] = local_1c;
        pBVar4[2] = '\0';
        ho = DAT_00404348;
        pBVar4 = pBVar4 + 4;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      DAT_00404348 = CreatePalette(plpal);
      pvVar3 = GlobalHandle(plpal);
      GlobalFree(pvVar3);
      SelectPalette(local_c,DAT_00404348,0);
      if (ho != (HPALETTE)0x0) {
        DeleteObject(ho);
      }
      RealizePalette(local_c);
    }
    ReleaseDC(DAT_0040428c,local_c);
  }
  return;
}



/* ==== _StubFileWrite@12 @ 00402cdc ==== 
 * signature: undefined __stdcall _StubFileWrite@12(HFILE param_1, LPCCH param_2, UINT param_3)
 * body: 00402cdc-00402cf0
 */

void _StubFileWrite_12(HFILE param_1,LPCCH param_2,UINT param_3)

{
                    /* 0x2cdc  2  _StubFileWrite@12 */
  _lwrite(param_1,param_2,param_3);
  return;
}


