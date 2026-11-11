
/* ==== FUN_004696c0 @ 004696c0 ==== 
 * signature: uint __thiscall FUN_004696c0(void * this, uint param_1)
 * body: 004696c0-004696e2
 */

uint __thiscall FUN_004696c0(void *this,uint param_1)

{
  if ((*(int *)((int)this + 4) == *(int *)(param_1 + 0x2a)) &&
     (param_1 = *(uint *)(param_1 + 8), *(uint *)((int)this + 8) == param_1)) {
    return CONCAT31((int3)(param_1 >> 8),1);
  }
  return param_1 & 0xffffff00;
}


