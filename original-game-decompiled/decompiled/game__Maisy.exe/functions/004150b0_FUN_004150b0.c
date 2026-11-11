
/* ==== FUN_004150b0 @ 004150b0 ==== 
 * signature: undefined __thiscall FUN_004150b0(void * this, undefined4 param_1)
 * body: 004150b0-004150d7
 */

void __thiscall FUN_004150b0(void *this,undefined4 param_1)

{
  if (*(int **)((int)this + 0x3e) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x3e) + 0x114))();
    return;
  }
  FUN_00410630(*(void **)((int)this + 0x2a),param_1);
  return;
}


