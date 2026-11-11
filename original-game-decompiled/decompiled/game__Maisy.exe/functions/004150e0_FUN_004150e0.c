
/* ==== FUN_004150e0 @ 004150e0 ==== 
 * signature: undefined __thiscall FUN_004150e0(void * this, undefined4 param_1)
 * body: 004150e0-00415107
 */

void __thiscall FUN_004150e0(void *this,undefined4 param_1)

{
  if (*(int **)((int)this + 0x3e) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x3e) + 0x118))();
    return;
  }
  FUN_00410650(*(void **)((int)this + 0x2a),param_1);
  return;
}


