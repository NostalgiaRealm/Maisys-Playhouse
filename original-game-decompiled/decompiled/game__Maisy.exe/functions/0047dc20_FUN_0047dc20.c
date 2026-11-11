
/* ==== FUN_0047dc20 @ 0047dc20 ==== 
 * signature: undefined __thiscall FUN_0047dc20(void * this, int param_1)
 * body: 0047dc20-0047dca8
 */

void __thiscall FUN_0047dc20(void *this,int param_1)

{
  int iVar1;
  
  FUN_0044f390(this,param_1);
  *(uint *)((int)this + 0x1e) = *(uint *)((int)this + 0x1e) | 0x40000;
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x14c))(1);
  (**(code **)(iVar1 + 0x470))(0);
  (**(code **)(iVar1 + 0x498))(0);
  (**(code **)(iVar1 + 0x478))(0);
  (**(code **)(iVar1 + 0x4a0))(0);
  *(undefined2 *)((int)this + 0x15e) = 100;
  (**(code **)(iVar1 + 0x134))(0);
  *(undefined2 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x170) = 0x32;
  *(undefined1 *)((int)this + 0x162) = 1;
  *(undefined4 *)((int)this + 0x168) = 0;
  return;
}


