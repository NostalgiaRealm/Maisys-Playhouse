
/* ==== FUN_00469730 @ 00469730 ==== 
 * signature: undefined4 __thiscall FUN_00469730(void * this, int * param_1)
 * body: 00469730-00469759
 */

undefined4 __thiscall FUN_00469730(void *this,int *param_1)

{
  uint in_EAX;
  
  if ((*(byte *)((int)param_1 + 0x29) & 0x10) != 0) {
    in_EAX = (**(code **)(*param_1 + 0x16c))();
    if (in_EAX == *(uint *)((int)this + 4)) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}


