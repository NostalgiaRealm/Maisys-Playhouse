
/* ==== FUN_004a3ee1 @ 004a3ee1 ==== 
 * signature: undefined __thiscall FUN_004a3ee1(void * this, undefined4 param_1, undefined4 param_2)
 * body: 004a3ee1-004a3f0a
 */

void __thiscall FUN_004a3ee1(void *this,undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x90);
  if ((uVar1 & 0x80000) != 0) {
    param_1 = param_2;
  }
  *(undefined4 *)((int)this + 0xa4) = param_1;
  *(uint *)((int)this + 0x90) = uVar1 | 0x40;
  return;
}


