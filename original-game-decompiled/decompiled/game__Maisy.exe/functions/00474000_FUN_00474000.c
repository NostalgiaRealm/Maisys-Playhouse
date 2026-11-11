
/* ==== FUN_00474000 @ 00474000 ==== 
 * signature: undefined __thiscall FUN_00474000(void * this, int * param_1, undefined4 param_2, undefined4 * param_3)
 * body: 00474000-00474389
 */

void __thiscall FUN_00474000(void *this,int *param_1,undefined4 param_2,undefined4 *param_3)

{
  uint *puVar1;
  void *pvVar2;
  int *piVar3;
  char *pcVar4;
  short sVar5;
  uint uVar6;
  char local_158 [256];
  undefined4 local_58;
  uint local_52;
  undefined4 local_4a;
  short local_46;
  undefined4 local_44;
  undefined2 local_40;
  undefined1 local_38 [6];
  ushort uStack_32;
  ushort local_30 [3];
  ushort local_2a;
  undefined2 uStack_28;
  short local_26;
  short local_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  short sStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined4 local_18;
  short local_14;
  undefined4 local_12;
  undefined4 local_e;
  undefined4 local_a;
  
  sVar5 = *(short *)(param_3 + 1);
  if (sVar5 == 0) {
    FUN_00486dd0(param_1,&local_58,param_3,0x52);
    if (local_46 != 0) {
      FUN_00486d60(param_1,local_158,(int)local_46);
    }
    *(undefined4 *)((int)this + 0xc) = local_4a;
    (**(code **)(*(int *)this + 0x124))(local_44,1);
    *(undefined2 *)((int)this + 0x5e) = (undefined2)local_12;
    *(undefined2 *)((int)this + 0x60) = local_40;
    FUN_00473550(this,local_2a == 4);
    *(undefined2 *)((int)this + 0x9c) = (undefined2)local_e;
    *(undefined2 *)((int)this + 0x9e) = local_e._2_2_;
    uVar6 = local_52;
    if (local_a != 0) {
      pvVar2 = (void *)FUN_00466a70(*(int *)((int)this + 4));
      piVar3 = FUN_0044e500(pvVar2,local_a);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*(int *)this + 0x2a4))(piVar3);
      }
    }
  }
  else if (sVar5 == 1) {
    FUN_00486dd0(param_1,(undefined4 *)local_30,param_3,0x2a);
    if (sStack_1e != 0) {
      FUN_00486d60(param_1,local_158,(int)sStack_1e);
    }
    *(uint *)((int)this + 0xc) = CONCAT22(uStack_20,uStack_22);
    (**(code **)(*(int *)this + 0x124))(CONCAT22(uStack_1a,uStack_1c),1);
    *(undefined4 *)((int)this + 0xa2) = local_18;
    uVar6 = (uint)local_2a;
    *(undefined2 *)((int)this + 0x5e) = (undefined2)local_12;
    *(short *)((int)this + 0x60) = local_14;
    *(undefined2 *)((int)this + 0x9c) = (undefined2)local_e;
    *(undefined2 *)((int)this + 0x9e) = local_e._2_2_;
    local_46 = sStack_1e;
    if (local_a != 0) {
      pvVar2 = (void *)FUN_00466a70(*(int *)((int)this + 4));
      piVar3 = FUN_0044e500(pvVar2,local_a);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*(int *)this + 0x2a4))(piVar3);
      }
    }
  }
  else if (sVar5 == 2) {
    FUN_00486dd0(param_1,(undefined4 *)(local_38 + 2),param_3,0x30);
    if (local_24 != 0) {
      FUN_00486d60(param_1,local_158,(int)local_24);
    }
    *(uint *)((int)this + 0xc) = CONCAT22(local_26,uStack_28);
    (**(code **)(*(int *)this + 0x124))(CONCAT22(uStack_20,uStack_22),1);
    *(uint *)((int)this + 0xa2) = CONCAT22(uStack_1c,sStack_1e);
    uVar6 = (uint)local_30[0];
    *(undefined2 *)((int)this + 0x5e) = (undefined2)local_18;
    *(short *)((int)this + 0x9c) = local_18._2_2_;
    *(short *)((int)this + 0x9e) = local_14;
    *(undefined4 *)((int)this + 0x56) = local_12;
    puVar1 = (uint *)((int)this + 0x7e);
    *(undefined2 *)((int)this + 0x60) = uStack_1a;
    *puVar1 = local_e;
    *(uint *)((int)this + 0x82) = local_a;
    local_46 = local_24;
    if (*puVar1 != 0) {
      *puVar1 = *puVar1 | 0x80000000;
    }
  }
  else if (sVar5 == 3) {
    FUN_00486dd0(param_1,(undefined4 *)local_38,param_3,0x32);
    if (local_26 != 0) {
      FUN_00486d60(param_1,local_158,(int)local_26);
    }
    *(uint *)((int)this + 0xc) = CONCAT22(uStack_28,local_2a);
    (**(code **)(*(int *)this + 0x124))(CONCAT22(uStack_22,local_24),1);
    *(uint *)((int)this + 0xa2) = CONCAT22(sStack_1e,uStack_20);
    *(undefined2 *)((int)this + 0x5e) = uStack_1a;
    *(undefined2 *)((int)this + 0x60) = uStack_1c;
    *(undefined2 *)((int)this + 0x9c) = (undefined2)local_18;
    *(short *)((int)this + 0x9e) = local_18._2_2_;
    *(short *)((int)this + 0xaa) = local_14;
    sVar5 = (short)((-1 - local_14) / 2) * 2 + 100;
    if (sVar5 == 0) {
      *(undefined2 *)((int)this + 0xa0) = 100;
    }
    else {
      *(short *)((int)this + 0xa0) = (short)((local_18._2_2_ * 100) / (int)sVar5);
    }
    uVar6 = (uint)uStack_32;
    puVar1 = (uint *)((int)this + 0x7e);
    *(undefined4 *)((int)this + 0x56) = local_12;
    *puVar1 = local_e;
    *(uint *)((int)this + 0x82) = local_a;
    local_46 = local_26;
    if (*puVar1 != 0) {
      *puVar1 = *puVar1 | 0x80000000;
    }
  }
  else {
    uVar6 = local_a;
    local_46 = local_a._2_2_;
  }
  if (local_46 == 0) {
    *(undefined4 *)((int)this + 0x2e) = 0;
  }
  else {
    pcVar4 = FUN_0043f650(local_158);
    *(char **)((int)this + 0x2e) = pcVar4;
  }
  if ((uVar6 & 1) != 0) {
    FUN_0046dd60(this,param_1,param_2);
  }
  if ((uVar6 & 4) != 0) {
    FUN_0046ddb0(this,param_1);
  }
  (**(code **)(*(int *)this + 0x1c))(0);
  return;
}


