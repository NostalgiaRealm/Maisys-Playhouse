
/* ==== FUN_00415460 @ 00415460 ==== 
 * signature: undefined __thiscall FUN_00415460(void * this, undefined4 * param_1)
 * body: 00415460-00415478
 */

void __thiscall FUN_00415460(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + 0x56);
  *param_1 = *(undefined4 *)((int)this + 0x52);
  param_1[1] = uVar1;
  return;
}


