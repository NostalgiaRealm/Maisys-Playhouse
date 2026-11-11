
/* ==== FUN_004317b0 @ 004317b0 ==== 
 * signature: undefined __thiscall FUN_004317b0(void * this, undefined4 param_1, undefined2 param_2)
 * body: 004317b0-004317d7
 */

void __thiscall FUN_004317b0(void *this,undefined4 param_1,undefined2 param_2)

{
  void *this_00;
  undefined4 uVar1;
  
  this_00 = *(void **)((int)this + 0x90);
  if (this_00 != (void *)0x0) {
    uVar1 = FUN_00414e90((int)this);
    FUN_004093a0(this_00,param_1,param_2,(short)uVar1);
  }
  return;
}


