
/* ==== FUN_004b46a2 @ 004b46a2 ==== 
 * signature: undefined __thiscall FUN_004b46a2(void * this, undefined4 * param_1)
 * body: 004b46a2-004b46c8
 */

void __thiscall FUN_004b46a2(void *this,undefined4 *param_1)

{
  if (*(int **)((int)this + 0xa0) == (int *)0x0) {
    (**(code **)*param_1)(0);
  }
  else {
    (**(code **)(**(int **)((int)this + 0xa0) + 8))(param_1);
  }
  return;
}


