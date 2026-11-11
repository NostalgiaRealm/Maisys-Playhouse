
/* ==== FUN_00418780 @ 00418780 ==== 
 * signature: undefined4 __fastcall FUN_00418780(int param_1)
 * body: 00418780-0041878f
 */

undefined4 __fastcall FUN_00418780(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x26) & 0x4000000;
  return CONCAT31((int3)(uVar1 >> 8),'\x01' - (uVar1 == 0));
}


