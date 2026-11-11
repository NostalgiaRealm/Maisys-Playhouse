
/* ==== FUN_0042e7d0 @ 0042e7d0 ==== 
 * signature: undefined __thiscall FUN_0042e7d0(void * this, int * param_1, undefined4 param_2, undefined4 * param_3)
 * body: 0042e7d0-0042e9c2
 */

void __thiscall FUN_0042e7d0(void *this,int *param_1,undefined4 param_2,undefined4 *param_3)

{
  uint *puVar1;
  void *this_00;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  short sVar5;
  uint uVar6;
  char local_164 [256];
  undefined4 local_64;
  uint local_5e;
  undefined4 local_56;
  short local_52;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_3e;
  uint local_38;
  undefined4 local_30;
  short local_2c;
  undefined4 local_2a;
  undefined2 local_26;
  undefined2 local_24;
  undefined4 local_22;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined4 local_12;
  uint local_e;
  int local_a;
  
  if (*(short *)(param_3 + 1) == 0) {
    FUN_00486dd0(param_1,&local_64,param_3,0x5e);
    *(undefined4 *)((int)this + 0xc) = local_56;
    (**(code **)(*(int *)this + 0x124))(local_50,1);
    *(undefined2 *)((int)this + 0x5e) = (undefined2)local_1e;
    *(undefined4 *)((int)this + 0xa2) = local_1a;
    *(undefined2 *)((int)this + 0x60) = local_4c;
    *(undefined4 *)((int)this + 0xa6) = local_16;
    *(undefined4 *)((int)this + 0xaa) = local_12;
    *(uint *)((int)this + 0xae) = local_e;
    if (local_a != 0) {
      this_00 = (void *)FUN_00466a70(*(int *)((int)this + 4));
      piVar2 = FUN_0044e500(this_00,local_a);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*(int *)this + 0x2a4))(piVar2);
      }
    }
    uVar6 = local_5e;
    sVar5 = local_52;
    if ((short)param_1[0x5b] < 1) {
      if ((short)*(ushort *)((int)this + 0x60) < 0) {
        *(ushort *)((int)this + 0x60) = *(ushort *)((int)this + 0x60) & 0xff;
        (**(code **)(*(int *)this + 300))(0);
      }
      else {
        (**(code **)(*(int *)this + 300))(1);
      }
    }
  }
  else {
    FUN_00486dd0(param_1,&local_3e,param_3,0x38);
    *(undefined4 *)((int)this + 0xc) = local_30;
    (**(code **)(*(int *)this + 0x124))(local_2a,1);
    *(undefined2 *)((int)this + 0x5e) = local_24;
    *(undefined4 *)((int)this + 0xa2) = local_22;
    *(undefined2 *)((int)this + 0x60) = local_26;
    *(undefined4 *)((int)this + 0xa6) = local_1e;
    *(undefined4 *)((int)this + 0xaa) = local_1a;
    *(undefined4 *)((int)this + 0xae) = local_16;
    puVar1 = (uint *)((int)this + 0x7e);
    *puVar1 = local_e;
    *(int *)((int)this + 0x82) = local_a;
    if (*puVar1 != 0) {
      *puVar1 = *puVar1 | 0x80000000;
    }
    *(undefined4 *)((int)this + 0x56) = local_12;
    uVar6 = local_38;
    sVar5 = local_2c;
  }
  if (sVar5 != 0) {
    FUN_00486d60(param_1,local_164,(int)sVar5);
  }
  uVar3 = (**(code **)(*(int *)this + 0x128))(1);
  (**(code **)(**(int **)((int)this + 0x5a) + 0x124))(uVar3);
  if (sVar5 == 0) {
    *(undefined4 *)((int)this + 0x2e) = 0;
  }
  else {
    pcVar4 = FUN_0043f650(local_164);
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


