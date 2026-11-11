
/* ==== FUN_0040d0c0 @ 0040d0c0 ==== 
 * signature: undefined __thiscall FUN_0040d0c0(void * this, undefined4 * param_1)
 * body: 0040d0c0-0040d0d8
 */

void __thiscall FUN_0040d0c0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + 0x36);
  *param_1 = *(undefined4 *)((int)this + 0x32);
  param_1[1] = uVar1;
  return;
}


