
/* ==== FUN_00409480 @ 00409480 ==== 
 * signature: undefined __thiscall FUN_00409480(void * this, short param_1, short param_2)
 * body: 00409480-0040953f
 */

void __thiscall FUN_00409480(void *this,short param_1,short param_2)

{
  char cVar1;
  int local_14 [4];
  
  cVar1 = (**(code **)(**(int **)((int)this + 0x2a) + 0x104))();
  if (cVar1 == '\0') {
    if (*(char *)((int)this + 0xa4) != '\0') {
      FUN_00408270(this);
      return;
    }
    FUN_00410700(*(int *)((int)this + 0x8e));
    *(undefined1 *)((int)this + 0xa4) = 1;
    if (*(int **)((int)this + 0x4a) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x4a) + 0xe4))();
    }
    if ((param_1 == -1) && (param_2 == -1)) {
      local_14[1] = 0xffffffff;
      local_14[2] = 0xffffffff;
      local_14[0] = 3;
      local_14[3] = 0xffffffff;
      FUN_004061e0(this,local_14);
      FUN_004054a0(this,local_14,(int *)0x0,0);
      *(undefined1 *)((int)this + 0xb6) = 1;
      return;
    }
    FUN_004061e0(this,*(int **)((int)this + 0x38));
    FUN_004054a0(this,*(int **)((int)this + 0x38),(int *)0x0,0);
  }
  return;
}


