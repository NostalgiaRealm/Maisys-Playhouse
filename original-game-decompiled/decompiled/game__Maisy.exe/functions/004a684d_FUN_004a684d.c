
/* ==== FUN_004a684d @ 004a684d ==== 
 * signature: undefined4 __thiscall FUN_004a684d(void * this, undefined4 param_1, undefined4 param_2)
 * body: 004a684d-004a6868
 */

undefined4 __thiscall FUN_004a684d(void *this,undefined4 param_1,undefined4 param_2)

{
  if (*(int *)((int)this + 0x50) == 0) {
    *(undefined4 *)((int)this + 0x50) = param_2;
  }
  *(undefined4 *)((int)this + 0x44) = param_1;
  return 1;
}


