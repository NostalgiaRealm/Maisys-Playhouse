
/* ==== FUN_00462330 @ 00462330 ==== 
 * signature: undefined __thiscall FUN_00462330(void * this, undefined4 param_1)
 * body: 00462330-00462377
 */

void __thiscall FUN_00462330(void *this,undefined4 param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = *(undefined4 *)((int)this + 0xaa);
  local_8 = *(undefined4 *)((int)this + 0xae);
  *(short *)((int)this + 0xa6) = (short)local_c + (short)param_1;
  *(short *)((int)this + 0xa8) = *(short *)((int)this + 0xac) + param_1._2_2_;
  (**(code **)(*(int *)this + 0x3a4))(&local_c);
  return;
}


