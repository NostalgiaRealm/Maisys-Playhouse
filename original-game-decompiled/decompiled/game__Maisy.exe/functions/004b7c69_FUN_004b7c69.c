
/* ==== FUN_004b7c69 @ 004b7c69 ==== 
 * signature: undefined __thiscall FUN_004b7c69(void * this, undefined4 param_1)
 * body: 004b7c69-004b7c84
 */

void __thiscall FUN_004b7c69(void *this,undefined4 param_1)

{
  FUN_004a8882(this);
  if (*(int **)((int)this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x68) + 0x70))(param_1);
  }
  return;
}


