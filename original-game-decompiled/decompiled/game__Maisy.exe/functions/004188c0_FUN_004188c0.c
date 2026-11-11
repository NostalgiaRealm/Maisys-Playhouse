
/* ==== FUN_004188c0 @ 004188c0 ==== 
 * signature: undefined4 __fastcall FUN_004188c0(int param_1)
 * body: 004188c0-004188d2
 */

undefined4 __fastcall FUN_004188c0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14a) & 0x4000000;
  return CONCAT31((int3)(uVar1 >> 8),'\x01' - (uVar1 == 0));
}


