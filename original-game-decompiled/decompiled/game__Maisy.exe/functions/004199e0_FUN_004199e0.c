
/* ==== FUN_004199e0 @ 004199e0 ==== 
 * signature: undefined __thiscall FUN_004199e0(void * this, int * param_1, undefined4 param_2, undefined4 * param_3)
 * body: 004199e0-00419d11
 */

void __thiscall FUN_004199e0(void *this,int *param_1,undefined4 param_2,undefined4 *param_3)

{
  uint *puVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  short sVar6;
  uint uVar7;
  char local_168 [256];
  undefined4 local_68;
  uint local_62;
  undefined4 local_5a;
  short local_56;
  uint local_54;
  ushort local_50;
  undefined4 local_4a;
  undefined1 local_44 [8];
  uint local_3c;
  short local_38;
  undefined2 uStack_36;
  ushort local_34;
  undefined2 uStack_32;
  short local_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined4 local_22;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined4 local_12;
  uint local_e;
  int local_a;
  
  if (*(short *)(param_3 + 1) == 0) {
    FUN_00486dd0(param_1,&local_68,param_3,0x62);
    if (local_56 != 0) {
      FUN_00486d60(param_1,local_168,(int)local_56);
    }
    *(undefined4 *)((int)this + 0xc) = local_5a;
    local_54 = local_54 & 0xfdffffff;
    *(int *)((int)this + 0x15e) = local_a * 100000;
    (**(code **)(*(int *)this + 0x124))(local_54,1);
    *(ushort *)((int)this + 0x60) = local_50;
    *(undefined2 *)((int)this + 0x5e) = (undefined2)local_22;
    *(undefined4 *)((int)this + 0xa2) = local_1e;
    *(undefined4 *)((int)this + 0xa6) = local_1a;
    *(undefined4 *)((int)this + 0xaa) = local_16;
    *(undefined4 *)((int)this + 0xae) = local_12;
    if ((short)param_1[0x5b] < 1) {
      if (-1 >= (short)local_50) {
        *(ushort *)((int)this + 0x60) = local_50 & 0xff;
      }
      (**(code **)(*(int *)this + 300))(-1 < (short)local_50);
    }
    uVar7 = local_62;
    sVar6 = local_56;
    if ((local_e != 0) && (*(int *)((int)this + 4) != 0)) {
      pvVar2 = (void *)FUN_00466a70(*(int *)((int)this + 4));
      piVar3 = FUN_0044e500(pvVar2,local_e);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*(int *)this + 0x2a4))(piVar3);
      }
    }
  }
  else if (*(short *)(param_3 + 1) == 1) {
    FUN_00486dd0(param_1,(undefined4 *)(local_44 + 2),param_3,0x3c);
    if (local_30 != 0) {
      FUN_00486d60(param_1,local_168,(int)local_30);
    }
    *(int *)((int)this + 0x15e) = local_a;
    uVar7 = CONCAT22(uStack_2c,uStack_2e) & 0xfdffffff;
    uStack_2e = (undefined2)uVar7;
    uStack_2c = (undefined2)(uVar7 >> 0x10);
    *(uint *)((int)this + 0xc) = CONCAT22(uStack_32,local_34);
    (**(code **)(*(int *)this + 0x124))(uVar7,1);
    *(undefined2 *)((int)this + 0x5e) = local_22._2_2_;
    *(uint *)((int)this + 0x14a) = CONCAT22(uStack_26,local_28);
    *(undefined2 *)((int)this + 0x60) = local_2a;
    *(undefined4 *)((int)this + 0xa2) = local_1e;
    *(undefined4 *)((int)this + 0xa6) = local_1a;
    *(undefined4 *)((int)this + 0xaa) = local_16;
    *(undefined4 *)((int)this + 0xae) = local_12;
    uVar7 = local_3c;
    sVar6 = local_30;
    if ((local_e != 0) && (*(int *)((int)this + 4) != 0)) {
      pvVar2 = (void *)FUN_00466a70(*(int *)((int)this + 4));
      piVar3 = FUN_0044e500(pvVar2,local_e);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*(int *)this + 0x2a4))(piVar3);
      }
    }
  }
  else {
    FUN_00486dd0(param_1,&local_4a,param_3,0x44);
    if (local_38 != 0) {
      FUN_00486d60(param_1,local_168,(int)local_38);
    }
    *(undefined4 *)((int)this + 0x15e) = local_12;
    *(uint *)((int)this + 0xc) = local_3c;
    if (*(short *)(param_3 + 1) < 3) {
      local_34 = local_34 | 0x200;
    }
    (**(code **)(*(int *)this + 0x124))(CONCAT22(local_34,uStack_36),1);
    *(undefined2 *)((int)this + 0x5e) = local_28;
    *(uint *)((int)this + 0x14a) = CONCAT22(uStack_2e,local_30);
    *(undefined2 *)((int)this + 0x60) = uStack_32;
    *(uint *)((int)this + 0xa2) = CONCAT22(uStack_24,uStack_26);
    *(undefined4 *)((int)this + 0xa6) = local_22;
    *(undefined4 *)((int)this + 0xaa) = local_1e;
    *(undefined4 *)((int)this + 0xae) = local_1a;
    puVar1 = (uint *)((int)this + 0x7e);
    *puVar1 = local_e;
    *(int *)((int)this + 0x82) = local_a;
    if (*puVar1 != 0) {
      *puVar1 = *puVar1 | 0x80000000;
    }
    *(undefined4 *)((int)this + 0x56) = local_16;
    uVar7 = local_44._0_4_;
    sVar6 = local_38;
  }
  uVar4 = (**(code **)(*(int *)this + 0x128))(1);
  (**(code **)(**(int **)((int)this + 0x5a) + 0x124))(uVar4);
  if (sVar6 == 0) {
    *(undefined4 *)((int)this + 0x2e) = 0;
  }
  else {
    pcVar5 = FUN_0043f650(local_168);
    *(char **)((int)this + 0x2e) = pcVar5;
  }
  if ((uVar7 & 1) != 0) {
    FUN_0046dd60(this,param_1,param_2);
  }
  if ((uVar7 & 4) != 0) {
    FUN_0046ddb0(this,param_1);
  }
  (**(code **)(*(int *)this + 0x1c))(0);
  return;
}


