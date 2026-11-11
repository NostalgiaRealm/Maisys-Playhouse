
/* ==== FUN_004696f0 @ 004696f0 ==== 
 * signature: undefined4 __stdcall FUN_004696f0(int param_1)
 * body: 004696f0-00469709
 */

undefined4 FUN_004696f0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x26) & 0x10000000;
  return CONCAT31((int3)(uVar1 >> 8),'\x01' - (uVar1 == 0));
}


