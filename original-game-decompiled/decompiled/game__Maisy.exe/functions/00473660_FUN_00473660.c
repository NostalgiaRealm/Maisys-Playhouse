
/* ==== FUN_00473660 @ 00473660 ==== 
 * signature: undefined __thiscall FUN_00473660(void * this, short param_1)
 * body: 00473660-00473697
 */

void __thiscall FUN_00473660(void *this,short param_1)

{
  if (param_1 < 1) {
    *(undefined2 *)((int)this + 0x96) = 0;
  }
  else {
    if (99 < param_1) {
      param_1 = 100;
    }
    *(short *)((int)this + 0x96) = param_1;
  }
  (**(code **)(**(int **)((int)this + 0x5a) + 0x204))();
  return;
}


