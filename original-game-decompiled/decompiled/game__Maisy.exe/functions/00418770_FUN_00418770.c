
/* ==== FUN_00418770 @ 00418770 ==== 
 * signature: undefined4 __fastcall FUN_00418770(int param_1)
 * body: 00418770-0041877f
 */

undefined4 __fastcall FUN_00418770(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x26) & 0x2000000;
  return CONCAT31((int3)(uVar1 >> 8),'\x01' - (uVar1 == 0));
}


