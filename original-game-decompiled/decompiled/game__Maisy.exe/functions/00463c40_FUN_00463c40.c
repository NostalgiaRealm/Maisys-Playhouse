
/* ==== FUN_00463c40 @ 00463c40 ==== 
 * signature: undefined4 __thiscall FUN_00463c40(void * this, int param_1, short * param_2)
 * body: 00463c40-00463e1c
 */

undefined4 __thiscall FUN_00463c40(void *this,int param_1,short *param_2)

{
  undefined1 uVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  undefined2 local_14;
  undefined2 local_12;
  short local_c;
  short local_a;
  undefined4 local_8;
  
  if (param_1 == 0x37) {
    uVar1 = (**(code **)(*(int *)this + 0x138))();
    uVar4 = FUN_00415ab0(uVar1,param_2,this);
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  if (param_1 == 0x3a) {
    uVar4 = FUN_00415ab0((*(byte *)((int)this + 0x9c) & 2) >> 1,param_2,this);
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  if (param_1 == 0x38) {
    cVar2 = (**(code **)(*(int *)this + 0x130))();
    uVar4 = FUN_00415ab0(cVar2 == '\0',param_2,this);
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  if (param_1 == 0x18) {
    sVar3 = (**(code **)(*(int *)this + 0x27c))();
    uVar4 = FUN_00415b10((int)sVar3,param_2,this);
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  if (param_1 == 0x14) {
    local_8 = CONCAT22(*(short *)((int)this + 0xc0) - *(short *)((int)this + 0xbc),
                       *(short *)((int)this + 0xbe) - *(short *)((int)this + 0xba));
    uVar4 = FUN_00415b70(local_8,param_2,this);
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  if (param_1 == 1) {
    (**(code **)(*(int *)this + 0x3a0))(&local_14,0);
    local_8 = CONCAT22(local_12,local_14);
    uVar4 = FUN_00415b70(local_8,param_2,this);
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  if (param_1 == 2) {
    (**(code **)(*(int *)this + 0x3a0))(&local_c,0);
    uVar4 = FUN_00415b10((int)(short)local_8 - (int)local_c,param_2,this);
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  if (param_1 == 3) {
    (**(code **)(*(int *)this + 0x3a0))(&local_c,0);
    uVar4 = FUN_00415b10((int)local_8._2_2_ - (int)local_a,param_2,this);
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  if (param_1 == 4) {
    sVar3 = (**(code **)(*(int *)this + 0x348))();
    uVar4 = FUN_00415b10((int)sVar3,param_2,this);
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  uVar4 = FUN_0046b650(this,param_1,param_2);
  return uVar4;
}


