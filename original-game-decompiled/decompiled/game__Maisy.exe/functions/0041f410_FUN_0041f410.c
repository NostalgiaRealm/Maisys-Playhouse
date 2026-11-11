
/* ==== FUN_0041f410 @ 0041f410 ==== 
 * signature: undefined4 __thiscall FUN_0041f410(void * this, short param_1)
 * body: 0041f410-0041f43a
 */

undefined4 __thiscall FUN_0041f410(void *this,short param_1)

{
  if ((param_1 != -1) && (param_1 < *(short *)((int)this + 0x32))) {
    return *(undefined4 *)(*(int *)((int)this + 0x26) + 4 + param_1 * 0x18);
  }
  return 0;
}


