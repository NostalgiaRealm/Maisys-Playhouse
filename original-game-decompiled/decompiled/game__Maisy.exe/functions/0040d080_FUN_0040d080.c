
/* ==== FUN_0040d080 @ 0040d080 ==== 
 * signature: undefined __thiscall FUN_0040d080(void * this, undefined4 * param_1)
 * body: 0040d080-0040d098
 */

void __thiscall FUN_0040d080(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + 0x2e);
  *param_1 = *(undefined4 *)((int)this + 0x2a);
  param_1[1] = uVar1;
  return;
}


