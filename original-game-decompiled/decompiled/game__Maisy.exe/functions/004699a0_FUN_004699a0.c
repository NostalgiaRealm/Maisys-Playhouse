
/* ==== FUN_004699a0 @ 004699a0 ==== 
 * signature: undefined __thiscall FUN_004699a0(void * this, undefined4 * param_1)
 * body: 004699a0-004699ba
 */

void __thiscall FUN_004699a0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  *(undefined4 *)((int)this + 0x86) = *param_1;
  *(undefined4 *)((int)this + 0x8a) = uVar1;
  return;
}


