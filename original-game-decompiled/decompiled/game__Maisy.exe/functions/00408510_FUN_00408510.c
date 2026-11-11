
/* ==== FUN_00408510 @ 00408510 ==== 
 * signature: undefined __thiscall FUN_00408510(void * this, undefined4 * param_1)
 * body: 00408510-00408531
 */

void __thiscall FUN_00408510(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + 0xbc);
  *param_1 = *(undefined4 *)((int)this + 0xb8);
  param_1[1] = uVar1;
  return;
}


