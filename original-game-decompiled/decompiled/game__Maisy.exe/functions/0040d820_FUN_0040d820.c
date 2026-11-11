
/* ==== FUN_0040d820 @ 0040d820 ==== 
 * signature: undefined4 __thiscall FUN_0040d820(void * this, char param_1)
 * body: 0040d820-0040d844
 */

undefined4 __thiscall FUN_0040d820(void *this,char param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x3e) & 1 << (0x1fU - param_1 & 0x1f);
  return CONCAT31((int3)(uVar1 >> 8),'\x01' - (uVar1 == 0));
}


