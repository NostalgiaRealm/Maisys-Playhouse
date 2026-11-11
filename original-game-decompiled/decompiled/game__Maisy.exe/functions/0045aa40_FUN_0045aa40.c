
/* ==== FUN_0045aa40 @ 0045aa40 ==== 
 * signature: undefined __thiscall FUN_0045aa40(void * this, undefined4 * param_1)
 * body: 0045aa40-0045aa6b
 */

void __thiscall FUN_0045aa40(void *this,undefined4 *param_1)

{
  undefined4 local_8;
  
  local_8 = CONCAT22(*(short *)((int)this + 0x5a) - *(short *)((int)this + 0x56),
                     *(short *)((int)this + 0x5c) - *(short *)((int)this + 0x58));
  *param_1 = local_8;
  return;
}


