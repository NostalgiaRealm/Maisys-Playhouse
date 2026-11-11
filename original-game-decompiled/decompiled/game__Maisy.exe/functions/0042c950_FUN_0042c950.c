
/* ==== FUN_0042c950 @ 0042c950 ==== 
 * signature: undefined __thiscall FUN_0042c950(void * this, int param_1)
 * body: 0042c950-0042c97d
 */

void __thiscall FUN_0042c950(void *this,int param_1)

{
  if ((param_1 != 0) && (*(int *)((int)this + 0x4c) != 0)) {
    (**(code **)(*(int *)this + 0x238))();
    *(void **)(param_1 + 8) = this;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 0x3a);
  }
  *(int *)((int)this + 0x4c) = param_1;
  return;
}


