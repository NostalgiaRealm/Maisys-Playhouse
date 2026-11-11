
/* ==== FUN_00488170 @ 00488170 ==== 
 * signature: undefined __thiscall FUN_00488170(void * this, int * param_1, undefined4 param_2, undefined4 * param_3)
 * body: 00488170-00488328
 */

void __thiscall FUN_00488170(void *this,int *param_1,undefined4 param_2,undefined4 *param_3)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  short sVar6;
  char local_160 [256];
  undefined4 local_60 [3];
  undefined4 local_52;
  short local_4e;
  undefined4 local_4c;
  undefined2 local_48;
  undefined4 local_3a [3];
  undefined4 local_2c;
  short local_28;
  undefined4 local_26;
  undefined2 local_22;
  undefined2 local_20;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined4 local_12;
  uint local_e;
  undefined4 local_a;
  
  uVar3 = *(uint *)((int)param_3 + 6);
  if (*(short *)(param_3 + 1) == 0) {
    FUN_00486dd0(param_1,local_60,param_3,0x5a);
    *(undefined4 *)((int)this + 0xc) = local_52;
    (**(code **)(*(int *)this + 0x124))(local_4c,1);
    *(undefined2 *)((int)this + 0x5e) = (undefined2)local_1a;
    *(undefined2 *)((int)this + 0x60) = local_48;
    *(undefined4 *)((int)this + 0xa2) = local_16;
    *(undefined4 *)((int)this + 0x7e) = 0;
    *(undefined4 *)((int)this + 0x82) = 0;
    *(undefined4 *)((int)this + 0xa6) = local_12;
    *(uint *)((int)this + 0xaa) = local_e;
    *(undefined4 *)((int)this + 0xae) = local_a;
    sVar6 = local_4e;
  }
  else {
    FUN_00486dd0(param_1,local_3a,param_3,0x34);
    *(undefined4 *)((int)this + 0xc) = local_2c;
    (**(code **)(*(int *)this + 0x124))(local_26,1);
    *(undefined2 *)((int)this + 0x60) = local_22;
    *(undefined2 *)((int)this + 0x5e) = local_20;
    *(undefined4 *)((int)this + 0xa2) = local_1e;
    *(undefined4 *)((int)this + 0xa6) = local_1a;
    *(undefined4 *)((int)this + 0xaa) = local_16;
    *(undefined4 *)((int)this + 0xae) = local_12;
    puVar1 = (uint *)((int)this + 0x7e);
    *puVar1 = local_e;
    *(undefined4 *)((int)this + 0x82) = local_a;
    sVar6 = local_28;
    if (*puVar1 != 0) {
      *puVar1 = *puVar1 | 0x80000000;
    }
  }
  uVar4 = (**(code **)(*(int *)this + 0x128))(1);
  (**(code **)(**(int **)((int)this + 0x5a) + 0x124))(uVar4);
  if ((short)param_1[0x5b] < 1) {
    uVar2 = *(ushort *)((int)this + 0x60);
    if (-1 >= (short)uVar2) {
      *(ushort *)((int)this + 0x60) = uVar2 & 0xff;
    }
    (**(code **)(*(int *)this + 300))(-1 < (short)uVar2);
  }
  if (sVar6 == 0) {
    *(undefined4 *)((int)this + 0x2e) = 0;
  }
  else {
    FUN_00486d60(param_1,local_160,(int)sVar6);
    pcVar5 = FUN_0043f650(local_160);
    *(char **)((int)this + 0x2e) = pcVar5;
  }
  if ((uVar3 & 1) != 0) {
    FUN_0046dd60(this,param_1,param_2);
  }
  if ((uVar3 & 4) != 0) {
    FUN_0046ddb0(this,param_1);
  }
  (**(code **)(*(int *)this + 0x1c))(0);
  return;
}


