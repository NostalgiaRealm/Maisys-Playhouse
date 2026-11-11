
/* ==== FUN_00423840 @ 00423840 ==== 
 * signature: undefined4 * __thiscall FUN_00423840(void * this, undefined4 param_1, undefined1 param_2)
 * body: 00423840-0042385a
 */

undefined4 * __thiscall FUN_00423840(void *this,undefined4 param_1,undefined1 param_2)

{
  *(undefined ***)this = &PTR_FUN_004c6ad0;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined1 *)((int)this + 8) = param_2;
  return this;
}


