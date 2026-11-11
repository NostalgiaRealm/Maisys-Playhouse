
/* ==== FUN_00438110 @ 00438110 ==== 
 * signature: undefined __thiscall FUN_00438110(void * this, undefined4 param_1, uint param_2)
 * body: 00438110-004383d6
 */

void __thiscall FUN_00438110(void *this,undefined4 param_1,uint param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_EBP;
  byte *pbVar9;
  undefined4 uVar10;
  short sVar11;
  char *pcVar12;
  char local_88 [32];
  char local_68 [32];
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  undefined2 local_30;
  undefined2 uStack_2e;
  undefined2 local_2c;
  undefined2 uStack_2a;
  undefined2 local_28;
  undefined2 uStack_26;
  int local_24;
  undefined4 local_20;
  code *local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  int *local_c;
  uint local_5;
  undefined1 uStack_1;
  
  uStack_1 = (undefined1)((uint)unaff_EBP >> 0x18);
  local_5 = CONCAT31((int3)unaff_EBP,(char)param_2) & 0xffffff01;
  uVar7 = 0x10;
  sVar11 = 0;
  if (1 < *(int *)((int)this + 0x7236)) {
    piVar4 = (int *)((int)this + 0x25c);
    local_18 = *(int *)((int)this + 0x7236) + -1;
    do {
      iVar6 = *piVar4;
      if (0 < iVar6) {
        pbVar9 = (byte *)(piVar4[1] + 0x78);
        uVar8 = uVar7;
        do {
          if ((((*pbVar9 & 8) != 0) && ((*pbVar9 & 0x10) == 0)) || (0 < *(int *)(pbVar9 + 4))) {
            sVar11 = sVar11 + 1;
          }
          uVar7 = uVar8 + 0x14;
          if ((*pbVar9 & 8) == 0) {
            uVar7 = uVar8 + 0x54;
          }
          pbVar9 = pbVar9 + 0x80;
          iVar6 = iVar6 + -1;
          uVar8 = uVar7;
        } while (iVar6 != 0);
      }
      piVar4 = piVar4 + 0x49;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  if ((char)local_5 == '\0') {
    local_c = *(int **)((int)this + 0x723c);
    uVar10 = *(undefined4 *)((int)this + 0x7240);
  }
  else {
    local_c = *(int **)((int)this + 0x7244);
    uVar10 = *(undefined4 *)((int)this + 0x7248);
  }
  local_20 = 0;
  local_14 = *local_c;
  local_10 = this;
  cVar1 = (**(code **)(local_14 + 0xf8))();
  local_18 = CONCAT13(cVar1,(undefined3)local_18);
  if (cVar1 == '\0') {
    FUN_00486ae0(local_c,0);
  }
  else {
    (**(code **)(local_14 + 0x144))(&local_20);
  }
  local_34 = 0;
  local_30 = 0;
  uStack_2e = 0;
  local_2c = 0;
  uStack_2a = 0;
  local_28 = 0;
  uStack_26 = 0;
  uVar7 = FUN_0044ae60((char)local_5,uVar7);
  uStack_2a = (undefined2)uVar7;
  local_28 = (undefined2)(uVar7 >> 0x10);
  local_30 = FUN_0044aea0((char)local_5,1);
  uVar7 = FUN_0044ae60((char)local_5,param_2);
  uStack_2e = (undefined2)uVar7;
  local_2c = (undefined2)(uVar7 >> 0x10);
  local_34 = FUN_0044ae60((char)local_5,0x2b);
  uStack_26 = FUN_0044aea0((char)local_5,sVar11);
  local_1c = *(code **)(local_14 + 0x148);
  (*local_1c)(uVar10);
  (**(code **)(local_14 + 0x158))(&local_34,0x10);
  local_14 = 1;
  if (1 < *(int *)((int)local_10 + 0x7236)) {
    piVar4 = (int *)((int)local_10 + 0x260);
    do {
      local_24 = 0;
      if (0 < piVar4[-1]) {
        iVar6 = 0;
        do {
          iVar3 = *piVar4 + iVar6;
          if ((((*(byte *)(iVar3 + 0x78) & 8) != 0) && ((*(byte *)(iVar3 + 0x78) & 0x10) == 0)) ||
             (0 < *(int *)(iVar3 + 0x7c))) {
            local_44 = 0;
            local_40 = 0;
            local_3c = 0;
            local_38 = 0;
            local_48._1_3_ = 0;
            local_48[0] = (*(byte *)(iVar3 + 0x78) & 8) >> 3;
            FUN_004374c0((undefined4 *)(local_48 + 1),(undefined4 *)(iVar3 + 0x14));
            uVar2 = FUN_0044aea0((char)local_5,*(undefined2 *)(*piVar4 + 0x46 + iVar6));
            local_38 = CONCAT22(uVar2,(undefined2)local_38);
            FUN_00486d80(local_c,local_48,0x14);
            iVar3 = *piVar4;
            if ((*(byte *)(iVar3 + iVar6 + 0x78) & 8) == 0) {
              pcVar12 = local_88;
              for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
                pcVar12[0] = '\0';
                pcVar12[1] = '\0';
                pcVar12[2] = '\0';
                pcVar12[3] = '\0';
                pcVar12 = pcVar12 + 4;
              }
              _strncpy(local_68,*(char **)((int)local_10 +
                                          *(short *)(iVar3 + iVar6 + 0x4c) * 0x124 + 0x26),0x10);
              FUN_00486d80(local_c,local_88,0x40);
            }
          }
          iVar6 = iVar6 + 0x80;
          local_24 = local_24 + 1;
        } while (local_24 < piVar4[-1]);
      }
      piVar4 = piVar4 + 0x49;
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)((int)local_10 + 0x7236));
  }
  if (local_18._3_1_ != '\0') {
    (*local_1c)(local_20);
    return;
  }
  FUN_00486ce0((int)local_c);
  return;
}


