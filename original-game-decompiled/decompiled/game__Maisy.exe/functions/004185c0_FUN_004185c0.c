
/* ==== FUN_004185c0 @ 004185c0 ==== 
 * signature: undefined __thiscall FUN_004185c0(void * this, int param_1)
 * body: 004185c0-0041861f
 */

void __thiscall FUN_004185c0(void *this,int param_1)

{
  FUN_0044f390(this,param_1);
  *(uint *)((int)this + 0x1e) = *(uint *)((int)this + 0x1e) | 0x400000;
  *(undefined2 *)((int)this + 0x22) = 0x19;
  *(uint *)((int)this + 0x14a) = *(uint *)((int)this + 0x14a) | 0x2000000;
  *(undefined2 *)((int)this + 0x16e) = 0;
  *(undefined4 *)((int)this + 0x16a) = 0;
  *(undefined1 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x8e) = 0;
  *(undefined4 *)((int)this + 0x15e) = 1500000;
  (**(code **)(*(int *)this + 0x14c))(1);
  return;
}


