
/* ==== FUN_004696a0 @ 004696a0 ==== 
 * signature: undefined4 * __thiscall FUN_004696a0(void * this, undefined4 param_1, undefined4 param_2)
 * body: 004696a0-004696ba
 */

undefined4 * __thiscall FUN_004696a0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined ***)this = &PTR_FUN_004c9534;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return this;
}


