
/* ==== FUN_00411500 @ 00411500 ==== 
 * signature: undefined __thiscall FUN_00411500(void * this, undefined4 param_1)
 * body: 00411500-00411527
 */

void __thiscall FUN_00411500(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x114))();
  (**(code **)(iVar1 + 0x20c))(param_1);
  *(undefined1 *)((int)this + 0xf8) = 1;
  return;
}


