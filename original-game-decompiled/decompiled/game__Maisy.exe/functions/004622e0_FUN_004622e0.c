
/* ==== FUN_004622e0 @ 004622e0 ==== 
 * signature: undefined __thiscall FUN_004622e0(void * this, undefined4 param_1)
 * body: 004622e0-00462327
 */

void __thiscall FUN_004622e0(void *this,undefined4 param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = *(undefined4 *)((int)this + 0xa2);
  local_8 = *(undefined4 *)((int)this + 0xa6);
  *(short *)((int)this + 0xa6) = (short)local_c + (short)param_1;
  *(short *)((int)this + 0xa8) = *(short *)((int)this + 0xa4) + param_1._2_2_;
  (**(code **)(*(int *)this + 0x39c))(&local_c);
  return;
}


