
/* ==== FUN_00469600 @ 00469600 ==== 
 * signature: undefined4 __stdcall FUN_00469600(int param_1)
 * body: 00469600-00469619
 */

undefined4 FUN_00469600(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x1e) & 0x400;
  return CONCAT31((int3)(uVar1 >> 8),'\x01' - (uVar1 == 0));
}


