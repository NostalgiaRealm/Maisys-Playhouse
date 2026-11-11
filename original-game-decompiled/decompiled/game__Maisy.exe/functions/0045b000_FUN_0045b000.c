
/* ==== FUN_0045b000 @ 0045b000 ==== 
 * signature: undefined __thiscall FUN_0045b000(void * this, void * param_1)
 * body: 0045b000-0045b456
 */

void __thiscall FUN_0045b000(void *this,void *param_1)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_138 [4];
  int local_128;
  short local_11c;
  undefined4 local_f0 [4];
  int local_e0;
  undefined4 local_d2;
  short local_cc;
  short local_c2;
  short local_c0;
  short local_be;
  short local_bc;
  undefined4 local_b8 [4];
  int local_a8;
  undefined4 local_9c;
  short local_98;
  short local_96;
  undefined4 local_94 [7];
  undefined4 local_78;
  short local_74;
  undefined4 local_70;
  short local_6c;
  int local_60;
  undefined4 local_5a;
  AFX_EXCEPTION_LINK local_50 [12];
  int local_44;
  undefined1 local_40 [2];
  short local_3e;
  undefined1 local_3c [2];
  short local_3a;
  undefined1 local_38 [2];
  short local_36;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  void *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0045b472;
  *unaff_FS_OFFSET = &local_10;
  DAT_004dbdc4 = 1;
  DAT_004dbdc0 = 1;
  local_14 = &stack0xfffffebc;
  local_1c = this;
  FUN_0045a440(this,'\x01');
  (**(code **)(**(int **)((int)local_1c + 0x48) + 0x15c))();
  FUN_00486e50(param_1,&local_70);
  if (local_6c == 0) {
    FUN_00486dd0(param_1,local_94,&local_70,0x22);
    local_20 = local_78;
    if ((local_74 == 0) || (local_74 == 4)) {
      local_18._0_2_ = 8;
      local_74 = (short)local_18;
    }
    local_18 = CONCAT22(local_18._2_2_,local_74);
  }
  else if ((local_6c == 1) || (local_6c == 0xf01)) {
    FUN_00486dd0(param_1,local_b8,&local_70,0x24);
    local_20 = local_9c;
    if ((local_98 == 0) || (local_98 == 4)) {
      local_18._0_2_ = 8;
      local_98 = (short)local_18;
    }
    local_18 = CONCAT22(local_18._2_2_,local_98);
    local_44 = local_a8;
    if (local_96 != 0) {
      FUN_00486d60(param_1,local_38,4);
      iVar2 = FUN_004a5fed((int)local_36 << 2);
      FUN_00486d60(param_1,iVar2,(int)local_36 << 2);
      *(int *)((int)local_1c + 0x9a) = iVar2;
    }
  }
  else if (local_6c == 2) {
    FUN_00486dd0(param_1,local_f0,&local_70,0x36);
    local_20 = local_d2;
    if ((local_cc == 0) || (local_cc == 4)) {
      local_18._0_2_ = 8;
      local_cc = (short)local_18;
    }
    local_18 = CONCAT22(local_18._2_2_,local_cc);
    sVar3 = 1;
    if (0 < local_be) {
      do {
        sVar3 = sVar3 + 1;
        FUN_004584a0(param_1);
      } while (sVar3 <= local_be);
    }
    sVar3 = 1;
    if (0 < local_c2) {
      do {
        sVar3 = sVar3 + 1;
        FUN_004584b0();
      } while (sVar3 <= local_c2);
    }
    sVar3 = 1;
    if (0 < local_c0) {
      do {
        sVar3 = sVar3 + 1;
        FUN_004584c0();
      } while (sVar3 <= local_c0);
    }
    local_44 = local_e0;
    if (local_bc != 0) {
      FUN_00486d60(param_1,local_40,4);
      iVar2 = FUN_004a5fed((int)local_3e << 2);
      FUN_00486d60(param_1,iVar2,(int)local_3e << 2);
      *(int *)((int)local_1c + 0x9a) = iVar2;
    }
  }
  else {
    FUN_00486dd0(param_1,local_138,&local_70,0x46);
    local_44 = local_128;
    if (local_11c != 0) {
      FUN_00486d60(param_1,local_3c,4);
      iVar2 = FUN_004a5fed((int)local_3a << 2);
      FUN_00486d60(param_1,iVar2,(int)local_3a << 2);
      *(int *)((int)local_1c + 0x9a) = iVar2;
    }
  }
  if (local_44 == 0x66633666) {
    local_18 = CONCAT13(1,(undefined3)local_18);
    if (1 < local_6c) {
      FUN_00486f00(param_1,local_6c);
    }
    do {
      AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_50);
      local_8 = 1;
      FUN_00486e50(param_1,&local_60);
      uVar1 = local_18;
      if (local_18._3_1_ != '\0') {
        if (local_60 == 3) {
          FUN_0045ad90(param_1,local_5a,&local_60);
        }
        else if (local_60 == 0xd) {
          local_34 = *(int **)((int)local_1c + 0x38);
          (**(code **)(*local_34 + 0xbc))(param_1,local_5a,&local_60);
        }
        else if (local_60 == 0x17) {
          local_30 = *(int **)((int)local_1c + 0x40);
          (**(code **)(*local_30 + 0xbc))(param_1,local_5a,&local_60);
        }
        else if (local_60 == 0x19) {
          local_2c = *(int **)((int)local_1c + 0x3c);
          (**(code **)(*local_2c + 0xbc))(param_1,local_5a,&local_60);
        }
        else if (local_60 == 2) {
          local_28 = *(int **)((int)local_1c + 0x66);
          (**(code **)(*local_28 + 0xbc))(param_1,local_5a,&local_60);
        }
        else if (local_60 == 0x22) {
          local_24 = *(int **)((int)local_1c + 0x44);
          (**(code **)(*local_24 + 0xbc))(param_1,local_5a,&local_60);
        }
        else {
          local_18 = local_18 & 0xffffff;
          if (local_60 != -1) {
            local_18 = uVar1 & 0xffffff;
          }
        }
        local_60 = 0;
      }
      local_8 = 0xffffffff;
      FUN_0045b47c();
    } while (local_18._3_1_ != '\0');
    if (((short)local_18 < 0) || (0x20 < (short)local_18)) {
      local_18 = local_18 & 0xffff0000;
    }
    FUN_0045a390(local_1c,local_20,(short)local_18);
  }
  DAT_004dbdc4 = 0;
  DAT_004dbdc0 = 0;
  *unaff_FS_OFFSET = local_10;
  return;
}


