
/* ==== FUN_00447010 @ 00447010 ==== 
 * signature: undefined __thiscall FUN_00447010(void * this, int * param_1, undefined4 param_2, undefined4 * param_3)
 * body: 00447010-00447147
 */

void __thiscall FUN_00447010(void *this,int *param_1,undefined4 param_2,undefined4 *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  char local_140 [256];
  undefined4 local_40;
  uint local_3a;
  undefined4 local_32;
  short local_2e;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_22;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined4 local_12;
  uint local_e;
  undefined4 local_a;
  
  if (*(short *)(param_3 + 1) == 1) {
    uVar4 = local_a;
  }
  else {
    FUN_00486dd0(param_1,&local_40,param_3,0x3a);
    if (local_2e != 0) {
      FUN_00486d60(param_1,local_140,(int)local_2e);
    }
    *(undefined4 *)((int)this + 0xc) = local_32;
    (**(code **)(*(int *)this + 0x124))(local_2c,1);
    *(undefined2 *)((int)this + 0x5e) = local_26;
    *(undefined4 *)((int)this + 0xa2) = local_22;
    *(undefined2 *)((int)this + 0x60) = local_28;
    *(undefined4 *)((int)this + 0xa6) = local_1e;
    *(undefined4 *)((int)this + 0xaa) = local_1a;
    *(undefined4 *)((int)this + 0xae) = local_16;
    *(undefined4 *)((int)this + 0x56) = local_12;
    puVar1 = (uint *)((int)this + 0x7e);
    *puVar1 = local_e;
    *(uint *)((int)this + 0x82) = local_a;
    uVar4 = local_3a;
    local_a._2_2_ = local_2e;
    if (*puVar1 != 0) {
      *puVar1 = *puVar1 | 0x80000000;
    }
  }
  uVar2 = (**(code **)(*(int *)this + 0x128))(1);
  (**(code **)(**(int **)((int)this + 0x5a) + 0x124))(uVar2);
  if (local_a._2_2_ == 0) {
    *(undefined4 *)((int)this + 0x2e) = 0;
  }
  else {
    pcVar3 = FUN_0043f650(local_140);
    *(char **)((int)this + 0x2e) = pcVar3;
  }
  if ((uVar4 & 1) != 0) {
    FUN_0046dd60(this,param_1,param_2);
  }
  if ((uVar4 & 4) != 0) {
    FUN_0046ddb0(this,param_1);
  }
  (**(code **)(*(int *)this + 0x1c))(0);
  return;
}


