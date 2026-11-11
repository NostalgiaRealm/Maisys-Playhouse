
/* ==== FUN_00468430 @ 00468430 ==== 
 * signature: undefined __thiscall FUN_00468430(void * this, short param_1)
 * body: 00468430-00468460
 */

void __thiscall FUN_00468430(void *this,short param_1)

{
  if (*(int *)((int)this + 0x48) != 0) {
    *(short *)(*(int *)((int)this + 0x48) + 0x12) = param_1;
    if (**(int **)((int)this + 0x48) != 0) {
      *(short *)(**(int **)((int)this + 0x48) + 0x20) = param_1;
      FUN_004433d0(**(int **)((int)this + 0x48),param_1);
    }
  }
  return;
}


