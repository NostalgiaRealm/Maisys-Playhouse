
/* ==== FUN_004460d0 @ 004460d0 ==== 
 * signature: undefined4 __thiscall FUN_004460d0(void * this, undefined4 param_1)
 * body: 004460d0-0044613e
 */

undefined4 __thiscall FUN_004460d0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  short local_c;
  short local_a;
  
  (**(code **)(*(int *)this + 0x3a0))(&local_c,1);
  *(short *)((int)this + 0x156) = ((short)param_1 - *(short *)((int)this + 0xc2)) - local_c;
  *(short *)((int)this + 0x158) = (param_1._2_2_ - *(short *)((int)this + 0xc4)) - local_a;
  if ((*(byte *)((int)this + 0x154) & 1) == 0) {
    uVar1 = FUN_004635e0(this,param_1);
    return uVar1;
  }
  uVar1 = FUN_0042e9f0(*(int **)((int)this + 0x5a));
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


