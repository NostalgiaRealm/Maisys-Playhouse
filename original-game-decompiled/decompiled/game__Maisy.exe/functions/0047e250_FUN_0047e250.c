
/* ==== FUN_0047e250 @ 0047e250 ==== 
 * signature: undefined __thiscall FUN_0047e250(void * this, int * param_1, undefined4 param_2, undefined4 * param_3)
 * body: 0047e250-0047e546
 */

void __thiscall FUN_0047e250(void *this,int *param_1,undefined4 param_2,undefined4 *param_3)

{
  uint *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  char *pcVar4;
  void *this_00;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  char local_180 [256];
  undefined4 local_80;
  undefined1 local_7a [8];
  uint local_72;
  short local_6e;
  undefined2 local_6c;
  undefined2 uStack_6a;
  undefined2 local_68;
  short local_66;
  uint local_64;
  undefined2 local_60;
  undefined4 local_5c;
  short local_58;
  undefined4 local_56;
  undefined2 local_52;
  undefined2 local_3a;
  undefined4 local_36;
  undefined4 local_32;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined4 local_26;
  undefined2 uStack_22;
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  short local_6;
  
  if (*(short *)(param_3 + 1) == 1) {
    FUN_00486dd0(param_1,(undefined4 *)(local_7a + 2),param_3,0x70);
    if (local_66 != 0) {
      FUN_00486d60(param_1,local_180,(int)local_66);
    }
    local_6 = local_66;
    *(uint *)((int)this + 0x94) = CONCAT22(local_18,uStack_1a);
    *(uint *)((int)this + 0xc) = CONCAT22(local_68,uStack_6a);
    (**(code **)(*(int *)this + 0x124))(local_64,1);
    *(undefined2 *)((int)this + 0x5e) = (undefined2)local_32;
    *(undefined4 *)((int)this + 0xa2) = local_2e;
    *(undefined2 *)((int)this + 0x60) = local_60;
    *(undefined4 *)((int)this + 0xa6) = local_2a;
    uVar6 = CONCAT22(local_1c,uStack_1e);
    *(uint *)((int)this + 0xaa) = local_26;
    *(uint *)((int)this + 0xae) = CONCAT22(local_20,uStack_22);
    *(undefined2 *)((int)this + 0x15e) = uStack_16;
    *(undefined4 *)((int)this + 0x14a) = local_14;
    uVar7 = local_72;
  }
  else if (*(short *)(param_3 + 1) == 2) {
    FUN_00486dd0(param_1,&local_80,param_3,0x78);
    if (local_6e != 0) {
      FUN_00486d60(param_1,local_180,(int)local_6e);
    }
    local_6 = local_6e;
    *(uint *)((int)this + 0x94) = CONCAT22(local_20,uStack_22);
    *(uint *)((int)this + 0xc) = local_72;
    (**(code **)(*(int *)this + 0x124))(CONCAT22(uStack_6a,local_6c),1);
    *(undefined2 *)((int)this + 0x5e) = local_3a;
    *(undefined4 *)((int)this + 0xa2) = local_36;
    *(undefined2 *)((int)this + 0x60) = local_68;
    *(undefined4 *)((int)this + 0xa6) = local_32;
    *(undefined4 *)((int)this + 0xaa) = local_2e;
    *(undefined4 *)((int)this + 0xae) = local_2a;
    *(undefined2 *)((int)this + 0x15e) = uStack_1e;
    puVar1 = (uint *)((int)this + 0x7e);
    *(uint *)((int)this + 0x14a) = CONCAT22(uStack_1a,local_1c);
    *puVar1 = local_10;
    *(undefined4 *)((int)this + 0x82) = local_c;
    if (*puVar1 != 0) {
      *puVar1 = *puVar1 | 0x80000000;
    }
    *(uint *)((int)this + 0x56) = local_26;
    uVar6 = local_26;
    uVar7 = local_7a._0_4_;
  }
  else {
    FUN_00486dd0(param_1,(undefined4 *)&uStack_6a,param_3,0x62);
    if (local_58 != 0) {
      FUN_00486d60(param_1,local_180,(int)local_58);
    }
    local_6 = local_58;
    *(undefined4 *)((int)this + 0x94) = local_c;
    *(undefined4 *)((int)this + 0xc) = local_5c;
    (**(code **)(*(int *)this + 0x124))(local_56,1);
    *(undefined2 *)((int)this + 0x5e) = local_26._2_2_;
    *(uint *)((int)this + 0xa2) = CONCAT22(uStack_1e,local_20);
    *(undefined2 *)((int)this + 0x60) = local_52;
    *(uint *)((int)this + 0xa6) = CONCAT22(uStack_1a,local_1c);
    *(uint *)((int)this + 0xaa) = CONCAT22(uStack_16,local_18);
    *(undefined4 *)((int)this + 0xae) = local_14;
    uVar6 = local_10;
    uVar7 = local_64;
  }
  uVar3 = (**(code **)(*(int *)this + 0x128))(1);
  (**(code **)(**(int **)((int)this + 0x5a) + 0x124))(uVar3);
  if ((short)param_1[0x5b] < 1) {
    uVar2 = *(ushort *)((int)this + 0x60);
    if (-1 >= (short)uVar2) {
      *(ushort *)((int)this + 0x60) = uVar2 & 0xff;
    }
    (**(code **)(*(int *)this + 300))(-1 < (short)uVar2);
  }
  if (local_6 == 0) {
    *(undefined4 *)((int)this + 0x2e) = 0;
  }
  else {
    pcVar4 = FUN_0043f650(local_180);
    *(char **)((int)this + 0x2e) = pcVar4;
  }
  if (((*(short *)(param_3 + 1) < 2) && (uVar6 != 0)) && (*(int *)((int)this + 4) != 0)) {
    this_00 = (void *)FUN_00466a70(*(int *)((int)this + 4));
    piVar5 = FUN_0044e500(this_00,uVar6);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*(int *)this + 0x2a4))(piVar5);
    }
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


