
/* ==== FUN_004116e0 @ 004116e0 ==== 
 * signature: undefined4 __thiscall FUN_004116e0(void * this, int param_1)
 * body: 004116e0-004116fc
 */

undefined4 __thiscall FUN_004116e0(void *this,int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(*(int *)((int)this + 8) + 4 + param_1);
  }
  return *(undefined4 *)((int)this + 4);
}


