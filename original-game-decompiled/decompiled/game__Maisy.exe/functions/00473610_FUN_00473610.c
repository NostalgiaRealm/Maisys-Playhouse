
/* ==== FUN_00473610 @ 00473610 ==== 
 * signature: undefined __thiscall FUN_00473610(void * this, short param_1)
 * body: 00473610-00473648
 */

void __thiscall FUN_00473610(void *this,short param_1)

{
  if (param_1 < -99) {
    *(undefined2 *)((int)this + 0xa8) = 0xff9c;
  }
  else {
    if (99 < param_1) {
      param_1 = 100;
    }
    *(short *)((int)this + 0xa8) = param_1;
  }
  (**(code **)(**(int **)((int)this + 0x5a) + 0x204))();
  return;
}


