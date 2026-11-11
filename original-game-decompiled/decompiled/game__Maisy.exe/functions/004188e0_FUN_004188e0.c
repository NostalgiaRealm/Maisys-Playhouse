
/* ==== FUN_004188e0 @ 004188e0 ==== 
 * signature: undefined4 __fastcall FUN_004188e0(int param_1)
 * body: 004188e0-004188f2
 */

undefined4 __fastcall FUN_004188e0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14a) & 0x2000000;
  return CONCAT31((int3)(uVar1 >> 8),'\x01' - (uVar1 == 0));
}


