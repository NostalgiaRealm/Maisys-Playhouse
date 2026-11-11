
/* ==== FUN_0045d990 @ 0045d990 ==== 
 * signature: undefined4 __fastcall FUN_0045d990(int * param_1)
 * body: 0045d990-0045dde2
 */

undefined4 __fastcall FUN_0045d990(int *param_1)

{
  int *this;
  undefined4 uVar1;
  undefined4 unaff_EBP;
  int iVar2;
  uint local_ac [4];
  undefined4 local_9c [2];
  undefined4 local_94 [2];
  uint local_8a;
  undefined2 uStack_84;
  undefined2 local_82;
  undefined2 uStack_80;
  undefined2 local_7e;
  undefined2 uStack_7c;
  undefined2 local_7a;
  undefined2 uStack_78;
  uint local_76;
  undefined4 local_70 [4];
  uint local_5e;
  undefined1 local_58;
  undefined2 local_56;
  undefined4 local_54;
  uint local_50 [3];
  uint local_44 [3];
  short local_38;
  short sStack_36;
  short sStack_34;
  short sStack_32;
  short sStack_30;
  short local_2e;
  short sStack_2c;
  short local_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  uint local_20;
  undefined1 local_1c [6];
  undefined4 uStack_16;
  code *local_10;
  undefined2 local_c;
  short sStack_a;
  undefined2 uStack_8;
  ushort local_6;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  uStack_4 = (undefined2)unaff_EBP;
  uStack_2 = (undefined2)((uint)unaff_EBP >> 0x10);
  this = (int *)(**(code **)(*param_1 + 0x118))(1,1,1);
  if (this == (int *)0x0) {
    return 0x10000;
  }
  (**(code **)(*this + 0x148))(*(undefined4 *)((int)param_1 + 0x42));
  (**(code **)(*this + 0x134))(local_ac);
  FUN_004819f0(this,local_ac,&local_20,(undefined2 *)local_1c,(uint *)(local_1c + 2),&uStack_16);
  sStack_30 = SUB42(local_1c._0_4_,2);
  sStack_36 = (short)local_20;
  sStack_34 = (short)(local_20 >> 0x10);
  local_2e = (short)stack0xffffffe8;
  sStack_2c = (short)((uint)stack0xffffffe8 >> 0x10);
  if (local_1c._0_2_ == 0) {
    local_2a = uStack_16._2_2_;
    sStack_32 = local_1c._0_2_;
    (**(code **)(*this + 0x138))(&sStack_36,0x14);
    FUN_00481b90(this,&local_6,uStack_28);
    FUN_00481b90(this,(undefined2 *)(param_1 + 0xf),uStack_26);
    iVar2 = 1;
    FUN_00481b90(this,(undefined2 *)((int)param_1 + 0x36),uStack_24);
    if (local_6 != 0) {
      local_10 = *(code **)(*this + 0x130);
      uVar1 = *(undefined4 *)(*this + 0x13c);
      local_c = (undefined2)uVar1;
      sStack_a = (short)((uint)uVar1 >> 0x10);
      do {
        iVar2 = iVar2 + 1;
        (*local_10)(local_94,0x22);
        FUN_004374c0(local_70,local_94);
        FUN_00481bc0(this,&local_5e,CONCAT22(uStack_80,local_82));
        FUN_00481bc0(this,local_50 + 2,CONCAT22(uStack_78,local_7a));
        FUN_00481bc0(this,local_44,local_76);
        local_50[0] = 0;
        local_50[1] = 0;
        local_44[1] = 0;
        local_58 = 0;
        local_56 = 1;
        (*(code *)CONCAT22(sStack_a,local_c))(uStack_7c);
        local_54 = 0;
        (**(code **)(**(int **)((int)param_1 + 0x2e) + 0xe8))(local_70);
      } while (iVar2 <= (int)(uint)local_6);
    }
  }
  else {
    local_38 = sStack_36;
    sStack_36 = sStack_34;
    sStack_34 = local_1c._0_2_;
    sStack_32 = sStack_30;
    sStack_30 = local_2e;
    local_2e = sStack_2c;
    if ((local_1c._0_2_ == 1) || (local_1c._0_2_ == 2)) {
      sStack_2c = uStack_16._2_2_;
      (**(code **)(*this + 0x138))(&local_38,0x16);
      FUN_00481b90(this,&local_6,local_2a);
      FUN_00481b90(this,(undefined2 *)(param_1 + 0xf),uStack_28);
      FUN_00481b90(this,(undefined2 *)((int)param_1 + 0x36),uStack_26);
      iVar2 = 1;
      FUN_00481b90(this,&sStack_a,uStack_24);
      if (local_6 != 0) {
        local_10 = *(code **)(*this + 0x130);
        do {
          iVar2 = iVar2 + 1;
          (*local_10)(local_94,0x22);
          FUN_004374c0(local_70,local_94);
          FUN_00481bc0(this,&local_5e,CONCAT22(uStack_80,local_82));
          FUN_00481bc0(this,local_50 + 2,CONCAT22(uStack_78,local_7a));
          FUN_00481bc0(this,local_44,local_76);
          local_50[0] = 0;
          local_50[1] = 0;
          FUN_00481b90(this,&local_56,uStack_7c);
          local_44[1] = 0;
          local_58 = 0;
          local_54 = 0;
          (**(code **)(**(int **)((int)param_1 + 0x2e) + 0xe8))(local_70);
        } while (iVar2 <= (int)(uint)local_6);
      }
      if (sStack_a != 0) {
        uVar1 = CONCAT22(uStack_8,sStack_a);
        goto LAB_0045dda2;
      }
    }
    else {
      sStack_2c = uStack_16._2_2_;
      (**(code **)(*this + 0x138))(&local_38,0x16);
      FUN_00481b90(this,&local_6,local_2a);
      FUN_00481b90(this,(undefined2 *)(param_1 + 0xf),uStack_28);
      FUN_00481b90(this,(undefined2 *)((int)param_1 + 0x36),uStack_26);
      iVar2 = 1;
      FUN_00481b90(this,&sStack_a,uStack_24);
      if (local_6 != 0) {
        local_10 = *(code **)(*this + 0x130);
        do {
          iVar2 = iVar2 + 1;
          (*local_10)(local_9c,0x2a);
          FUN_004374c0(local_70,local_9c);
          FUN_00481bc0(this,&local_5e,local_8a);
          FUN_00481bc0(this,local_50,CONCAT22(uStack_80,local_82));
          FUN_00481bc0(this,local_50 + 1,CONCAT22(uStack_7c,local_7e));
          FUN_00481bc0(this,local_50 + 2,CONCAT22(uStack_78,local_7a));
          FUN_00481bc0(this,local_44,local_76);
          FUN_00481b90(this,&local_56,uStack_84);
          local_44[1] = 0;
          local_58 = 0;
          local_54 = 0;
          (**(code **)(**(int **)((int)param_1 + 0x2e) + 0xe8))(local_70);
        } while (iVar2 <= (int)(uint)local_6);
      }
      if (sStack_a != 0) {
        uVar1 = CONCAT22(uStack_8,sStack_a);
LAB_0045dda2:
        (**(code **)(*param_1 + 0x168))(this,local_1c._0_4_,uVar1);
        goto LAB_0045ddbe;
      }
    }
  }
  (**(code **)(*param_1 + 0x15c))();
LAB_0045ddbe:
  *(short *)(param_1 + 0xe) = (short)*(undefined4 *)(*(int *)((int)param_1 + 0x2e) + 0x26) + 1;
  return 0;
}


