
/* ==== FUN_004116c0 @ 004116c0 ==== 
 * signature: undefined4 __thiscall FUN_004116c0(void * this, int param_1)
 * body: 004116c0-004116da
 */

undefined4 __thiscall FUN_004116c0(void *this,int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(*(int *)((int)this + 8) + param_1);
  }
  return *(undefined4 *)this;
}


