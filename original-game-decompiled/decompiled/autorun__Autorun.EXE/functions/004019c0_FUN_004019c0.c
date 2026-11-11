
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


