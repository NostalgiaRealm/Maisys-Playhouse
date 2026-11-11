
/* ==== FUN_0044f670 @ 0044f670 ==== 
 * signature: undefined __thiscall FUN_0044f670(void * this, char param_1)
 * body: 0044f670-0044f6c8
 */

void __thiscall FUN_0044f670(void *this,char param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_004655c0(this,param_1);
  *(byte *)((int)this + 0x15c) = *(byte *)((int)this + 0x15c) & 0xfb;
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x148))(0);
  *(byte *)((int)this + 0x15c) = *(byte *)((int)this + 0x15c) | 1;
  (**(code **)(iVar1 + 0x4ac))(0,0x7fff);
  piVar2 = (int *)(**(code **)(iVar1 + 0x3c0))();
  (**(code **)(*piVar2 + 0x32c))(*(undefined4 *)((int)this + 0x156));
  return;
}


