
/* ==== FUN_004371b0 @ 004371b0 ==== 
 * signature: undefined4 __thiscall FUN_004371b0(void * this, short param_1)
 * body: 004371b0-004371d8
 */

undefined4 __thiscall FUN_004371b0(void *this,short param_1)

{
  if (*(int *)((int)this + param_1 * 0x124 + 0x142) != 0) {
    return *(undefined4 *)((int)this + param_1 * 0x124 + 0x26);
  }
  return 0;
}


