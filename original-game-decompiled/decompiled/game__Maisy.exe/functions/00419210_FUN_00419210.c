
/* ==== FUN_00419210 @ 00419210 ==== 
 * signature: undefined __thiscall FUN_00419210(void * this, char param_1)
 * body: 00419210-00419244
 */

void __thiscall FUN_00419210(void *this,char param_1)

{
  int *piVar1;
  
  FUN_0040cc10(this,param_1);
  *(undefined4 *)((int)this + 0x8e) = 1;
  piVar1 = (int *)(**(code **)(*(int *)this + 0x3c0))();
  (**(code **)(*piVar1 + 0x32c))(0xffffffff);
  return;
}


