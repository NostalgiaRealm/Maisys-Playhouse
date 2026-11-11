
/* ==== FUN_00418760 @ 00418760 ==== 
 * signature: undefined4 __fastcall FUN_00418760(int param_1)
 * body: 00418760-0041876f
 */

undefined4 __fastcall FUN_00418760(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x26) & 0x1000;
  return CONCAT31((int3)(uVar1 >> 8),'\x01' - (uVar1 == 0));
}


