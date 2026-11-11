
/* ==== FUN_0040d0a0 @ 0040d0a0 ==== 
 * signature: undefined __thiscall FUN_0040d0a0(void * this, undefined4 * param_1)
 * body: 0040d0a0-0040d0b7
 */

void __thiscall FUN_0040d0a0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  *(undefined4 *)((int)this + 0x2a) = *param_1;
  *(undefined4 *)((int)this + 0x2e) = uVar1;
  return;
}


