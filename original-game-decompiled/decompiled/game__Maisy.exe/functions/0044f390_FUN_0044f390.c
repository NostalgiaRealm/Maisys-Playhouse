
/* ==== FUN_0044f390 @ 0044f390 ==== 
 * signature: undefined __thiscall FUN_0044f390(void * this, int param_1)
 * body: 0044f390-0044f3fb
 */

void __thiscall FUN_0044f390(void *this,int param_1)

{
  byte bVar1;
  
  FUN_00460220(this,param_1,0,0);
  *(uint *)((int)this + 0x1e) = *(uint *)((int)this + 0x1e) | 0x200;
  *(undefined4 *)((int)this + 0x14a) = 0x28000000;
  *(undefined4 *)((int)this + 0x156) = 0;
  *(undefined4 *)((int)this + 0x14e) = 0;
  bVar1 = *(byte *)((int)this + 0x15c);
  *(undefined4 *)((int)this + 0x152) = 0x7fff;
  *(byte *)((int)this + 0x15c) = bVar1 | 1;
  *(byte *)((int)this + 0x15c) = bVar1 | 5;
  (**(code **)(*(int *)this + 0x148))(0);
  return;
}


