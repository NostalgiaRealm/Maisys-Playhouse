
/* ==== FUN_00469930 @ 00469930 ==== 
 * signature: undefined __thiscall FUN_00469930(void * this, undefined4 * param_1)
 * body: 00469930-0046994b
 */

void __thiscall FUN_00469930(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + 0x82);
  *param_1 = *(undefined4 *)((int)this + 0x7e);
  param_1[1] = uVar1;
  return;
}


