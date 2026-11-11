
/* ==== FUN_0042b3e0 @ 0042b3e0 ==== 
 * signature: uint __thiscall FUN_0042b3e0(void * this, undefined4 param_1)
 * body: 0042b3e0-0042b421
 */

uint __thiscall FUN_0042b3e0(void *this,undefined4 param_1)

{
  undefined2 extraout_var;
  uint uVar1;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  (**(code **)(*(int *)this + 0x2a8))(&local_c);
  uVar1 = CONCAT22(extraout_var,(short)param_1);
  if ((local_c <= (short)param_1) && ((short)param_1 < local_8)) {
    uVar1 = CONCAT22(extraout_var,param_1._2_2_);
    if ((local_a <= param_1._2_2_) && (param_1._2_2_ < local_6)) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


