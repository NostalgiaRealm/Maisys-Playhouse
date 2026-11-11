
/* ==== FUN_004155a0 @ 004155a0 ==== 
 * signature: undefined __thiscall FUN_004155a0(void * this, undefined4 * param_1)
 * body: 004155a0-004155b8
 */

void __thiscall FUN_004155a0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + 0x4e);
  *param_1 = *(undefined4 *)((int)this + 0x4a);
  param_1[1] = uVar1;
  return;
}


